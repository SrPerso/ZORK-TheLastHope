#include "rooms.h"
#include <stdlib.h>
#include <stdio.h>
#include "strings.h"

room::room(const char* name, const char* description) : entity(name, description,ROOM){

}
void room::Update(){
	/*if (Npc.position == World->player->position){
		printf("There is a Android here! :O");

	}
	*/
}
room::~room(){

}