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
#include "bicho.h"

//------------------------

int main() {
	
		preintro();

		system("cls");

		ReportMemoryLeaks();

		world * World = new world;//for asign dinamic 
		bicho* player = nullptr;

		bool comand=true;

		World->createworld();//create rooms

		do{

			comand = World->checkings();

		} while (comand != false);


		
		credits();
		delete[] World;

		return 0;
	
}//main
