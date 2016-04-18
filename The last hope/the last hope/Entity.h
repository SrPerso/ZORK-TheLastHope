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

	
	EntityType type = ENTITY;// TYPE ENTITY ENTITY
	Vector<entity*> Entity;//vector of entities  //QUITAR

	entity(const char* name, const char* description, EntityType thetype);//MMAYUS

	char* SayMyName()const; //change))
	char* SayTheDescription()const;
	EntityType SaytheType();

	virtual void look()const;
	virtual ~entity();
};


#endif
