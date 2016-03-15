//-----------headers------------------
#include "principal.h"
#include "rooms.h"
//------------------------

#ifndef _EXIT_
#define  _EXIT_

class exits{
public:
	char name[5];
	char description[300];
	room* dest;
	room* src;
	dir direction;
	bool open;
};

#endif