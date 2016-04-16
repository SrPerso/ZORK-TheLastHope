#include "Entity.h"

entity::entity(const char* name, const char* description) :name(name), description(description){
	
	type = ENTITY;


}

entity::~entity(){}