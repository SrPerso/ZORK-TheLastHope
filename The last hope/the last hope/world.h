//-----------headers------------------
#include "global.h"
#include "player.h"
#include "rooms.h"
#include "exits.h"
#include "vector.h"
//------------------------



#ifndef _WORLD_
#define  _WORLD_

class world {
public:

	Vector <Player*> player;


	//Player* player = nullptr;
	room* rooms = nullptr;
	exits* exit = nullptr;

	world();//build
	~world();// destroy


	void CreateWorld()const;
	void CreateExits()const;
	void CreatePlayer()const;
	bool checkings();


};//class world

#endif
