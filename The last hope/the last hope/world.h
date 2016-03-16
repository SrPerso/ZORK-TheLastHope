//-----------headers------------------
#include "global.h"
#include "bicho.h"
#include "rooms.h"
#include "exits.h"
//------------------------



#ifndef _WORLD_
#define  _WORLD_

class world {
public:
	bicho* player = nullptr;
	room* rooms = nullptr;
	exits* exit = nullptr;

	world();//build
	~world();// destroy


	void createworld();


	bool checkings();
};//class world

#endif
