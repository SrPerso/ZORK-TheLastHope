#include "Entity.h"
#include <stdio.h>


entity::entity(const char* name, const char* description, EntityType thetype) :name(name), description(description){
}

char* entity::SayMyName()const{
	return name.C_str();
}//return the name of the entity

char* entity::SayTheDescription()const{
	return description.C_str();
}//return the description

EntityType entity::SaytheType(){
	return type;
}//return the type of the entity

void entity::look()const{

	printf("%s\n", name);
	printf("%s\n", description);

}//print everywhere the name and the description

entity::~entity(){}