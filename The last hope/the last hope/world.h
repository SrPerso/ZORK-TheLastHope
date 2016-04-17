

#ifndef _WORLD_
#define  _WORLD_
//-----------headers------------------

#include "player.h"
#include "rooms.h"
#include "vector.h"
//------------------------
class world {
public:

	
	Vector<room*> Room;
	Vector<exits*>Exit;
	Vector<Player*> player;

	Vector <entity*> entity_;

	world();//build
	~world();// destroy

	bool checkinloop();

};//class world

#endif
