// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2000,2001 Alistair Riddoch
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


#include "LocatedEntity.h"

#include "Domain.h"

#include "Script.h"
#include "rules/AtlasProperties.h"

#include "common/TypeNode.h"

#include <Atlas/Objects/RootOperation.h>
#include <Atlas/Objects/Operation.h>
#include <Atlas/Objects/Anonymous.h>

using Atlas::Message::Element;
using Atlas::Message::MapType;

/// \brief Set of attribute names which must not be changed
///
/// The attributes named are special and are modified using high level
/// operations, such as Move, not via Set operations, or assigned by
/// normal means.
std::set<std::string> LocatedEntity::s_immutable = {"id", "parent", "pos", "loc", "velocity", "orientation", "contains", "objtype"};

/// \brief Singleton accessor for immutables
///
/// The immutable attribute set m_immutables is returned.
const std::set<std::string>& LocatedEntity::immutables()
{
    return s_immutable;
}

/// \brief LocatedEntity constructor
LocatedEntity::LocatedEntity(const std::string& id, long intId) :
    Router(id, intId),
    m_seq(0),
    m_type(nullptr),
    m_flags(0),
    m_contains(nullptr)
{
    m_properties[IdProperty::property_name] = new IdProperty(getId());
}

LocatedEntity::~LocatedEntity()
{
    clearProperties();

    for (auto script : m_scripts) {
        delete script;
    }

    delete m_contains;
}

void LocatedEntity::clearProperties()
{

    if (m_type) {
        for (auto entry : m_type->defaults()) {
            //Only remove if there's no instance specific property.
            if (m_properties.find(entry.first) == m_properties.end()) {
                entry.second->remove(this, entry.first);
            }
        }
    }

    for (auto entry : m_properties) {
        entry.second->remove(this, entry.first);
        delete entry.second;
    }
    m_properties.clear();

}

void LocatedEntity::setType(const TypeNode* t)
{
    m_type = t;
}

/// \brief Check if this entity has a property with the given name
///
/// @param name Name of attribute to be checked
/// @return true if this entity has an attribute with the name given
/// false otherwise
bool LocatedEntity::hasAttr(const std::string& name) const
{
    auto I = m_properties.find(name);
    if (I != m_properties.end()) {
        return true;
    }
    if (m_type != nullptr) {
        I = m_type->defaults().find(name);
        if (I != m_type->defaults().end()) {
            return true;
        }
    }
    return false;
}

/// \brief Get the value of an attribute
///
/// @param name Name of attribute to be retrieved
/// @param attr Reference used to store value
/// @return zero if this entity has an attribute with the name given
/// nonzero otherwise
int LocatedEntity::getAttr(const std::string& name,
                           Element& attr) const
{
    auto I = m_properties.find(name);
    if (I != m_properties.end()) {
        return I->second->get(attr);
    }
    if (m_type != nullptr) {
        I = m_type->defaults().find(name);
        if (I != m_type->defaults().end()) {
            return I->second->get(attr);
        }
    }
    return -1;
}

/// \brief Get the value of an attribute if it is the right type
///
/// @param name Name of attribute to be retrieved
/// @param attr Reference used to store value
/// @return zero if this entity has an attribute with the name given
/// nonzero otherwise
int LocatedEntity::getAttrType(const std::string& name,
                               Element& attr,
                               int type) const
{
    auto I = m_properties.find(name);
    if (I != m_properties.end()) {
        return I->second->get(attr) || (attr.getType() == type ? 0 : 1);
    }
    if (m_type != nullptr) {
        I = m_type->defaults().find(name);
        if (I != m_type->defaults().end()) {
            return I->second->get(attr) || (attr.getType() == type ? 0 : 1);
        }
    }
    return -1;
}

/// \brief Set the value of an attribute
///
/// @param name Name of attribute to be changed
/// @param attr Value to be stored
PropertyBase* LocatedEntity::setAttr(const std::string& name,
                                     const Element& attr)
{
    PropertyDict::const_iterator I = m_properties.find(name);
    if (I != m_properties.end()) {
        I->second->set(attr);
        return I->second;
    }
    auto prop = new SoftProperty(attr);
    prop->addFlags(PropertyBase::flagsForPropertyName(name));
    m_properties.emplace(name, prop);
    return prop;
}

/// \brief Get the property object for a given attribute
///
/// @param name name of the attribute for which the property is required.
/// @return a pointer to the property, or zero if the attributes does
/// not exist, or is not stored using a property object.
const PropertyBase* LocatedEntity::getProperty(const std::string& name) const
{
    auto I = m_properties.find(name);
    if (I != m_properties.end()) {
        return I->second;
    }
    return nullptr;
}

