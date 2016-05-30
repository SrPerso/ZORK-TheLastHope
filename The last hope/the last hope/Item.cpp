#include "Item.h"
#include "global.h"
#include <stdio.h>

Item::Item(const char* name, const char* description, room* position) :entity(name, description, ITEM), position(position){

}
Item::Item(const char* name, const char* description, EntityType thetype, room* position) : entity(name, description, thetype), position(position){

}
Item::~Item(){}
