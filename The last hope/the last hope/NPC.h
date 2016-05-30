#ifndef _NPC_
#define _NPC_

#include "Entity.h"
#include "Creature.h"
#include "global.h"

class world;

class Npc : public Creature{
public:
	room*position=nullptr;

	int hp = 100;
	int attack = 20;
	int attackspeed = 1;

public:

	Npc(const char* name,const char* description, room* src);
	~Npc();

	bool IsPlayerHere();
	update_npc_movement Move(update_npc_movement&update_npc,world*World);
};

#endif