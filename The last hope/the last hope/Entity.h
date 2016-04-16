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

private:
	mString name;
	mString description;
	entity* parent;
	EntityType HisType;
public:

	EntityType type = ENTITY;// TYPE ENTITY ENTITY

	Vector<entity*> entity_;//vector of entitys

	entity(const char* name, const char* description, EntityType Histype) :name(name), description(description){}

	const mString SayMyName();
	const mString SayTheDescription();
	const EntityType SaytheType();

	void printer();

	virtual ~entity();
};


#endif
