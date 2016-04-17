//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//----------includes------------------
#include "global.h"
#include "world.h"
#include "rooms.h"
#include "exits.h"
#include "player.h"
#include "vector.h"
//------------------------

bool world::checkinloop(){

	fflush(stdin);

	char str[80];

	printf("\n\t -What do you want to do now?\n\n\t\t");
	fflush(stdin);

	gets_s(str);//takes the str

	mString token1(str);

	if (token1 == "\0"){
		printf("HODOR\n");
		return true;
	}


	/*if ( str[0] != NULL && str[0] != ' '){
		printf("HODOR!\n");
		return true;
	}//if*/
	Vector<mString*> commandments = token1.Tokenize();
	
	commandments.shrink_to_fit();

	uint size;
	size = commandments.size();


	mString* command0 = nullptr;
	mString* command1 = nullptr;
	mString* command2 = nullptr;
	mString* command3 = nullptr;


	if (size == 4)
	{
		command0 = commandments[0];
		command1 = commandments[1];
		command2 = commandments[2];
		command3 = commandments[3];
	}
	else if (size == 3)
	{
		command0 = commandments[0];
		command1 = commandments[1];
		command2 = commandments[2];
	}
	else if (size == 2)
	{
		command0 = commandments[0];
		command1 = commandments[1];
	}
	else if (size == 1)
	{
		command0 = commandments[0];
	}
	else{
		printf("HODOR\n\n");
		return true;
	}


	if (size == 1 && command1 == nullptr){

		if (*command0 == "look" || *command0 == "l" || *command0 == "Look" || *command0 == "LOOK"){
			player[0]->Look();
		}//LOOK


		if (*command0 == "east" || *command0 == "e" || *command0 == "East" || *command0 == "EAST"){
			player[0]->go(this, EAST);
		}//GO
		if (*command0 == "north" || *command0 == "n" || *command0 == "North" || *command0 == "NORTH"){
			player[0]->go(this, NORTH);
		}//GO
		if (*command0 == "west" || *command0 == "w" || *command0 == "West" || *command0 == "WEST"){
			player[0]->go(this, WEST);
		}//GO
		if (*command0 == "south" || *command0 == "s" || *command0 == "South" || *command0 == "EAST"){
			player[0]->go(this, SOUTH);
		}//GO
		if (*command0 == "up" || *command0 == "u" || *command0 == "Up" || *command0 == "UP"){
			player[0]->go(this, DOWN);
		}//GO
		if (*command0 == "down" || *command0 == "d" || *command0 == "Down" || *command0 == "DOWN"){
			player[0]->go(this, DOWN);
		}//GO



		if (*command0 == "open" || *command0 == "o" || *command0 == "Open" || *command0 == "OPEN"){
			printf("try again");
			return true;
		}//OPEN

		if (*command0 == "close" || *command0 == "c" || *command0 == "Close" || *command0 == "CLOSE"){
			printf("try again");
			return true;
		}//CLOSE

		if (*command0 == "help" || *command0 == "h" || *command0 == "Help" || *command0 == "HELP"){
			help();
		}//HELP

		if (*command0 == "quit" || *command0 == "q" || *command0 == "Quit" || *command0 == "QUIT"){
			return false;
		}//QUIT

		if (*command0 == "clean" || *command0 == "Cle" || *command0 == "Clean" || *command0 == "CLEAN"){
			system("cls");
			return false;
		}//CLEAN
	}//if 1---------------------------------------------------

	//---------------------------------------------------

	//if 2--------------------------------------------------
	if (size == 2 && command2 == nullptr){

		if (*command0 == "look" || *command0 == "l" || *command0 == "Look" || *command0 == "LOOK"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				player[0]->lookdoor(this, EAST);
			}
			if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player[0]->lookdoor(this, NORTH);
			}
			if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player[0]->lookdoor(this, WEST);
			}
			if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player[0]->lookdoor(this, SOUTH);
			}
			if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player[0]->lookdoor(this, DOWN);
			}
			if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player[0]->lookdoor(this, DOWN);
			}

		}//look------------------------------------------------------------------------------------


		if (*command0 == "go" || *command0 == "g" || *command0 == "Go" || *command0 == "GO"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				player[0]->go(this, EAST);
			}
			if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player[0]->go(this, NORTH);
			}
			if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player[0]->go(this, WEST);
			}
			if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player[0]->go(this, SOUTH);
			}
			if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player[0]->go(this, DOWN);
			}
			if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player[0]->go(this, DOWN);
			}

		}//go------------------------------------------------------------------------------------

		if (*command0 == "open" || *command0 == "o" || *command0 == "Open" || *command0 == "OPEN"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				player[0]->open(this, EAST);
			}
			if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player[0]->open(this, NORTH);
			}
			if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player[0]->open(this, WEST);
			}
			if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player[0]->open(this, SOUTH);
			}
			if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player[0]->open(this, DOWN);
			}
			if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player[0]->open(this, DOWN);
			}

		}//open------------------------------------------------------------------------------------

		if (*command0 == "close" || *command0 == "c" || *command0 == "Close" || *command0 == "CLOSE"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				player[0]->close(this, EAST);
			}
			if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player[0]->close(this, NORTH);
			}
			if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player[0]->close(this, WEST);
			}
			if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player[0]->close(this, SOUTH);
			}
			if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player[0]->close(this, DOWN);
			}
			if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player[0]->close(this, DOWN);
			}

		}//CLOSE------------------------------------------------------------------------------------

	}//if 2--------------------------------------------------

	// --------------------------------------------------

	//if 3--------------------------------------------------
	else{

		printf("SALTO\n");
		return false;
	}
	return false;
}//check in loop





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


