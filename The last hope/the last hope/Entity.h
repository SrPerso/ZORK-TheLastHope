#ifndef _ENTITY_
#define _ENTITY_

#include "strings.h"
#include "vector.h"

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

public:

	EntityType type = ENTITY;// TYPE ENTITY ENTITY


	

	entity(const char* name, const char* description) :name(name), description(description){}


	const mString SayMyName();
	const mString SayTheDescription();
	const EntityType SaytheType();

	void printer();

	virtual ~entity();
};


#endif
