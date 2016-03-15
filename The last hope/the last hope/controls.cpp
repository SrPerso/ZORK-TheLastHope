#include <iostream>
#include "principal.h"
#include "worldc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


int checkings(char *token, char *firstword){

	char comand, comand2;

	// COMAND LIST FIRST WORD-------

	if (firstword == "go" || firstword == "Go"){ comand = GO; }
	if (firstword == "look" || firstword == "Look"){ comand = LOOK; }
	if (firstword == "help" || firstword == "Help"){ comand = HELP; }
	if (firstword == "exit" || firstword == "Exit"){ comand = EXIT; }

	if (token == "east" || token == "East"){ comand2 = EAST; }
	if (token == "west" || token == "West"){ comand2 = WEST; }
	if (token == "north" || token == "North"){ comand2 = NORTH; }
	if (token == "south" || token == "South"){ comand2 = SOUTH; }
	if (token == "down" || token == "Down"){ comand2 = DOWN; }
	if (token == "up" || token == "Up"){ comand2 = UP; }


	switch (comand){

	case GO://--------------GO

		go(comand2);//-
		break;

	case LOOK://--------------LOOK


		break;

	case HELP: //--------------HELP

		help();//-
		break;

	case EXIT://--------------EXIT

		return 0;//-
		break;

	default:
		printf(" there is a problem");
		break;

	}//switchcase first word

}// void checkings


void help(){

	printf("\n\t\t_____COMAND LIST____\n");
	printf("\t\t|                   |\n");
	printf("\t\t|  Go North  -> n   |\n");
	printf("\t\t|  Go South  -> s   |\n");
	printf("\t\t|  Go West   -> w   |\n");
	printf("\t\t|  Go East   -> e   |\n");
	printf("\t\t|  Go Top    -> t   |\n");
	printf("\t\t|  Go Bottom -> b   |\n");
	printf("\t\t|  Go Quit   -> q   |\n");
	printf("\t\t|  Go Help   -> h   |\n");
	printf("\t\t|___________________|\n");

}//help

void go(char comand) {

	printf("%s", comand);



	/*
	
	for (int i = 0; i < 32; i++){
		if (player->position == World.exit[i].src && World.exit[i].direction == direct){

			player->position = World.exit[i].dest;
		}//if

	}//for

	
	*/
}