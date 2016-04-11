//-----------headers------------------

#include "rooms.h"
#include "exits.h"
#include "strings.h"
//------------------------

#ifndef _PLAYER_
#define  _PLAYER_
class world;

class CPlayer{
public:

	mString* name= nullptr;

	room* position= nullptr;

	bool tf = true;

	//void reader(char *token1, char *token2);
	void go(world* World,const dir tgo);
	void look()const;
	void lookdoor(world* World, dir look)const;
	void open(world* World, dir open)const;
	void close(world* World, dir close)const;
	
public:
	CPlayer();
	~CPlayer();
};//class bicho

#endif