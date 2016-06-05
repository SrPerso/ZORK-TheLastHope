//- -------- system -----------------

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "memorytleaks.h"
#include <ctype.h>

//-----------headers------------------

#include "global.h"
#include "world.h"
#include "rooms.h"
#include "exits.h"
#include "player.h"

enum main_states
{
	MAIN_CREATION,
	MAIN_START,
	MAIN_UPDATE,
	MAIN_FINISH,
	MAIN_EXIT
};
//------------------------------------


int main() {
	world* TheWorld = nullptr;
	ReportMemoryLeaks();
	main_states state = MAIN_CREATION;
	int main_return = EXIT_FAILURE;

	while (state != MAIN_EXIT)
	{
		switch (state){

		case MAIN_CREATION:

			TheWorld = new world;//for asign dinamic 
			state = MAIN_START;

			break;

		case MAIN_START:
			
			
			if (preintro() == false){
				introFX();

			}
			system("color 0E");//black yellow
			intro();
	
			system("color 0A");//black green

			
			state = MAIN_UPDATE;		
			break;


		case MAIN_UPDATE:
		{

		kbhit(TheWorld);
				state = MAIN_FINISH;

		}
			
			break;

		case MAIN_FINISH:

			
			credits();  //credits
			main_return = EXIT_SUCCESS;
			state = MAIN_EXIT;
			

			break;

		}
	}

	delete TheWorld;
	return 0;
}