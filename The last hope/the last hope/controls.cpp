//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include "conio.h"
#include<time.h>
//----------includes------------------
#include "global.h"
#include "world.h"
#include "rooms.h"
#include "exits.h"
#include "player.h"
#include "vector.h"
//------------------------

bool world::checkinloop(mString& token1){

	if (token1.buffer == "\0"){
		printf("HODOR\n");
		return true;
	}

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
			player[0]->look();
		}//LOOK


		else if (*command0 == "east" || *command0 == "e" || *command0 == "East" || *command0 == "EAST"){
			player[0]->go(this, EAST);
		}//GO
		else if (*command0 == "north" || *command0 == "n" || *command0 == "North" || *command0 == "NORTH"){
			player[0]->go(this, NORTH);
		}//GO
		else if (*command0 == "west" || *command0 == "w" || *command0 == "West" || *command0 == "WEST"){
			player[0]->go(this, WEST);
		}//GO
		else if (*command0 == "south" || *command0 == "s" || *command0 == "South" || *command0 == "EAST"){
			player[0]->go(this, SOUTH);
		}//GO
		else if (*command0 == "up" || *command0 == "u" || *command0 == "Up" || *command0 == "UP"){
			player[0]->go(this, DOWN);
		}//GO
		else if (*command0 == "down" || *command0 == "d" || *command0 == "Down" || *command0 == "DOWN"){
			player[0]->go(this, DOWN);
		}//GO

		else if (*command0 == "inventory" || *command0 == "inv" || *command0 == "Inventory" || *command0 == "INVENTORY"){
			player[0]->Inventory();
		}

		else if (*command0 == "open" || *command0 == "o" || *command0 == "Open" || *command0 == "OPEN"){
			printf("try again");

		}//OPEN

		else if (*command0 == "close" || *command0 == "c" || *command0 == "Close" || *command0 == "CLOSE"){
			printf("try again");

		}//CLOSE

		else if (*command0 == "help" || *command0 == "h" || *command0 == "Help" || *command0 == "HELP"){
			help();
		}//HELP

		else if (*command0 == "quit" || *command0 == "q" || *command0 == "Quit" || *command0 == "QUIT"){
			return false;
		}//QUIT

		else if (*command0 == "clean" || *command0 == "Cle" || *command0 == "Clean" || *command0 == "CLEAN"){
			system("cls");
			return true;
		}//CLEAN

		else if (*command0 == "stats" || *command0 == "Stats" || *command0 == "sta" || *command0 == "STATS"){
			player[0]->stats();
		}//CLEAN

		else if (*command0 == "map" || *command0 == "MAP"){
			map();
		}//MAP

		else {
			printf("\n      Maybe you speak Murlok language but im not.. \n");
		}

	}//if 1---------------------------------------------------

	//---------------------------------------------------

	//if 2--------------------------------------------------
	else if (size == 2 && command2 == nullptr){

		if (*command0 == "look" || *command0 == "l" || *command0 == "Look" || *command0 == "LOOK"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				player[0]->look(this, EAST);
			}
			else if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player[0]->look(this, NORTH);
			}
			else if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player[0]->look(this, WEST);
			}
			else if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player[0]->look(this, SOUTH);
			}
			else if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player[0]->look(this, DOWN);
			}
			else if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player[0]->look(this, DOWN);
			}

		}//look------------------------------------------------------------------------------------


		else if (*command0 == "go" || *command0 == "g" || *command0 == "Go" || *command0 == "GO"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				player[0]->go(this, EAST);
			}
			else if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player[0]->go(this, NORTH);
			}
			else if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player[0]->go(this, WEST);
			}
			else if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player[0]->go(this, SOUTH);
			}
			else if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player[0]->go(this, DOWN);
			}
			else if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player[0]->go(this, DOWN);
			}

		}//go------------------------------------------------------------------------------------

		else if (*command0 == "open" || *command0 == "o" || *command0 == "Open" || *command0 == "OPEN"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				player[0]->open(this, EAST);
			}
			else if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player[0]->open(this, NORTH);
			}
			else if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player[0]->open(this, WEST);
			}
			else if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player[0]->open(this, SOUTH);
			}
			else if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player[0]->open(this, DOWN);
			}
			else if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player[0]->open(this, DOWN);
			}
			else if (*command1 == "map" || *command1 == "MAP"){
				map();
			}

		}//open------------------------------------------------------------------------------------

		else if (*command0 == "close" || *command0 == "c" || *command0 == "Close" || *command0 == "CLOSE"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				player[0]->close(this, EAST);
			}
			else if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player[0]->close(this, NORTH);
			}
			else if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player[0]->close(this, WEST);
			}
			else if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player[0]->close(this, SOUTH);
			}
			else if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player[0]->close(this, DOWN);
			}
			else if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player[0]->close(this, DOWN);
			}

		}//CLOSE------------------------------------------------------------------------------------

		else if (*command0 == "Pick" || *command0 == "pick" || *command0 == "PICK"){
			player[0]->pick(*command1);
		}

		else if (*command0 == "Drop" || *command0 == "drop" || *command0 == "DROP"){
			player[0]->drop(*command1);

			if (*command1 == "THEBASS" || *command1 == "thebass"){	party(); 	}
		}

		else if (*command0 == "Help" || *command0 == "HELP" || *command0 == "help"){
			
			if (*command1 == "Map" || *command1 == "map" || *command1 == "MAP"){ helpmap(); }
		}

		else if (*command0 == "Equip" || *command0 == "equip")
		{
			player[0]->equip(this, *command1);
		}
		else if (*command0 == "Unequip" || *command0 == "unequip")
		{
			player[0]->unequip(this,*command1);
		}

		else {
			printf("Maybe you speak Murlok language but im not.. \n");
		}
	}//if 2--------------------------------------------------

	// --------------------------------------------------

	//if 3-------------------------

	else if (size == 3){

		if (*command0 == "Drop" || *command0 == "drop" || *command0 == "DROP"){

			if ((*command1 == "THE" || *command1 == "the") && (*command2 == "BASS" || *command2 == "bass")){

				party(); //EASTEREGG it is going to be modificated
			}
			else {

			}

		}
		else {
			printf("Maybe you speak Murlok language but im not.. \n");
		}
	}		
	//if 3--------------------------------------------------

	// --------------------------------------------------

	//if 4--------------------------------------------------
	else if (size == 4){
		if ((*command0 == "Get" || *command0 == "get") && (*command2 == "from") && (*command3 == "toolkit" || *command3 == "monkeyshit")){
		
			player[0]->get(this, commandments[1]->C_str(), commandments[3]->C_str());
		}


		else {
			printf("Maybe you speak Murlok language but im not.. \n");
		}
	}



	player[0]->noStop = true;


	return true;
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
	printf("\t\t|  GET         |  PUT	|\n");
	printf("\t\t|  PICK         |  DROP	|\n");

	printf("\t\t|				|\n");
	printf("\t\t|  HELP         |  EXIT		|\n");
	printf("\t\t|                               |\n");
	printf("\t\t|             CLEAN             |\n");
	printf("\t\t|_______________________________|\n");

}//help

