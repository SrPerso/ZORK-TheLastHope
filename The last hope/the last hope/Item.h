#ifndef _ITEM_
#define _ITEM_

#include "Entity.h"

class Item : public entity
{
protected:
	entity* box;
public:

	Vector <Item*>BOXItems;
	
	int InInventory = false;
	int attack = 0;
	int attackspeed = 0;

	Item(const char* name, const char* description, entity* box);
	Item(const  char* name, const  char* description, EntityType thetype, entity* box);
	~Item();

};
#endif