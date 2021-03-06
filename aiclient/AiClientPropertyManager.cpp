/*
 Copyright (C) 2018 Erik Ogenvik

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include "AiClientPropertyManager.h"

#include "rules/BBoxProperty.h"
#include "common/PropertyFactory.h"
#include "common/PropertyFactory_impl.h"
using Atlas::Message::Element;
using Atlas::Message::ListType;
using Atlas::Message::MapType;
using Atlas::Objects::Root;
AiClientPropertyManager::AiClientPropertyManager()
{
    PropertyManager::installFactory(BBoxProperty::property_atlastype, std::make_unique<PropertyFactory<BBoxProperty>>());
}

PropertyBase* AiClientPropertyManager::addProperty(const std::string& name,
                                                   int type)
{
    PropertyBase* p = nullptr;
    auto I = m_propertyFactories.find(name);
    if (I == m_propertyFactories.end()) {
        switch (type) {
            case Element::TYPE_INT:
                p = new Property<int>;
                break;
            case Element::TYPE_FLOAT:
                p = new Property<double>;
                break;
            case Element::TYPE_STRING:
                p = new Property<std::string>;
                break;
            default:
                p = new SoftProperty;
                break;
        }
    } else {
        p = I->second->newProperty();
    }
    return p;
}
