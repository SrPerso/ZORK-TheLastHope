#ifndef _PLAYER_
#define _PLAYER_
//-----------headers------------------

#include "Entity.h"
#include "exits.h"
//------------------------
class world;
class room;

class Player:public entity{
public:

	room* position=nullptr;
	bool tf = true;

public:

	//constructors-----

	Player(const mString name, const mString description, room* position);
	~Player();

	//----------
	
	void go(world* World, const dir tgo);
	void look()const;
	void lookdoor(world* World, const dir look)const;

	void open(world* World, const dir open);
	
	void close(world* World, const dir close);

	void Inventory()const;
	void Pick(mString item);
	void drop(mString item);
	
};//class player

#endif