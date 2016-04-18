#ifndef _WORLD_
#define  _WORLD_
//-----------headers------------------

#include "player.h"
#include "rooms.h"
#include "vector.h"
#include "Item.h"
//------------------------
class world {
public:
		
	Vector<room*> Room;
	Vector<exits*>Exit;
	Vector<Player*>player;
	Vector<Item*> item;

	world();//build
	~world();// destroy
	//void go(const dir tgo);
	bool checkinloop();
	void createWorld();
};//class world

#endif
