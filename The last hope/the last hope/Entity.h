#ifndef _ENTITY_
#define _ENTITY_
//----------includes------------------
#include "strings.h"
#include "vector.h"
#include "LinkedList.h"
//------------------------
enum EntityType{

		ENTITY,
		ROOM,
		EXIT,
		ITEM,
		PLAYER,
		CREATURE,
		NPC
};

class entity{
public:
	mString name;
	mString description;
	
public:

	int InInventory = false;
	
	EntityType type = ENTITY;// TYPE ENTITY ENTITY

	LinkedList<entity*> container;//vector of entities 

	entity(const char* name, const char* description, EntityType thetype);//MMAYUS

	char* SayMyName()const; //change
	char* SayTheDescription()const;

	EntityType SaytheType();
	int attack = 0;
	int attackspeed = 0;

	virtual void look()const;
	virtual ~entity();

	virtual void Update();

};


#endif
