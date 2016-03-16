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

	char token1[15], token2[15], *token;


//	strcpy_s(token2, "void");
	
	//bicho->reader(token1, token2);

	char recep[80] = "NULL";

	
	printf("\n\t -What do you want to do now?\n\n\t\t");

	strcpy_s(token2, "NULL");

	fflush(stdin);

	gets_s(recep);

	strcpy_s(token1, strtok_s(recep, " ", &token));
	if (strcmp(token, "") != 0){
		strcpy_s(token2, strtok_s(NULL, " ", &token));
	}
	// COMAND LIST---------------------------------------------------------------------------------
	
	if (strcmp(token1, "go") == 0  || strcmp(token1, "GO") == 0){


		if (strcmp(token2, "east") == 0  || strcmp(token2, "EAST") == 0)		{ player->go(this, EAST);		}
		else if (strcmp(token2, "north") == 0 || strcmp(token2, "NORTH") == 0)	{ player->go(this, NORTH);	 }
		else if (strcmp(token2, "west") == 0 || strcmp(token2, "WEST") == 0)	{ player->go(this, WEST); }
		else if (strcmp(token2, "south") == 0 || strcmp(token2, "SOUTH") == 0)	{ player->go(this, SOUTH); }
		else if (strcmp(token2, "up") == 0 || strcmp(token2, "UP") == 0)		{ player->go(this, UP); }
		else if (strcmp(token2, "down") == 0 || strcmp(token2, "DOWN") == 0)	{ player->go(this, DOWN); }
		else{
			printf("\n  Whitch dimension do you want to go with this extrange direction..?\n\t (this is sarcasm, write better) \n\t");
		}


		return true;

	}//go to one place---------------------------------------------------------------------------------

	else if (strcmp(token1, "look") == 0 || strcmp(token1, "LOOK") == 0 ){
		
		if (strcmp(token2, "NULL") == 0){player->look();}//look around

		else if (strcmp(token2, "east") == 0  || strcmp(token2, "EAST")  == 0)	{ player->lookdoor(this, EAST); }
		else if(strcmp(token2, "north") == 0 || strcmp(token2, "NORTH") == 0)	{ player->lookdoor(this, NORTH); }
		else if(strcmp(token2, "west") == 0 || strcmp(token2, "WEST") == 0)		{ player->lookdoor(this, WEST); }
		else if(strcmp(token2, "south") == 0 || strcmp(token2, "SOUTH") == 0)	{ player->lookdoor(this, SOUTH); }
		else if(strcmp(token2, "up") == 0 || strcmp(token2, "UP") == 0)			{ player->lookdoor(this, UP); }
		else if(strcmp(token2, "down") == 0 || strcmp(token2, "DOWN") == 0)		{ player->lookdoor(this, DOWN); }
		else{
			printf("\n  Mmm... There is a sexy giraffe theree... \n\t (this is sarcasm, write better) \n\t");
		} 
		
		
		return true;
	}//if else look to the door---------------------------------------------------------------------------------

	else if (strcmp(token1, "open") == 0|| strcmp(token1, "OPEN") == 0 ){
	
		if (token2 == NULL){
			printf("Which door do you want to open?? \n\t");
			scanf_s("%s", &token2);
		}
		if (strcmp(token2, "east") == 0  || strcmp(token2, "EAST") == 0)	{ player->open(this, EAST);  }
		if (strcmp(token2, "north") == 0 || strcmp(token2, "NORTH") == 0)	{ player->open(this, NORTH); }
		if (strcmp(token2, "west") == 0  || strcmp(token2, "WEST") == 0)	{ player->open(this, WEST);  }
		if (strcmp(token2, "south") == 0 || strcmp(token2, "SOUTH") == 0)	{ player->open(this, SOUTH); }
		if (strcmp(token2, "up") == 0    || strcmp(token2, "UP") == 0)		{ player->open(this, UP); }
		if (strcmp(token2, "down") == 0  || strcmp(token2, "DOWN") == 0)	{ player->open(this, DOWN); }
		return true;


	}//else if OPEN DOor---------------------------------------------------------------------------------

	else if (strcmp(token1, "close") == 0|| strcmp(token1, "CLOSE") == 0){
	
		if (token2 == NULL){
			printf("Which door do you want to close? \n\t");
			scanf_s("%s", &token2);
		}
		if (strcmp(token2, "east") == 0   || strcmp(token2, "EAST") == 0)	{ player->close(this, EAST); }
		if (strcmp(token2, "north") == 0  || strcmp(token2, "NORTH") == 0)	{ player->close(this, NORTH); }
		if (strcmp(token2, "west")  == 0  || strcmp(token2, "WEST")  == 0)	{ player->close(this, WEST);  }
		if (strcmp(token2, "south") == 0  || strcmp(token2, "SOUTH") == 0)	{ player->close(this, SOUTH); }
		if (strcmp(token2, "up") == 0	  || strcmp(token2, "UP") == 0)		{ player->close(this, UP); }
		if (strcmp(token2, "down") == 0   || strcmp(token2, "DOWN") == 0)   { player->close(this, DOWN); }
		return true;
	}//else if Close Door---------------------------------------------------------------------------------

	else if (strcmp(token1, "help") == 0 || strcmp(token1, "HELP") == 0){

		help();
		return true;
	}//else if help---------------------------------------------------------------------------------

	else if (strcmp(token1, "exit") == 0 || strcmp(token1, "EXIT") == 0){ 
			
		return false;
	}
	else{
		printf("\n Maybe you speak murloc but i am not.. \n");
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
		int i = 0;
		for (i = 0; i < (_NoE_); i++){

			if (World->exit[i].src == position){

				if (World->exit[i].direction == tgo){

					if (World->exit[i].open == true){

						position = World->exit[i].dest;

						printf("\t %s \n\n %s.\n", World->exit[i].dest->name, World->exit[i].dest->description);
						
						tf = false;

						break;

					}//if open

					else{

						printf("hum... this door is close maybe you can open it with a key.. \n");
						break;

					}//else close

				}//if direccioner

			}//if look the position

		}//for looking every valor

	}// const
	else{
		printf("There's nothing there.\n");
	}
}//void GOOO ------------------------------------------------------------

