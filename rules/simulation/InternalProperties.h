// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2008 Alistair Riddoch
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


#ifndef RULESETS_INTERNAL_PROPERTIES_H
#define RULESETS_INTERNAL_PROPERTIES_H

#include "common/Property.h"

/// \brief Class to handle Entity which requires a Setup operation
/// \ingroup PropertyClasses
class SetupProperty : public Property<int> {
  public:
    static constexpr const char* property_name = "init";

    explicit SetupProperty() = default;

    SetupProperty * copy() const override;

    void install(LocatedEntity *, const std::string &) override;
};

/// \brief Class to handle Entity which requires a Tick operation
/// \ingroup PropertyClasses
class TickProperty : public Property<double> {
  public:

    static constexpr const char* property_name = "ticks";

    explicit TickProperty() = default;

    TickProperty * copy() const override;

    void apply(LocatedEntity *) override;
};

#endif // RULESETS_INTERNAL_PROPERTIES_H
