//-----------headers------------------
#include "principal.h"
#include "rooms.h"

//------------------------


#ifndef _EXIT_
#define  _EXIT_
class room;
enum dir{ NORTH, SOUTH, EAST, WEST, UP, DOWN };

class exits{
public:
	char name[5];
	char description[300];
	room* dest =nullptr;
	room* src =nullptr;
	dir direction;
	bool open;

public:
	//exits();
	//~exits();
};

#endif