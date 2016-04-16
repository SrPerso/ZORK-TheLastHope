//-----------headers------------------
#include "rooms.h"
#include "Entity.h"

//------------------------

#ifndef _PLAYER_
#define _PLAYER_

class world;
class room;

class Player:public entity{
public:

	room* position;
	//bool tf = true;

	
	//void go(world* World,const dir tgo);
	//void look()const;
	//void lookdoor(world* World, dir look)const;
	//void open(world* World, dir open)const;
	//void close(world* World, dir close)const;
	
public:
	

	Player(const mString name, const mString description, room* position);
	~Player();
	void Look(const Vector<mString>& commands) const;
};//class player

#endif