#ifndef _WORLD_
#define  _WORLD_
//-----------headers------------------

#include "player.h"
#include "rooms.h"
#include "vector.h"
#include "Item.h"
#include "strings.h"
//------------------------


class world {
public:
		
	Vector<room*> Room;
	Vector<exits*>Exit;
	Vector<Player*>player;
	Vector<Item*> item;

	world();//build
	~world();// destroy
	
	bool checkinloop(mString&);
	void createWorld();
};//class world

#endif
