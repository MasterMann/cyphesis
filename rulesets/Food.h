// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2000,2001 Alistair Riddoch

#ifndef FOOD_H
#define FOOD_H

#include "Thing.h"

// This is the base class for edible things. Most of the functionality
// will be common to all food, and most derived classes will probably
// be in python.


class Food : public Thing {
  public:

    Food();
    virtual ~Food();

    virtual oplist EatOperation(const Eat & op);
    virtual oplist FireOperation(const Fire & op);
};

#endif // FOOD_H
