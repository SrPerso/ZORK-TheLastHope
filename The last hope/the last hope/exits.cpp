#include "exits.h"
#include <stdio.h>



exits::exits(const mString name, const mString name_dest, const mString description, room* origin, room* dest, bool open, dir direction) :
entity(name, description, (entity*)src), dest(dest), name_dest(name_dest), open(true), locked(false), key(NULL), direction(direction){
	type = EXITS;

}

exits::~exits(){

}

void exits::Look() const{

	printf("%s to %s\n", &entity::SayMyName, name_dest);
	printf("%s\n", &entity::SayTheDescription);
}