void bicho::look()const{

	printf("\n %s", position->description);

}//look room ------------------------------------------------------------
void bicho::lookdoor(world* World, dir look)const{


		for (int i = 0; i < _NoE_; i++){

			if (World->exit[i].src == position){

				if (World->exit[i].direction == look){

					printf("%s\n", World->exit[i].description);

				}//if direction to look

			}//position player

		}//for looking every valor


}//look door------------------------------------------------------------

void bicho::close(world* World, dir close)const{

	for (int i = 0; i < _NoE_; i++){

		if (World->exit[i].src == position){

			if (World->exit[i].direction == close){

				if (World->exit[i].open == true){

					World->exit[i].open = false;

					closedoorFX();//FX closing door

					printf("\t iii.... KBOOM!!!!!!!!! maybe you close the door too hard...\n", World->exit[i].dest);

				}// close the door

				else{

					printf("You can't do that.\n");

				}//else you cant open the door

			}//direction to close

		}//position of the player

	}//for looking every valor

}// close doors---------------------------------------------------------

void bicho::open(world* World, dir open)const{

	for (int i = 0; i < _NoE_; i++){

		if (World->exit[i].src == position){

			if (World->exit[i].direction == open){

				if (World->exit[i].open == true){

					World->exit[i].open = false;


					printf("\t iii.... the door was open..", World->exit[i].dest);

				}// close the door

				else{

					printf("You can't do that.\n");

				}//else you cant open the door

			}//direction to open

		}//position of the player

	}//for looking every valor

}// open doors---------------------------------------------------------
