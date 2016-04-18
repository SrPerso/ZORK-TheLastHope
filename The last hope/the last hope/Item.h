#ifndef _ITEM_
#define _ITEM_

#include "Entity.h"

class Item : public entity
{
protected:
	entity* box;
public:
	Item(const char* name, const char* description, entity* box);
	Item(const  char* name, const  char* description, EntityType thetype, entity* box);
	~Item();

};
#endif