PropertyBase* LocatedEntity::modProperty(const std::string& name, const Atlas::Message::Element & def_val)
{
    auto I = m_properties.find(name);
    if (I != m_properties.end()) {
        return I->second;
    }
    return nullptr;
}

PropertyBase* LocatedEntity::setProperty(const std::string& name,
                                         PropertyBase* prop)
{
    return m_properties[name] = prop;
}

void LocatedEntity::installDelegate(int, const std::string&)
{
}

void LocatedEntity::removeDelegate(int, const std::string&)
{
}

/// \brief Called when the container of this entity changes.
///
void LocatedEntity::onContainered(const Ref<LocatedEntity>& new_loc)
{
}

/// \brief Called when the properties of this entity change.
///
void LocatedEntity::onUpdated()
{
}

/// \brief Called when the entity needs to be removed from its context
void LocatedEntity::destroy()
{
    for (auto script : m_scripts) {
        delete script;
    }
    m_scripts.clear();

    if (m_location.m_parent) {
        m_location.m_parent->removeChild(*this);
    }

    clearProperties();

    m_flags.addFlags(entity_destroyed);
    destroyed.emit();

}

Domain* LocatedEntity::getDomain()
{
    return nullptr;
}

const Domain* LocatedEntity::getDomain() const
{
    return nullptr;
}


/// \brief Send an operation to the world for dispatch.
///
/// sendWorld() bypasses serialno assignment, so you must ensure
/// that serialno is sorted. This allows client serialnos to get
/// in, so that client gets correct useful refnos back.
void LocatedEntity::sendWorld(const Operation& op)
{
}

/// \brief Associate a script with this entity
///
/// The previously associated script is deleted.
/// @param scrpt Pointer to the script to be associated with this entity
void LocatedEntity::setScript(Script* scrpt)
{
    m_scripts.push_back(scrpt);
}

std::vector<Atlas::Objects::Root> LocatedEntity::getThoughts() const
{
    return std::vector<Atlas::Objects::Root>();
}


/// \brief Make this entity a container
///
/// If this entity is not already a contains, set up the necessary
/// storage and property.
void LocatedEntity::makeContainer()
{
    if (m_contains == nullptr) {
        m_contains = new LocatedEntitySet;
        m_properties["contains"] = new ContainsProperty(*m_contains);
    }
}

/// \brief Change the container of an entity
///
/// @param new_loc The entity which is to become this entity's new
/// container.
void LocatedEntity::changeContainer(const Ref<LocatedEntity>& new_loc)
{
    auto oldLoc = m_location.m_parent;
    oldLoc->removeChild(*this);
    new_loc->addChild(*this);
    assert(m_location.m_parent->checkRef() > 0);

    onContainered(oldLoc);
}

void LocatedEntity::broadcast(const Atlas::Objects::Operation::RootOperation& op, OpVector& res, Visibility visibility) const
{
    std::set<const LocatedEntity*> receivers;
    collectObservers(receivers);

    for (auto& entity : receivers) {
        if (visibility == Visibility::PRIVATE) {
            //Only send private ops to admins
            if (!entity->hasFlags(entity_admin)) {
                continue;
            }
        } else if (visibility == Visibility::PROTECTED) {
            //Protected ops also goes to the entity itself
            if (!entity->hasFlags(entity_admin) &&
                entity->getIntId() != getIntId()) {
                continue;
            }
        }
        auto newOp = op.copy();
        newOp->setTo(entity->getId());
        newOp->setFrom(getId());
        res.push_back(newOp);
    }

}

void LocatedEntity::collectObservers(std::set<const LocatedEntity*>& receivers) const
{
    if (isPerceptive()) {
        receivers.insert(this);
    }
    const Domain* domain = getDomain();
    if (domain) {
        auto observingEntities = domain->getObservingEntitiesFor(*this);
        receivers.insert(observingEntities.begin(), observingEntities.end());
    }
    if (m_location.m_parent) {
        m_location.m_parent->collectObserversForChild(*this, receivers);
    }

}


void LocatedEntity::collectObserversForChild(const LocatedEntity& child, std::set<const LocatedEntity*>& receivers) const
{
    const Domain* domain = getDomain();

    if (isPerceptive()) {
        receivers.insert(this);
    }

    if (domain) {
        auto observingEntities = domain->getObservingEntitiesFor(child);
        receivers.insert(observingEntities.begin(), observingEntities.end());
    }
    if (m_location.m_parent) {
        //If this entity have a movement domain, check if the child entity is visible to the parent entity (i.e. it's "exposed outside of the domain"). If not, the broadcast chain stops here.
        if (domain && !domain->isEntityVisibleFor(*m_location.m_parent, child)) {
            return;
        }
        m_location.m_parent->collectObserversForChild(*this, receivers);
    }
}

