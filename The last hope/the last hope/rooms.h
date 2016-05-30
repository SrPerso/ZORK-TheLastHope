
#ifndef _ROOMS_
#define  _ROOMS_

//-----------headers------------------
#include "Entity.h"
//------------------------

class room:public entity{
public:


	room(const char* name, const char* description);
	~room();

	void Update();

};//class room 

#endif