bool kbhit(world*TheWorld){
		srand(time(NULL));
		mString Stringcommands;

		char command[COMMANDBUFFER];
		char character;
	
		bool firsttimeinloop = true, true_or_false = true;

		unsigned int currenttime = 0, initialtime = 0, charcommandnum = 0,TimeSinceWrote=0,TimeWrite=0;
		

		initialtime = GetTickCount();

		while (true_or_false==true){

			currenttime = GetTickCount();

			if (currenttime >= (initialtime + TIMETOPASS) || TimeSinceWrote >= TIMETOWAIT){
				
				int num = 1 + rand() % (5 - 1);
					
				if (num==1){
					printf("\n\t\t mmmh.. maybe you should write something\n");
				}
				
				if (num == 2){
					printf("\n\t\t lalala lalala the time goes by.. \n");
				}

				if (num == 3){
					printf("\n\t\t It seems that it has remained a good evening\n");
				}

				if (num == 4){
					printf("\n\t\t mmmh.. maybe you should write something\n");
				}

				initialtime = currenttime;
			}//if
		
			if (_kbhit())
			{
				if (charcommandnum < (COMMANDBUFFER - 2)){


					command[charcommandnum] = _getch();

					
					//printf(" >> %s",command[charcommandnum]);

					command[charcommandnum + 1] = '\0';
					
					printf("\t\t >> %s\r ", command);
					
					charcommandnum++;

					if (command[charcommandnum - 1] == '\r'){
						
						//printf("\n\t\t >> %s\n\t\t\n", command);
						
						command[charcommandnum - 1] = '\0';

						charcommandnum = 0;
						
						Stringcommands.buffer = command;

						true_or_false = TheWorld->checkinloop(Stringcommands);
					}//if
				}//if
				else{
					command[COMMANDBUFFER - 1] = '\0';

					TimeWrite = GetTickCount();
					TimeSinceWrote = TimeWrite - currenttime;
				}//else
			}//if
		
	
		}//while
		return true_or_false;
}