void LocatedEntity::processAppearDisappear(std::set<const LocatedEntity*> previousObserving, OpVector& res) const
{
    std::set<const LocatedEntity*> nowObservers;
    collectObservers(nowObservers);
    for (auto entity : nowObservers) {
        auto numberErased = previousObserving.erase(entity);
        if (numberErased == 0) {
            Atlas::Objects::Operation::Appearance appear;
            Atlas::Objects::Entity::Anonymous that_ent;
            that_ent->setId(getId());
            that_ent->setStamp(getSeq());
            appear->setArgs1(that_ent);
            appear->setTo(entity->getId());
            res.push_back(appear);
        }
    }

    for (auto entity : previousObserving) {
        Atlas::Objects::Operation::Disappearance disappear;
        Atlas::Objects::Entity::Anonymous that_ent;
        that_ent->setId(getId());
        that_ent->setStamp(getSeq());
        disappear->setArgs1(that_ent);
        disappear->setTo(entity->getId());
        res.push_back(disappear);
    }
}

void LocatedEntity::applyProperty(const std::string& name, PropertyBase* prop) {
    // Allow the value to take effect.
    prop->apply(this);
    prop->addFlags(flag_unsent);
    propertyApplied(name, *prop);
    // Mark the Entity as unclean
    m_flags.removeFlags(entity_clean);
}

void LocatedEntity::addChild(LocatedEntity& childEntity)
{
    makeContainer();
    bool was_empty = m_contains->empty();
    m_contains->insert(&childEntity);
    if (was_empty) {
        onUpdated();
    }

    childEntity.m_location.m_parent = this;
}

void LocatedEntity::removeChild(LocatedEntity& childEntity)
{
    assert(checkRef() > 0);
    assert(m_contains != nullptr);
    assert(m_contains->count(&childEntity));
    m_contains->erase(&childEntity);
    if (m_contains->empty()) {
        onUpdated();
    }
}

void LocatedEntity::addListener(OperationsListener* listener)
{
    //No-op in LocatedEntity
}

void LocatedEntity::removeListener(OperationsListener* listener)
{
    //No-op in LocatedEntity
}

bool LocatedEntity::isVisibleForOtherEntity(const LocatedEntity* watcher) const
{
    //Are we looking at ourselves?
    if (watcher == this) {
        return true;
    }

    //Optimize for the most common case of both entities being direct child of a domain
    if (m_location.m_parent != nullptr && watcher->m_location.m_parent == m_location.m_parent && m_location.m_parent->getDomain()) {
        return m_location.m_parent->getDomain()->isEntityVisibleFor(*watcher, *this);
    }

    //First find the domain which contains the watcher, as well as if the watcher has a domain itself.
    const LocatedEntity* domainEntity = watcher->m_location.m_parent.get();
    const LocatedEntity* topWatcherEntity = watcher;
    const Domain* watcherParentDomain = nullptr;

    while (domainEntity != nullptr) {
        watcherParentDomain = domainEntity->getDomain();
        if (watcherParentDomain) {
            break;
        }
        topWatcherEntity = domainEntity;
        domainEntity = domainEntity->m_location.m_parent.get();
    }

    domainEntity = watcher->m_location.m_parent.get();
    const Domain* watcherOwnDomain = watcher->getDomain();

    //Now walk upwards from the entity being looked at until we reach either the watcher's parent domain entity,
    //or the watcher itself
    std::vector<const LocatedEntity*> toAncestors;
    toAncestors.reserve(4);
    const LocatedEntity* ancestorEntity = this;
    const Domain* ancestorDomain = nullptr;


    while (true) {
        toAncestors.push_back(ancestorEntity);

        if (ancestorEntity == watcher) {
            ancestorDomain = watcherOwnDomain;
            break;
        }
        if (ancestorEntity == domainEntity) {
            ancestorDomain = watcherParentDomain;
            break;
        }
        if (ancestorEntity == topWatcherEntity) {
            break;
        }
        ancestorEntity = ancestorEntity->m_location.m_parent.get();
        if (ancestorEntity == nullptr) {
            //Could find no common ancestor; can't be seen.
            return false;
        }
    }

    //Now walk back down the toAncestors list, checking if all entities on the way can be seen.
    //Visibility is only checked for the first immediate child of a domain entity, further grandchildren are considered visible if the top one is, until
    //another domain is reached.
    for (auto I = toAncestors.rbegin(); I != toAncestors.rend(); ++I) {
        const LocatedEntity* ancestor = *I;
        if (ancestorDomain) {
            if (!ancestorDomain->isEntityVisibleFor(*watcher, *ancestor)) {
                return false;
            }
        }

        ancestorDomain = ancestor->getDomain();
    }
    return true;
}

