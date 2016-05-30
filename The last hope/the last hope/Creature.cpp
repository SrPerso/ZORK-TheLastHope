#include "Creature.h"
#include "rooms.h"
#include "Entity.h"



Creature::Creature(const char* name, const char* description, room* position, EntityType type) :
entity(name, description, CREATURE), position(position){

}
Creature::~Creature(){

}

bool Creature::IsAlive()const{
	return hp>0;
}
