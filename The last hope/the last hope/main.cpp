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
world*TheWorld = nullptr;
int main() {

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
			state = MAIN_UPDATE;
			intro();
			break;


		case MAIN_UPDATE:
		{
			int update_return = kbhit(TheWorld);

			if (update_return == UPDATE_ERROR){
			
				state = MAIN_EXIT;
			}

			else if (update_return == UPDATE_STOP){
				state = MAIN_FINISH;
			}
			state = MAIN_UPDATE;
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