#include "rooms.h"
#include <stdlib.h>
#include "strings.h"

room::room(const char* name, const char* description) : entity(name, description,ROOM){
	type = ROOM;
}

room::~room(){

}