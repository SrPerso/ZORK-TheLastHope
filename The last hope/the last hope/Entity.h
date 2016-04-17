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

	EntityType type = ENTITY;// TYPE ENTITY ENTITY

	Vector<entity*> entity_;//vector of entitys

	entity(const mString name, const mString description, entity* parent);

	const mString SayMyName();
	const mString SayTheDescription();
	const EntityType SaytheType();

	void Look();

	virtual ~entity();
};


#endif
