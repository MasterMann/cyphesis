// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2010 Alistair Riddoch
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA


#ifdef NDEBUG
#undef NDEBUG
#endif
#ifndef DEBUG
#define DEBUG
#endif

#include "server/StorageManager.h"

#include "server/WorldRouter.h"
#include "server/MindInspector.h"

#include "rules/simulation/Entity.h"
#include "rules/simulation/MindProperty.h"

#include "common/SystemTime.h"
#include "DatabaseNull.h"

#include <cassert>
#include <server/EntityBuilder.h>

using Atlas::Message::Element;

class TestStorageManager : public StorageManager
{
  public:
    TestStorageManager(WorldRouter&w) : StorageManager(w) { }

    
    void test_entityInserted(LocatedEntity * e) {
        entityInserted(e);
    }
    void test_entityUpdated(LocatedEntity * e) {
        entityUpdated(e);
    }

    void test_encodeProperty(PropertyBase * p, std::string & s) {
        encodeProperty(p, s);
    }
    void test_restoreProperties(LocatedEntity * e) {
        restorePropertiesRecursively(e);
    }

    void test_insertEntity(LocatedEntity * e) {
        insertEntity(e);
    }
    void test_updateEntity(LocatedEntity * e) {
        updateEntity(e);
    }
    void test_restoreChildren(LocatedEntity * e) {
        restoreChildren(e);
    }


};

int main()
{
    EntityBuilder eb;
    DatabaseNull database;
    Persistence persistence(database);

    Ref<LocatedEntity> le = new Entity("", 0);

    {
        SystemTime time;
        WorldRouter world(time, le);

        StorageManager store(world);
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        StorageManager store(world);

        store.initWorld(le);
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        StorageManager store(world);

        store.restoreWorld(le);
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        StorageManager store(world);

        store.tick();
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        TestStorageManager store(world);

        store.test_entityInserted(new Entity("1", 1));
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        TestStorageManager store(world);

        store.test_entityUpdated(new Entity("1", 1));
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        TestStorageManager store(world);

        std::string val;

        // store.test_encodeProperty(0, val);
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        TestStorageManager store(world);

        store.test_restoreProperties(new Entity("1", 1));
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        TestStorageManager store(world);

        store.test_insertEntity(new Entity("1", 1));
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        TestStorageManager store(world);

        store.test_updateEntity(new Entity("1", 1));
    }

    {
        SystemTime time;
        WorldRouter world(time, le);

        TestStorageManager store(world);

        store.test_restoreChildren(new Entity("1", 1));
    }



    return 0;
}

// stubs

#include "server/CorePropertyManager.h"
#include "server/EntityBuilder.h"

#include "rules/Script.h"

#include "modules/WeakEntityRef.h"
#include "rules/Location.h"

#include "common/const.h"
#include "common/Database.h"
#include "common/globals.h"
#include "common/log.h"
#include "common/Monitors.h"
#include "common/PropertyManager.h"
#include "common/SystemTime.h"
#include "common/Variable.h"

#include "stubs/server/stubWorldRouter.h"
#include "stubs/rules/stubLocation.h"
#include "stubs/rules/simulation/stubEntity.h"
#include "stubs/rules/simulation/stubThing.h"
#include "stubs/rules/simulation/stubBaseWorld.h"

#include <Atlas/Objects/RootOperation.h>
#include <Atlas/Objects/SmartPtr.h>

#include <cstdlib>

#include <iostream>

using Atlas::Message::MapType;
using Atlas::Objects::Entity::RootEntity;

#include "stubs/server/stubEntityBuilder.h"
#include "stubs/rules/stubLocatedEntity.h"
#include "stubs/common/stubRouter.h"

#define STUB_Database_selectEntities
DatabaseResult Database::selectEntities(const std::string & loc)
{
    return DatabaseResult(std::unique_ptr<DatabaseNullResultWorker>(new DatabaseNullResultWorker()));
}

