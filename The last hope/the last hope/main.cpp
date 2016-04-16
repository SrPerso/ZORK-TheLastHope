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
	
		//preintro(); //intro

		system("cls");

		ReportMemoryLeaks();

		world TheWorld;//for asign dinamic 
		TheWorld.Initialize();

		bool comand=true;



		do{

			comand = World->checkings();

		} while (comand != false);


		
		//credits();  //credits
		delete World;

		return 0;
	
}//main
