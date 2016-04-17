#include "rooms.h"
#include <stdlib.h>
#include "strings.h"

room::room(const mString name, const mString description) : entity(name, description,nullptr){
	type = ROOM;
}

room::~room(){

}