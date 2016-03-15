//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
//-----------headers------------------
#include "principal.h"
#include "worldc.h"
#include "rooms.h"
#include "controls.h"
#include "exits.h"
#include "bicho.h"
//------------------------

bool world::checkings(){

	char *token1 = NULL, *token2 = NULL;

	//bicho->reader(token1, token2);


	char recep[80] = "NULL", seps[3] = " ,";
	token1 = NULL;
	token2 = NULL;
	printf("comand?\n");
	fflush(stdin);

	gets_s(recep);

	token1 = strtok_s(recep, seps, &token2);
	
	// COMAND LIST---------------------------------------------------------------------------------

	if (strcmp(token1, "go") == 0 || strcmp(token1, "GO") == 0){
	
		if (strcmp(token1, "east") == 0  || strcmp(token1, "EAST")  == 0)	{	player->go(this, EAST);		}
		if (strcmp(token1, "north") == 0 || strcmp(token1, "NORTH") == 0)	{	player->go(this, NORTH);	}
		if (strcmp(token1, "west") == 0  || strcmp(token1, "WEST")  == 0)	{	player->go(this, WEST);		}
		if (strcmp(token1, "south") == 0 || strcmp(token1, "SOUTH") == 0)	{  player->go(this, SOUTH); 	}

		return true;
	}//go to one place---------------------------------------------------------------------------------

	else if (strcmp(token1, "look") == 0 || strcmp(token1, "LOOK")  == 0){
		
		if (strcmp(token1, "east") == 0  || strcmp(token1, "EAST")  == 0)	{ player->lookdoor(this, EAST); }
		if (strcmp(token1, "north") == 0 || strcmp(token1, "NORTH") == 0)	{ player->lookdoor(this, NORTH);}
		if (strcmp(token1, "west") == 0  || strcmp(token1, "WEST")  == 0)	{ player->lookdoor(this, WEST); }
		if (strcmp(token1, "south") == 0 || strcmp(token1, "SOUTH") == 0)	{ player->lookdoor(this, SOUTH);}
	
		return true;
	}//if else look to the door---------------------------------------------------------------------------------

	else if (strcmp(token1, "open") == 0 || strcmp(token1, "OPEN") == 0){ 
	
		if (token2 == NULL){
			printf("Which door do you want to open?? \n\t");
			scanf_s("%s", &token2);
		}
		if (strcmp(token1, "east") == 0  || strcmp(token1, "EAST") == 0)	{ player->open(this, EAST);  }
		if (strcmp(token1, "north") == 0 || strcmp(token1, "NORTH") == 0)	{ player->open(this, NORTH); }
		if (strcmp(token1, "west") == 0  || strcmp(token1, "WEST") == 0)	{ player->open(this, WEST);  }
		if (strcmp(token1, "south") == 0 || strcmp(token1, "SOUTH") == 0)	{ player->open(this, SOUTH); }

		return true;
	}//else if OPEN DOor---------------------------------------------------------------------------------

	else if (strcmp(token1, "close") == 0 || strcmp(token1, "CLOSE") == 0){ 
	
		if (token2 == NULL){
			printf("Which door do you want to open?? \n\t");
			scanf_s("%s", &token2);
		}
		if (strcmp(token1, "east")  == 0  || strcmp(token1, "EAST")  == 0)	{ player->close(this, EAST);  }
		if (strcmp(token1, "north") == 0  || strcmp(token1, "NORTH") == 0)	{ player->close(this, NORTH); }
		if (strcmp(token1, "west")  == 0  || strcmp(token1, "WEST")  == 0)	{ player->close(this, WEST);  }
		if (strcmp(token1, "south") == 0  || strcmp(token1, "SOUTH") == 0)	{ player->close(this, SOUTH); }
	
		return true;
	}//else if Close Door---------------------------------------------------------------------------------

	else if (strcmp(token1, "help") == 0 || strcmp(token1, "HELP") == 0){

		help();
		return true;
	}//else if help---------------------------------------------------------------------------------

	else if (strcmp(token1, "exit") == 0 || strcmp(token1, "EXIT") == 0){ 
			
		return false;
	}

	return true;
}// void checkings


void help(){

	printf("\n\t\t________| COMAND LIST |________\n");
	printf("\t\t|			        |\n");
	printf("\t\t|  GO           |  LOOK		|\n");
	printf("\t\t|       south   |       south   |\n");
	printf("\t\t|       West    |       West	|\n");
	printf("\t\t|       East    |       East	|\n");
	printf("\t\t|       Top     |       Top     |\n");
	printf("\t\t|       Bottom  |       Bottom  |\n");
	printf("\t\t|			     	|\n");
	printf("\t\t|  OPEN         |  CLOSE	|\n");
	printf("\t\t|       south   |       south   |\n");
	printf("\t\t|       West    |       West	|\n");
	printf("\t\t|       East    |       East	|\n");
	printf("\t\t|       Top     |       Top	|\n");
	printf("\t\t|       Bottom  |       Bottom  |\n");
	printf("\t\t|				|\n");
	printf("\t\t|  HELP         |  EXIT		|\n");
	printf("\t\t|_______________________________|\n");

}//help



void bicho::go(world* World, dir tgo){

	if (tf == true){

		for (int i = 0; i < _NoE_; i++){

			if (World->exit[i].src == position){

				if (World->exit[i].direction == tgo){

					if (World->exit[i].open == true){

						position = World->exit[i].dest;

						printf("%s\n%s.\n", World->exit[i].dest->name, World->exit[i].dest->description);
						tf = false;

						break;

					}//if open

					else{

						printf("hum... this door is close maybe you can open it with a key.. \n");
						break;

					}//else close

				}//if direccioner

			}//if look the position

			else{

				printf("seem that there is nothing interesting in that way\n");

				break;

			}//else there isnt

		}//for looking every valor

	}// const

}//void GOOO ------------------------------------------------------------

void bicho::look()const{

	printf("\n %s", position->description);

}//look room ------------------------------------------------------------

void bicho::close(world* Wworld, dir close)const{


}// close doors---------------------------------------------------------

void bicho::open(world* World, dir open)const{


}// close doors---------------------------------------------------------
void bicho::lookdoor(world* World, dir look)const{



}