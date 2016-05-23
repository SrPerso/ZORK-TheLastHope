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

//------------------------

int main() {
	
		preintro(); //intro

		system("cls");

		ReportMemoryLeaks();

		world* TheWorld= new world;//for asign dinamic 

		bool game_on = true;
		
		do{

			game_on = TheWorld->checkinloop();

		} while (game_on != false);

		delete TheWorld;

		credits();  //credits

		return 0;
	
}//main
