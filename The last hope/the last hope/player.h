//-----------headers------------------

#include "rooms.h"
#include "exits.h"
#include "Entity.h"
#include "vector.h"
#include "strings.h"
//------------------------

#ifndef _PLAYER_
#define  _PLAYER_
class world;

class Player/*:public entity*/{
public:

	mString* name;
	mString* description;
	// poner una propiedad que sea un vector a otras entidades (my_entities
	

	room* position;
	bool tf = true;

	//void reader(char *token1, char *token2);
	void go(world* World,const dir tgo);
	void look()const;
	void lookdoor(world* World, dir look)const;
	void open(world* World, dir open)const;
	void close(world* World, dir close)const;
	
public:
	
	Player(const char* name, const char* description):entity(name,description){}
	~Player();

};//class bicho

#endif