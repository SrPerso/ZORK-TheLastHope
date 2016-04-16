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

	
	Vector<room*> Room;
	Vector<exits*>Exit;
	Vector<Player*> player;

	Vector <entity*> entity_;

	world();//build
	~world();// destroy

	void Initialize();


	void CreateExits()const;
	void CreatePlayer()const;
	bool checkings();


};//class world

#endif
