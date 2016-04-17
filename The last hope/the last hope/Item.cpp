#include "Item.h"

Item::Item(const mString name, const mString description, entity* box):entity(name, description,(entity*)box){
	type = ITEM;
}

Item::~Item(){}
