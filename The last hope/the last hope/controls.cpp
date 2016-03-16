//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
//-----------headers------------------
#include "global.h"
#include "world.h"
#include "rooms.h"
#include "exits.h"
#include "bicho.h"
//------------------------

bool world::checkings(){

	char token1[15], token2[15], *token, recep[20] = "NULL" ;

	player->tf = true;//put tf in true valor

	printf("\n\t -What do you want to do now?\n\n\t\t");

	strcpy_s(token2, "NULL");

	fflush(stdin);

	gets_s(recep);
		
		if (strcmp(recep, "\0") == 0){
			printf("\t\tHODOR!\n");
			return true;
		}//if
	strcpy_s(token1, strtok_s(recep, " ", &token));//first token
	
		

		if (strcmp(token, "") != 0){
			strcpy_s(token2, strtok_s(NULL, " ", &token));//second token
		}//if

	


	// ------------------------------------------  COMAND LIST  ------------------------------------------------
	
	if (strcmp(token1, "go") == 0  || strcmp(token1, "g") == 0){


		if (strcmp(token2, "east") == 0  || strcmp(token2, "e") == 0)		{ player->go(this, EAST);	}
		else if (strcmp(token2, "north") == 0 || strcmp(token2, "n") == 0)	{ player->go(this, NORTH);	}
		else if (strcmp(token2, "west") == 0 || strcmp(token2, "e") == 0)	{ player->go(this, WEST);	}
		else if (strcmp(token2, "south") == 0 || strcmp(token2, "s") == 0)	{ player->go(this, SOUTH);	}
		else if (strcmp(token2, "up") == 0 || strcmp(token2, "u") == 0)		{ player->go(this, UP);		}
		else if (strcmp(token2, "down") == 0 || strcmp(token2, "d") == 0)	{ player->go(this, DOWN);	}
		else{
			printf("\n  Whitch dimension do you want to go with this extrange direction..?\n\t (this is sarcasm, write better) \n\t");
		}


		return true;

	}//go to one place---------------------------------------------

	else if (strcmp(token1, "look") == 0 || strcmp(token1, "l") == 0 ){
		

		if (strcmp(token2, "NULL") == 0){player->look();}//look around

		else if (strcmp(token2, "east") == 0  || strcmp(token2, "e")  == 0)	{ player->lookdoor(this, EAST);		}
		else if(strcmp(token2, "north") == 0 || strcmp(token2, "n") == 0)	{ player->lookdoor(this, NORTH);	}
		else if(strcmp(token2, "west") == 0 || strcmp(token2, "w") == 0)		{ player->lookdoor(this, WEST);		}
		else if(strcmp(token2, "south") == 0 || strcmp(token2, "s") == 0)	{ player->lookdoor(this, SOUTH);	}
		else if(strcmp(token2, "up") == 0 || strcmp(token2, "u") == 0)			{ player->lookdoor(this, UP);		}
		else if(strcmp(token2, "down") == 0 || strcmp(token2, "d") == 0)		{ player->lookdoor(this, DOWN);		}
		else{
			printf("\n  Mmm... There is a sexy giraffe theree... \n\t (this is sarcasm, write better) \n\t");
		} 

		return true;
	}//if else look to the door--------------------------------------

	else if (strcmp(token1, "open") == 0|| strcmp(token1, "o") == 0 ){
	
		if (token2 == NULL){
			printf("Which door do you want to open?? \n\t");
			scanf_s("%s", &token2);
		}
		if (strcmp(token2, "east") == 0  || strcmp(token2, "e") == 0)	{ player->open(this, EAST);		}
		if (strcmp(token2, "north") == 0 || strcmp(token2, "n") == 0)	{ player->open(this, NORTH);	}
		if (strcmp(token2, "west") == 0  || strcmp(token2, "w") == 0)	{ player->open(this, WEST);		}
		if (strcmp(token2, "south") == 0 || strcmp(token2, "s") == 0)	{ player->open(this, SOUTH);	}
		if (strcmp(token2, "up") == 0    || strcmp(token2, "u") == 0)		{ player->open(this, UP);		}
		if (strcmp(token2, "down") == 0  || strcmp(token2, "d") == 0)	{ player->open(this, DOWN);		}
		return true;


	}//else if OPEN DOor---------------------------------------------

	else if (strcmp(token1, "close") == 0|| strcmp(token1, "c") == 0){
	
		if (token2 == NULL){
			printf("Which door do you want to close? \n\t");
			scanf_s("%s", &token2);
		}
		if (strcmp(token2, "east") == 0   || strcmp(token2, "e") == 0)	{ player->close(this, EAST);	}
		if (strcmp(token2, "north") == 0  || strcmp(token2, "n") == 0)	{ player->close(this, NORTH);	}
		if (strcmp(token2, "west")  == 0  || strcmp(token2, "w")  == 0)	{ player->close(this, WEST);	}
		if (strcmp(token2, "south") == 0  || strcmp(token2, "s") == 0)	{ player->close(this, SOUTH);	}
		if (strcmp(token2, "up") == 0	  || strcmp(token2, "u") == 0)		{ player->close(this, UP);		}
		if (strcmp(token2, "down") == 0   || strcmp(token2, "d") == 0)   { player->close(this, DOWN);	}
		return true;
	}//else if Close Door-----------------------------------------------


	else if (strcmp(token1, "help") == 0 || strcmp(token1, "h") == 0){

		help();
		return true;
	}//else if help------------------------------------------------------



	else if (strcmp(token1, "clean") == 0 || strcmp(token1, "cl") == 0){
	
		system("cls");
	
		return true;
	}//else if clean-----------------------------------------------------


	else if (strcmp(token1, "exit") == 0 || strcmp(token1, "e") == 0){ 
			
		return false;
	}//else if exit-------------------------------------------------------


	else{
		printf("\n Maybe you speak murloc but i am not.. \n");

	}//else if doesnt understand the code --------------------------------

	
	
	
	player->tf = true;
	return true;

}// void checkings------------------------------------------


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
	printf("\t\t|                               |\n");
	printf("\t\t|             CLEAN             |\n");
	printf("\t\t|_______________________________|\n");

}//help


