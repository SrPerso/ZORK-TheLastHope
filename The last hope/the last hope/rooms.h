//-----------headers------------------
#include "vector.h"
#include "Entity.h"
#include "strings.h"
#include "global.h"
#include "Item.h"
//------------------------
#ifndef _ROOMS_
#define  _ROOMS_

class room:public entity{
public:


	room(const char* name, const char* description);
	~room();

	void Update();

};//class room 

#endif