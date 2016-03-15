//- -------- system -----------------

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "memorytleaks.h"
#include <ctype.h>

//-----------headers------------------

#include "principal.h"
#include "worldc.h"
#include "rooms.h"
#include "controls.h"
#include "exits.h"
#include "bicho.h"

//------------------------

int main() {
	//intro();

	ReportMemoryLeaks();

	world World;
	bicho* player = nullptr;
	
	bool comand;

	World.creatingrooms();//create rooms
	World.creatingexits();//create exits
	World.creatingbichos();//crate bichos
	
do{
	
	
	
	comand = World.checkings();

}while(comand != false);


return 0;
}//main
