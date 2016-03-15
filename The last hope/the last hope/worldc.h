//-----------headers------------------
#include "principal.h"
#include "bicho.h"
#include "rooms.h"
#include "exits.h"
//------------------------
enum dir {
	NORTH,
	SOUTH,
	EAST,
	WEST,
	UP,
	DOWN
};

#ifndef _WORLD_
#define  _WORLD_

class world {
public:
	bicho* player = nullptr;
	room* rooms = nullptr;
	exits* exit = nullptr;

	world();//build
	~world();// destroy


	void creatingrooms();
	void creatingexits();
	void creatingbichos();
};//class world

#endif
