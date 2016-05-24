#ifndef _ENTITY_
#define _ENTITY_
//----------includes------------------
#include "strings.h"
#include "vector.h"
//------------------------
enum EntityType{

		ENTITY,
		ROOM,
		EXIT,
		ITEM,
		PLAYER,

};

class entity{
public:
	mString name;
	mString description;
	
public:

	int InInventory = false;
	int attack = 0;
	int attackspeed = 0;

	
	EntityType type = ENTITY;// TYPE ENTITY ENTITY

	Vector<entity*> theEntity;//vector of entities 

	entity(const char* name, const char* description, EntityType thetype);//MMAYUS

	char* SayMyName()const; //change))
	char* SayTheDescription()const;

	EntityType SaytheType();

	virtual void look()const;
	virtual ~entity();
};


#endif
