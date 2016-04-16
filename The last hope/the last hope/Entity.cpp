#include "Entity.h"
#include <stdio.h>


entity::entity(const mString name, const mString description,entity* parent):name(name), description(description), parent(parent){
	
	type = ENTITY;

}

const mString entity::SayMyName(){
	return name;
}//return the name of the entity

const mString  entity::SayTheDescription(){
	return description;
}//return the description

const EntityType entity::SaytheType(){
	return type;
}//return the type of the entity

void entity::Look(){

	printf("The name is: %s\n", name);
	printf("The description is: \n\t %s\n", description);
}//print everywhere the name and the description

entity::~entity(){}