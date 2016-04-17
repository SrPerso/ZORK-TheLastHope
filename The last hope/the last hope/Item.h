#ifndef _ITEM_
#define _ITEM_

#include "Entity.h"

class Item : public entity
{
protected:
	entity* box;
public:
	Item(const mString name, const mString description, entity* box);
	~Item();

};
#endif