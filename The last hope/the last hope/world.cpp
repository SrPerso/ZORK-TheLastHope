#include <iostream>
#include "principal.h"
#include "worldc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;


world::world() {

	rooms = new room[15];


}//builder
world::~world() {
	delete[] rooms;
	printf("destruyo\n");

}//destroyer

void world::creatingworld(){
	
	strcpy(rooms[sun].name,"");
}//create the rooms 






