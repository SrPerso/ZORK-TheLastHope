#ifndef _ENTITY_
#define _ENTITY_
//----------includes------------------
#include "strings.h"
#include "vector.h"
//------------------------
enum EntityType{

		ENTITY,
		ROOM,
		EXIT,//exit
		ITEM,
		PLAYER,

};

class entity{
private:
	mString name;
	mString description;
	
public:

	
	EntityType type = ENTITY;// TYPE ENTITY ENTITY
	Vector<entity*> entity_;//vector of entities  //QUITAR

	entity(const char* name, const char* description, EntityType thetype);//MMAYUS

	char* SayMyName()const; //change))
	char* SayTheDescription()const;
	EntityType SaytheType();

	virtual void look()const;
	virtual ~entity();
};


#endif
