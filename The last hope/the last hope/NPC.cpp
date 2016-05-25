#include "NPC.h"
#include "rooms.h"
#include "Entity.h"


Npc::Npc(const char* name, const char* description, room* position) :
Creature(name, description,nullptr, CREATURE), position(position){

}
Npc::~Npc(){

}