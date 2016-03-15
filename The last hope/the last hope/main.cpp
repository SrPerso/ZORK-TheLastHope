#include <iostream>
#include "principal.h"
#include "worldc.h"
#include <stdio.h>
#include <stdlib.h>
#include "memorytleaks.h"
#include <ctype.h>

int main() {
	//intro();

	ReportMemoryLeaks();

	world World;
	bicho* player = nullptr;

	World.creatingworld();
	
	char *token, *firstword, comand;




do{

	reader(token, firstword);
	
	comand = checkings(token, firstword);

}while(comand != 0);


return 0;
}//main
