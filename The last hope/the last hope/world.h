#ifndef _WORLD_
#define  _WORLD_
//-----------headers------------------

#include "vector.h"
#include "global.h"

//------------------------
class room;
class exits;
class Player;
class Item;
class Npc;
class entity;

class world{
public:
	

	/*
	Vector<room*> Room;
	Vector<exits*>Exit;
	Vector<Player*>player;
	Vector<Item*> item;
	Vector<Npc*> npc;
	*/

	Vector<entity*>Entities;

	//used in control.cpp
	Player* player;
	Npc*Android;
	room*Planet1_West;
	room*Planet1_North;
	room*Planet1_East;
	room*Planet1_South;
	Item* Target;
	
	
	world();//build
	~world();// destroy
	
	update_status checkinloop(mString&);
	void createWorld();
	bool CleanUp(world*TheWorld);
	
};//class world


#endif
