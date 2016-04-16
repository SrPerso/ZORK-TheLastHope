//-----------headers------------------
#include "rooms.h"
#include "Entity.h"
#include "vector.h"
#include "strings.h"
//------------------------

#ifndef _PLAYER_
#define _PLAYER_

class world;

class Player:public entity{
public:

	room* position;
	bool tf = true;

	//void reader(char *token1, char *token2);
	void go(world* World,const dir tgo);
	void look()const;
	void lookdoor(world* World, dir look)const;
	void open(world* World, dir open)const;
	void close(world* World, dir close)const;
	
public:
	
	Player(const mString* name, const mString* description, room* Room):entity(name,description, (entity*)Room{}
	~Player();

};//class player

#endif