//-----------headers------------------

#include "rooms.h"
#include "exits.h"
//------------------------

#ifndef _BICHO_
#define  _BICHO_
class world;

class bicho{
public:

	char name[20];
	//int hp;
	room* position;
	bool tf = true;

	//void reader(char *token1, char *token2);
	void go(world* World, dir tgo);
	void look()const;
	void lookdoor(world* World, dir look)const;
	void open(world* World, dir open)const;
	void close(world* World, dir close)const;
	
public:
	bicho();
	~bicho();
};//class bicho

#endif