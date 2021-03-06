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
	bool Update(world*World, const int& inittime, update_npc_movement&,bool&);
	bool talkandroid();
	void talkMonkey(const mString, update_npc_talk&);
	update_npc_movement Move(update_npc_movement&update_npc,world*World);
	update_status talkandroid(mString& token1);
	void Change(world* World, const mString item, const mString npc);
};

#endif