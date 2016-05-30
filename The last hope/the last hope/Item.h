#ifndef _ITEM_
#define _ITEM_

#include "Entity.h"
class room;

class Item : public entity
{
protected:
	room* position;
public:
			
	int InInventory = false;
	int attack = 0;
	int attackspeed = 0;

	Item(const char* name, const char* description, room* position);
	Item(const  char* name, const  char* description, EntityType thetype, room* position);
	~Item();

};
#endif