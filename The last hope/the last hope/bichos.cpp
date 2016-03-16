//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-----------headers------------------

#include "worldc.h"
#include "bicho.h"
//------------------------

bicho::bicho(){

	position = new room;

}
bicho::~bicho(){

	delete[] position;

}





