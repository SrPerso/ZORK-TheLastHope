
#ifndef _EXIT_
#define  _EXIT_

//-----------headers------------------

#include "rooms.h"
#include "Entity.h"
//------------------------

enum dir{
	NORTH, SOUTH, EAST, WEST, UP, DOWN
};

class exits:public entity{
	public:

	room* dest =nullptr;
	room* src =nullptr;
	dir direction;	
	mString name_dest;

	bool open=true;
	bool locked=false;

public:
	
	exits(const char* name, const char*  description, const char* name_dest, room* src, room* dest, bool open, dir direction);
	~exits();

};

#endif