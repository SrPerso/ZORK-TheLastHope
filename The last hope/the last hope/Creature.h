#ifndef _CREATURE_
#define _CREATURE_

#include "Entity.h"
class room;

class Creature:public entity{
public:
	
	room* position=nullptr;
	
	int hp = 0;
	int attack = 0;
	int attackspeed = 0;
	
public:
	Creature(const char*name, const char*descriptiom,room*location, EntityType type);
	virtual ~Creature();
	
//void Update();

	bool IsAlive()const;


};

#endif