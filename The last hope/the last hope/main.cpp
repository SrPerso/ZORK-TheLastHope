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
	
		//preintro();

		system("cls");

		ReportMemoryLeaks();

		world * World = new world;//for asign dinamic 
		bicho* player = nullptr;

		bool comand;

		World->createrooms();//create rooms
		World->createexits();//create exits
		World->createbichos();//crate bichos

		do{

			comand = World->checkings();

		} while (comand != false);


		
		credits();
		delete[] World;

		return 0;
	
}//main
