#include "Item.h"
#include "global.h"
#include <stdio.h>

Item::Item(const char* name, const char* description, entity* box):entity(name, description, ITEM), box(box){
	type = ITEM;
}
Item::Item(const char* name, const char* description, EntityType thetype, entity* box) : entity(name, description, thetype), box(box){
	type = ITEM;
}
Item::~Item(){}