bool LocatedEntity::canReach(const EntityLocation& entityLocation, float extraReach) const
{
    auto reachingEntity = this;
    //Are we reaching for our ourselves?
    if (reachingEntity == entityLocation.m_parent.get()) {
        return true;
    }

    //Is the reacher a "creator"?
    if (reachingEntity->getType()->isTypeOf("creator")) {
        return true;
    }

    double reachDistance = 0;
    auto reachProp = reachingEntity->getPropertyType<double>("reach");
    if (reachProp) {
        reachDistance = reachProp->data();
    }
    reachDistance += extraReach;

    //First find the domain which contains the reacher, as well as if the reacher has a domain itself.
    const LocatedEntity* domainEntity = reachingEntity->m_location.m_parent.get();
    const LocatedEntity* topReachingEntity = reachingEntity;
    const Domain* reacherParentDomain = nullptr;
    const LocatedEntity* reacherDomainEntity = nullptr; //The entity which contains the reacher's domain

    while (domainEntity != nullptr) {
        reacherParentDomain = domainEntity->getDomain();
        if (reacherParentDomain) {
            reacherDomainEntity = domainEntity;
            break;
        }
        topReachingEntity = domainEntity;
        domainEntity = domainEntity->m_location.m_parent.get();
    }

    //Now walk upwards from the entity being reached for until we reach either the reacher's parent domain entity,
    //or the reacher itself
    std::vector<const LocatedEntity*> toAncestors;
    toAncestors.reserve(4);
    auto ancestorEntity = entityLocation.m_parent;

    while (true) {
        if (ancestorEntity == reacherDomainEntity) {
            if (ancestorEntity == entityLocation.m_parent) {
                //We're trying to reach our containing domain entity, handle separately
                return !(reacherParentDomain && !reacherParentDomain->isEntityReachable(*reachingEntity, reachDistance, *reacherDomainEntity, entityLocation.m_pos));
            }
            break;
        }
        if (ancestorEntity == reachingEntity) {
            break;
        }

        toAncestors.push_back(ancestorEntity.get());

        if (ancestorEntity == topReachingEntity) {
            break;
        }
        ancestorEntity = ancestorEntity->m_location.m_parent;
        if (ancestorEntity == nullptr) {
            //Could find no common ancestor; can't be reached.
            return false;
        }
    }

    if (toAncestors.empty()) {
        return false;
    }

    //Now walk back down the toAncestors list, checking if all entities on the way can be reached.
    //Reachability is only checked for the first immediate child of a domain entity, further grandchildren are considered reachable if the top one is, until
    //another domain is reached.
    for (auto I = toAncestors.rbegin(); I != toAncestors.rend(); ++I) {
        const LocatedEntity* ancestor = *I;
        auto domain = ancestor->m_location.m_parent ? ancestor->m_location.m_parent->getDomain() : nullptr;
        if (domain && !domain->isEntityReachable(*reachingEntity, reachDistance, *ancestor, entityLocation.m_pos)) {
            return false;
        }
    }
    return true;
}

/// \brief Read attributes from an Atlas element
///
/// @param ent The Atlas map element containing the attribute values
void LocatedEntity::merge(const MapType& ent)
{
    const std::set<std::string>& imm = immutables();
    auto Iend = ent.end();
    for (auto I = ent.begin(); I != Iend; ++I) {
        const std::string& key = I->first;
        if (key.empty()) {
            continue;
        }
        if (imm.find(key) != imm.end()) { continue; }
        setAttr(key, I->second);
    }
}

std::string LocatedEntity::describeEntity() const
{
    std::stringstream ss;
    Element nameAttr;
    int nameResult = getAttrType("name", nameAttr, Element::TYPE_STRING);
    ss << getId();
    if (m_type) {
        ss << "(" << m_type->name();
        if (nameResult == 0) {
            ss << ",'" << nameAttr.String() << "'";
        }
        ss << ")";
    } else {
        if (nameResult == 0) {
            ss << "('" << nameAttr.String() << "')";
        }
    }

    return ss.str();
}

