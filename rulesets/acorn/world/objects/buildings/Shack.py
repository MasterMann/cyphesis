#This file is distributed under the terms of the GNU General Public license.
#Copyright (C) 2001 Al Riddoch (See the file COPYING for details).

from cyphesis.Thing import Thing
from atlas import *
from Vector3D import Vector3D

# bbox = 4,4,2.5
# bmedian = 3.5,3.5,2.5
# offset = SW corner = -0.5,-0.5

class Shack_deco_1(Thing):
    def setup_operation(self, op):
        ret = Oplist()
        # West wall
	loc = Location(self, Vector3D(-0.5, 0, -3.5))
        loc.bbox = Vector3D(0.5, 5, -4)
        ret.append(Operation("create",Entity(name='wall',parent='wall',location=loc),to=self))
        # North wall
	loc = Location(self, Vector3D(-0.5, 0, -7))
        loc.bbox = Vector3D(8, 5, -0.5)
        ret.append(Operation("create",Entity(name='wall',parent='wall',location=loc),to=self))
        # East wall
	loc = Location(self, Vector3D(7, 0, 0.5))
        loc.bbox = Vector3D(0.5, 5, -8)
        ret.append(Operation("create",Entity(name='wall',parent='wall',location=loc),to=self))
        return ret
