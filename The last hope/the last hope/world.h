#ifndef _WORLD_
#define  _WORLD_
//-----------headers------------------

#include "vector.h"

//------------------------
class room;
class exits;
class Player;
class Item;


class world{
public:
	
//	Vector<entity*>World;

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
