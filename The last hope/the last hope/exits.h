//-----------headers------------------
#include "global.h"
#include "rooms.h"
#include "Entity.h"
//------------------------


#ifndef _EXIT_
#define  _EXIT_
class room;
enum dir{ NORTH, SOUTH, EAST, WEST, UP, DOWN };

class exits:public entity{
private:


	room* dest =nullptr;
	room* src =nullptr;
	dir direction;
	bool open;

public:
	exits(const mString name, const mString description, bool open, room* src, room* dest, dir direction);

	~exits();
};

#endif