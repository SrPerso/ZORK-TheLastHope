//-----------headers------------------
#include "vector.h"
#include "Entity.h"
#include "strings.h"
#include "global.h"
//------------------------
#ifndef _ROOMS_
#define  _ROOMS_

class room:public entity{
public:

	Vector <entity*>RoomItems;
	room(const char* name, const char* description);
	~room();
};//class room 

#endif