#ifndef _NPC_
#define _NPC_

#include "Entity.h"
#include "Creature.h"

class Npc : public Creature{
public:
	room*position=nullptr;
public:

	Npc(const char* name,const char* description, room* src);
	~Npc();

	bool IsPlayerHere();
	
};

#endif