#include "exits.h"
#include <stdio.h>



exits::exits(const char* name, const char* name_dest, const char*  description, room* src, room* dest, bool open, dir direction):
entity(name, description, EXIT),src(src), dest(dest), name_dest(name_dest), open(true), locked(false), key(NULL), direction(direction){
}

exits::~exits(){

}

void exits::Look()const{

	printf("%s to %s\n", &entity::SayMyName, name_dest);
	printf("%s\n", &entity::SayTheDescription);
}
