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
	
	char *token1 = NULL, *token2 = NULL, comand;




do{
	
	reader(token1, token2);
	
	comand = checkings(token1, token2);

}while(comand != 0);


return 0;
}//main
