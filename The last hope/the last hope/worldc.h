//-----------headers------------------
#include "principal.h"
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


	void createrooms();
	void createexits();
	void createbichos();

	bool checkings();
};//class world

#endif
