//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
#include "NPC.h"
//------------------------

update_status world::checkinloop(mString& token1, update_npc_talk&Update_npc_talk, bool&monkeybool){

	update_status ret = UPDATE_CONTINUE;

	if (token1.buffer == "\0"){
		printf("HODOR\n");
		return UPDATE_CONTINUE;
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
		return UPDATE_CONTINUE;
	}


	if (size == 1 && command1 == nullptr){

		if (*command0 == "look" || *command0 == "l" || *command0 == "Look" || *command0 == "LOOK"){
			player->look();
		}//LOOK


		else if (*command0 == "east" || *command0 == "e" || *command0 == "East" || *command0 == "EAST"){
			
			if (player->position == Planet1_West){//TO go THE SPACESHIP IN PLANET 1				
				if (((exits*)Entities[ROOMSNUMBER + 3])->open == false){

					printf("\n\t You need to open the door! \n");
					return UPDATE_CONTINUE;
				}				
			}			
			player->go(this, EAST);
		}//GO
		else if (*command0 == "north" || *command0 == "n" || *command0 == "North" || *command0 == "NORTH"){
			player->go(this, NORTH);
		}//GO
		else if (*command0 == "west" || *command0 == "w" || *command0 == "West" || *command0 == "WEST"){
			player->go(this, WEST);
		}//GO
		else if (*command0 == "south" || *command0 == "s" || *command0 == "South" || *command0 == "EAST"){
			player->go(this, SOUTH);
		}//GO
		else if (*command0 == "up" || *command0 == "u" || *command0 == "Up" || *command0 == "UP"){
			player->go(this, DOWN);
		}//GO
		else if (*command0 == "down" || *command0 == "d" || *command0 == "Down" || *command0 == "DOWN"){
			player->go(this, DOWN);
		}//GO

		else if (*command0 == "inventory" || *command0 == "inv" || *command0 == "Inventory" || *command0 == "INVENTORY"){
			player->Inventory();
		}

		else if (*command0 == "open" || *command0 == "o" || *command0 == "Open" || *command0 == "OPEN"){
			printf("try again");

		}//OPEN
		else if (*command0 == "Hello" || *command0 == "hello" || *command0 == "hey" || *command0 == "hi"){
			printf("Hi!");

		}//¡


		else if (*command0 == "close" || *command0 == "c" || *command0 == "Close" || *command0 == "CLOSE"){
			printf("try again");

		}//CLOSE

		else if (*command0 == "help" || *command0 == "h" || *command0 == "Help" || *command0 == "HELP"){
			help();
		}//HELP

		else if (*command0 == "quit" || *command0 == "q" || *command0 == "Quit" || *command0 == "QUIT"){
			return UPDATE_STOP;
		}//QUIT

		else if (*command0 == "clean" || *command0 == "Cle" || *command0 == "Clean" || *command0 == "CLEAN"){
			system("cls");
			return UPDATE_CONTINUE;
		}//CLEAN

		else if (*command0 == "stats" || *command0 == "Stats" || *command0 == "sta" || *command0 == "STATS"){
			player->stats();
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
				player->look(this, EAST);
			}
			else if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player->look(this, NORTH);
			}
			else if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player->look(this, WEST);
			}
			else if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player->look(this, SOUTH);
			}
			else if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player->look(this, DOWN);
			}
			else if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player->look(this, DOWN);
			}

		}//look------------------------------------------------------------------------------------


		else if (*command0 == "go" || *command0 == "g" || *command0 == "Go" || *command0 == "GO"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				if (player->position == Planet1_West){//TO go THE SPACESHIP IN PLANET 1				
					if (((exits*)Entities[ROOMSNUMBER + 3])->open == false){

						printf("\n\t You need to open the door! \n");
						return UPDATE_CONTINUE;
					}
				}
				player->go(this, EAST);
			}
			else if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player->go(this, NORTH);
			}
			else if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player->go(this, WEST);
			}
			else if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player->go(this, SOUTH);
			}
			else if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player->go(this, DOWN);
			}
			else if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player->go(this, DOWN);
			}

		}//go------------------------------------------------------------------------------------

		else if (*command0 == "talk" || *command0 == "TALK" || *command0 == "Talk" ){

			if (*command1 == "Android" || *command1 == "android" || *command1 == "ANDROID" || *command1 == "R2D2"){
				
				
				if (Android->position == player->position){

					system("cls");
					printf("\n\n-------------------------------------------------------------------------------");
					printf("\n\n--------------------------- TALKING WITH THE ANDROID --------------------------");
					printf("\n\n-------------------------------------------------------------------------------\n");
					return UPDATE_TALKING;
				}
				else{
					printf("\n There isn't any android here! :O");
					return UPDATE_CONTINUE;
				}
				
				
			}

			if (*command1 == "MONKEY" || *command1 == "monkey" || *command1 == "Monkey" ){
				if (Monkey->position == player->position && monkeybool==true){

					if (Update_npc_talk == UPDATE_NPC_TALK2 || Update_npc_talk == UPDATE_NPC_TALK1){
						printf("\n UUUU UUUU UUUU UUAAA AUUU III III\n");
						printf("\n seems that you can talk to the monkey... (use <<Talk Monkey 'selection'>>\n");

					}
					
					
					Monkey->talkMonkey(commandments[1]->C_str(), Update_npc_talk);
					Update_npc_talk = UPDATE_NPC_TALK2;
				}
				else{
					printf("\n There isn't any Monkey here! :O");
					return UPDATE_CONTINUE;
				}
			}
		}
	


		else if (*command0 == "open" || *command0 == "o" || *command0 == "Open" || *command0 == "OPEN"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				
				if (player->position == Planet1_West){//TO LOCK THE SPACESHIP IN PLANET 1
					for (int i = 0; player->container.size() >= i; i++){

						if (player->container[i] == Entities[ROOMSNUMBER + EXITSNUMBER + 2]){
							((exits*)Entities[ROOMSNUMBER + 3])->locked = false;
							player->open(this, EAST);							
						}
					}

					printf("You need to take the target from the monkey to open the door");
					return UPDATE_CONTINUE;
				}				
				
				player->open(this, EAST);
			}
			else if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player->open(this, NORTH);
			}
			else if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player->open(this, WEST);
			}
			else if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player->open(this, SOUTH);
			}
			else if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player->open(this, DOWN);
			}
			else if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player->open(this, DOWN);
			}
			else if (*command1 == "map" || *command1 == "MAP"){
				map();
			}

		}//open------------------------------------------------------------------------------------

		else if (*command0 == "close" || *command0 == "c" || *command0 == "Close" || *command0 == "CLOSE"){

			if (*command1 == "east" || *command1 == "e" || *command1 == "East" || *command1 == "EAST"){
				player->close(this, EAST);
			}
			else if (*command1 == "north" || *command1 == "n" || *command1 == "North" || *command1 == "NORTH"){
				player->close(this, NORTH);
			}
			else if (*command1 == "west" || *command1 == "w" || *command1 == "West" || *command1 == "WEST"){
				player->close(this, WEST);
			}
			else if (*command1 == "south" || *command1 == "s" || *command1 == "South" || *command1 == "EAST"){
				player->close(this, SOUTH);
			}
			else if (*command1 == "up" || *command1 == "u" || *command1 == "Up" || *command1 == "UP"){
				player->close(this, DOWN);
			}
			else if (*command1 == "down" || *command1 == "d" || *command1 == "Down" || *command1 == "DOWN"){
				player->close(this, DOWN);
			}

		}//CLOSE------------------------------------------------------------------------------------

		else if (*command0 == "Pick" || *command0 == "pick" || *command0 == "PICK"){
			player->pick(*command1);
		}

		else if (*command0 == "Drop" || *command0 == "drop" || *command0 == "DROP"){
			player->drop(*command1);

			if (*command1 == "THEBASS" || *command1 == "thebass"){	party(); 	}
		} //EASTEREGG

		else if (*command0 == "Help" || *command0 == "HELP" || *command0 == "help"){
			
			if (*command1 == "Map" || *command1 == "map" || *command1 == "MAP"){ helpmap(); }
			if (*command1 == "Comand" || *command1 == "comand" || *command1 == "COMAND" ||*command1 == "Comands" || *command1 == "comands" || *command1 == "COMANDS"){ helpComands(); }
		}

		else if (*command0 == "Equip" || *command0 == "equip")
		{
			player->equip(this, *command1);
		}
		else if (*command0 == "Unequip" || *command0 == "unequip")
		{
			player->unequip(this,*command1);
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

				party(); //EASTEREGG
			}		

		}

		else if (*command0 == "talk" || *command0 == "TALK" || *command0 == "Talk"){

			if (*command1 == "MONKEY" || *command1 == "monkey" || *command1 == "Monkey"){

				if (Monkey->position == player->position && monkeybool == true){

					if (Update_npc_talk == UPDATE_NPC_TALK2 || Update_npc_talk == UPDATE_NPC_TALK1){
						printf("\n UUUU UUUU UUUU UUAAA AUUU III III\n");
						printf("\n seems that you can talk to the monkey... (use <<Talk Monkey 'selection'>>\n");
					}
						Monkey->talkMonkey(commandments[2]->C_str(), Update_npc_talk);
				
				}

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
		
			player->get(this, commandments[1]->C_str(), commandments[3]->C_str());
		}


		else {
			printf("Maybe you speak Murlok language but im not.. \n");
		}
	}



	player->noStop = true;


	return ret;
}//check in loop


void help(){
	printf("\n\t\t	Comadand list :	    help comands\n");
	printf("\n\t\t	help map :          help map\n");
}//help

void helpComands(){

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
	printf("\t\t|				|\n");
	printf("\t\t|  PICK         |  DROP	|\n");
	printf("\t\t|				|\n");
	printf("\t\t|  TALK       |  ATTACK	|\n");
	printf("\t\t|				|\n");
	printf("\t\t|  HELP         |  EXIT		|\n");
	printf("\t\t|                               |\n");
	printf("\t\t|             CLEAN             |\n");
	printf("\t\t|_______________________________|\n");

	
}