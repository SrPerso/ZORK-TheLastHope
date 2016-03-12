#include <iostream>
#include "principal.h"
#include "worldc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>




world::world() {

	room* rooms = new room[15];

}
world::~world() {
	delete[] rooms;

}