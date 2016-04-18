#include "exits.h"
#include <stdio.h>



exits::exits(const char* name, const char* name_dest, const char*  description, room* origin, room* dest, bool open, dir direction):
entity(name, description, EXITS), dest(dest), name_dest(name_dest), open(true), locked(false), key(NULL), direction(direction){
	type = EXITS;

}

exits::~exits(){

}

void exits::Look() const{

	printf("%s to %s\n", &entity::SayMyName, name_dest);
	printf("%s\n", &entity::SayTheDescription);
}

