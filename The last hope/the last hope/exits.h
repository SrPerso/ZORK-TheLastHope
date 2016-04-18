//-----------headers------------------

#include "rooms.h"
#include "Entity.h"
//------------------------


#ifndef _EXIT_
#define  _EXIT_
class room;
enum dir{ NORTH, SOUTH, EAST, WEST, UP, DOWN };

class exits:public entity{
	public:

	room* dest =nullptr;
	room* src =nullptr;
	dir direction;	
	entity* key;
	mString name_dest;

	bool open;
	bool locked;

public:


	exits(const char* name, const char*  description, const char* name_dest, room* src, room* dest, bool open, dir direction);
	~exits();

	void Look() const;
};

#endif