#define STUB_Database_selectProperties
DatabaseResult Database::selectProperties(const std::string& loc)
{
    return DatabaseResult(std::unique_ptr<DatabaseNullResultWorker>(new DatabaseNullResultWorker()));
}

#define STUB_Database_selectThoughts
DatabaseResult Database::selectThoughts(const std::string& loc)
{
    return DatabaseResult(std::unique_ptr<DatabaseNullResultWorker>(new DatabaseNullResultWorker()));
}

#include "stubs/common/stubDatabase.h"
#include "stubs/server/stubPersistence.h"

#include "stubs/common/stubPropertyManager.h"

#include "stubs/rules/stubScript.h"
#include "stubs/modules/stubWeakEntityRef.h"


VariableBase::~VariableBase()
{
}

template <typename T>
Variable<T>::Variable(const T & variable) : m_variable(variable)
{
}

template <typename T>
Variable<T>::~Variable()
{
}

template <typename T>
void Variable<T>::send(std::ostream & o)
{
    o << m_variable;
}

template <typename T>
bool Variable<T>::isNumeric() const
{
    return false;
}

template class Variable<int>;
template class Variable<const char *>;
template class Variable<std::string>;

#include "stubs/common/stubMonitors.h"
#include "stubs/common/stubOperationsDispatcher.h"


MindInspector::MindInspector() :
        m_serial(0)
{
}

MindInspector::~MindInspector()
{
}

void MindInspector::queryEntityForThoughts(const std::string& entityId)
{
}

void MindInspector::relayResponseReceived(const Operation& op,
        const std::string& entityId)
{
}

PropertyBase::PropertyBase(unsigned int flags) : m_flags(flags)
{
}

void PropertyBase::install(LocatedEntity *, const std::string & name)
{
}

void PropertyBase::install(TypeNode *, const std::string & name)
{
}

void PropertyBase::remove(LocatedEntity *, const std::string & name)
{
}

void PropertyBase::apply(LocatedEntity *)
{
}

void PropertyBase::add(const std::string & s,
                       Atlas::Message::MapType & ent) const
{
    get(ent[s]);
}

void PropertyBase::add(const std::string & s,
                       const Atlas::Objects::Entity::RootEntity & ent) const
{
}

HandlerResult PropertyBase::operation(LocatedEntity *,
                                      const Operation &,
                                      OpVector &)
{
    return OPERATION_IGNORED;
}

template <typename T>
Property<T>::Property(unsigned int flags) :
                      PropertyBase(flags)
{
}

template <typename T>
int Property<T>::get(Atlas::Message::Element & e) const
{
    return 0;
}

// The following two are obsolete.
template <typename T>
void Property<T>::add(const std::string & s,
                               Atlas::Message::MapType & ent) const
{
}

template <typename T>
void Property<T>::add(const std::string & s,
                               const Atlas::Objects::Entity::RootEntity & ent) const
{
}

template <typename T>
void Property<T>::set(const Atlas::Message::Element & e)
{
}

template <typename T>
Property<T> * Property<T>::copy() const
{
    return new Property<T>(*this);
}


template class Property<MapType>;


bool MindProperty::isMindEnabled() const {
    return false;
}

void MindProperty::set(const Element & val)
{
}

MindProperty * MindProperty::copy() const
{
    return 0;
}

void MindProperty::apply(LocatedEntity * ent)
{
}


long forceIntegerId(const std::string & id)
{
    long intId = strtol(id.c_str(), 0, 10);
    if (intId == 0 && id != "0") {
        abort();
    }

    return intId;
}

void log(LogLevel lvl, const std::string & msg)
{
}

bool database_flag = true;

namespace consts {

  // Id of root world entity
  const char * rootWorldId = "0";
  // Integer id of root world entity
  const long rootWorldIntId = 0L;

}

namespace Atlas { namespace Objects { namespace Operation {
int THINK_NO = -1;
} } }
