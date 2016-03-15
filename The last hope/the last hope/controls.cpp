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

int checkings(char *token1, char *token2){

	//char comand2;
	//int comand= 0 ;
	// COMAND LIST FIRST WORD-------

	if (token1 == "go" || token1 == "Go"){ printf("go"); return 1; }

	if (token1 == "look" || token1 == "Look"){ printf("look");	return 1; }

	if (token1 == "help" || token1 == "Help"){ printf("help"); help(); return 1; }

	if (token1 == "exit" || token1 == "Exit"){ printf("exit"); return 0; }

	/*if (token2 == "east" || token2 == "East"){ comand2 = EAST; }
	if (token2 == "west" || token2 == "West"){ comand2 = WEST; }
	if (token2 == "north" || token2 == "North"){ comand2 = NORTH; }
	if (token2 == "south" || token2 == "South"){ comand2 = SOUTH; }
	if (token2 == "down" || token2 == "Down"){ comand2 = DOWN; }
	if (token2 == "up" || token2 == "Up"){ comand2 = UP; }*/
	 
	
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