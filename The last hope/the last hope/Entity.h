#ifndef _ENTITY_
#define _ENTITY_
//----------includes------------------
#include "strings.h"
#include "vector.h"
//------------------------
enum EntityType{

		ENTITY,
		ROOM,
		EXITS,
		ITEM,
		PLAYER,

};

class entity{
public:
	mString name;
	mString description;
	entity* parent;
	
public:

	EntityType type;// TYPE ENTITY ENTITY

	Vector<entity*> entity_;//vector of entitys

	entity(const char* name, const char* description, EntityType thetype);

	char* SayMyName()const;
	char* SayTheDescription()const;
	const EntityType SaytheType();

	virtual void look();

	virtual ~entity();
};


#endif
