//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	World.creatingrooms();//create rooms
	World.creatingexits();//create exits
	World.creatingbichos();//crate bichos
	
	char *token1 = NULL, *token2 = NULL, comand;




do{
	
	reader(token1, token2);
	
	comand = checkings(token1, token2);

}while(comand != 0);


return 0;
}//main
