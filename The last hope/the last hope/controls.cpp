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


if (size == 1){

	if (commandments[0]->S_str() == "look" || commandments[0]->S_str() == "l" || commandments[0]->S_str() == "Look" || commandments[0]->S_str() == "LOOK"){
		player->look();
	}//LOOK


	else if (commandments[0]->S_str() == "east" || commandments[0]->S_str() == "e" || commandments[0]->S_str() == "East" || commandments[0]->S_str() == "EAST"){

		if (player->position == Planet1_West){//TO go THE SPACESHIP IN PLANET 1				
			if (((exits*)Entities[ROOMSNUMBER + 3])->open == false){

				printf("\n\t You need to open the door! \n");
				return UPDATE_CONTINUE;
			}
		}
		player->go(this, EAST);
	}//GO
	else if (commandments[0]->S_str() == "north" || commandments[0]->S_str() == "n" || commandments[0]->S_str() == "North" || commandments[0]->S_str() == "NORTH"){
		player->go(this, NORTH);
	}//GO
	else if (commandments[0]->S_str() == "west" || commandments[0]->S_str() == "w" || commandments[0]->S_str() == "West" || commandments[0]->S_str() == "WEST"){
		player->go(this, WEST);
	}//GO
	else if (commandments[0]->S_str() == "south" || commandments[0]->S_str() == "s" || commandments[0]->S_str() == "South" || commandments[0]->S_str() == "EAST"){
		if (player->position == Space_Space){//TO go THE SPACESHIP IN PLANET 1				
			if (((exits*)Entities[ROOMSNUMBER + 25])->open == false){

				printf("\n\t You need to open the door! \n");
				return UPDATE_CONTINUE;
			}

		}
		player->go(this, SOUTH);
	}//GO
	else if (commandments[0]->S_str() == "up" || commandments[0]->S_str() == "u" || commandments[0]->S_str() == "Up" || commandments[0]->S_str() == "UP"){
		player->go(this, DOWN);
	}//GO
	else if (commandments[0]->S_str() == "down" || commandments[0]->S_str() == "d" || commandments[0]->S_str() == "Down" || commandments[0]->S_str() == "DOWN"){
		player->go(this, DOWN);
	}//GO

	else if (commandments[0]->S_str() == "inventory" || commandments[0]->S_str() == "inv" || commandments[0]->S_str() == "Inventory" || commandments[0]->S_str() == "INVENTORY"){
		player->Inventory();
	}

	else if (commandments[0]->S_str() == "open" || commandments[0]->S_str() == "o" || commandments[0]->S_str() == "Open" || commandments[0]->S_str() == "OPEN"){
		printf("try again");

	}//OPEN
	else if (commandments[0]->S_str() == "Hello" || commandments[0]->S_str() == "hello" || commandments[0]->S_str() == "hey" || commandments[0]->S_str() == "hi"){
		printf("Hi!");

	}//¡


	else if (commandments[0]->S_str() == "close" || commandments[0]->S_str() == "c" || commandments[0]->S_str() == "Close" || commandments[0]->S_str() == "CLOSE"){
		printf("try again");

	}//CLOSE

	else if (commandments[0]->S_str() == "help" || commandments[0]->S_str() == "h" || commandments[0]->S_str() == "Help" || commandments[0]->S_str() == "HELP"){
		help();
	}//HELP

	else if (commandments[0]->S_str() == "quit" || commandments[0]->S_str() == "q" || commandments[0]->S_str() == "Quit" || commandments[0]->S_str() == "QUIT"){
		//exit(0);
	return UPDATE_STOP;
	}//QUIT

	else if (commandments[0]->S_str() == "clean" || commandments[0]->S_str() == "Cle" || commandments[0]->S_str() == "Clean" || commandments[0]->S_str() == "CLEAN"){
		system("cls");
		return UPDATE_CONTINUE;
	}//CLEAN

	else if (commandments[0]->S_str() == "stats" || commandments[0]->S_str() == "Stats" || commandments[0]->S_str() == "sta" || commandments[0]->S_str() == "STATS"){
		player->stats();
	}//CLEAN

	else if (commandments[0]->S_str() == "map" || commandments[0]->S_str() == "MAP"){
		map();
	}//MAP

	else {
		printf("\n      Maybe you speak Murlok language but im not.. \n");
	}

}//if 1---------------------------------------------------

//---------------------------------------------------

//if 2--------------------------------------------------
else if (size == 2){

	if (commandments[0]->S_str() == "look" || commandments[0]->S_str() == "l" || commandments[0]->S_str() == "Look" || commandments[0]->S_str() == "LOOK"){

		if (commandments[1]->S_str() == "east" || commandments[1]->S_str() == "e" || commandments[1]->S_str() == "East" || commandments[1]->S_str() == "EAST"){
			player->look(this, EAST);
		}
		else if (commandments[1]->S_str() == "north" || commandments[1]->S_str() == "n" || commandments[1]->S_str() == "North" || commandments[1]->S_str() == "NORTH"){
			player->look(this, NORTH);
		}
		else if (commandments[1]->S_str() == "west" || commandments[1]->S_str() == "w" || commandments[1]->S_str() == "West" || commandments[1]->S_str() == "WEST"){
			player->look(this, WEST);
		}
		else if (commandments[1]->S_str() == "south" || commandments[1]->S_str() == "s" || commandments[1]->S_str() == "South" || commandments[1]->S_str() == "EAST"){
			player->look(this, SOUTH);
		}
		else if (commandments[1]->S_str() == "up" || commandments[1]->S_str() == "u" || commandments[1]->S_str() == "Up" || commandments[1]->S_str() == "UP"){
			player->look(this, DOWN);
		}
		else if (commandments[1]->S_str() == "down" || commandments[1]->S_str() == "d" || commandments[1]->S_str() == "Down" || commandments[1]->S_str() == "DOWN"){
			player->look(this, DOWN);
		}

	}//look------------------------------------------------------------------------------------


	else if (commandments[0]->S_str() == "go" || commandments[0]->S_str() == "g" || commandments[0]->S_str() == "Go" || commandments[0]->S_str() == "GO"){

		if (commandments[1]->S_str() == "east" || commandments[1]->S_str() == "e" || commandments[1]->S_str() == "East" || commandments[1]->S_str() == "EAST"){
			if (player->position == Planet1_West){//TO go THE SPACESHIP IN PLANET 1				
				if (((exits*)Entities[ROOMSNUMBER + 3])->open == false){

					printf("\n\t You need to open the door! \n");
					return UPDATE_CONTINUE;
				}
			}
			player->go(this, EAST);
		}
		else if (commandments[1]->S_str() == "north" || commandments[1]->S_str() == "n" || commandments[1]->S_str() == "North" || commandments[1]->S_str() == "NORTH"){
			player->go(this, NORTH);
		}
		else if (commandments[1]->S_str() == "west" || commandments[1]->S_str() == "w" || commandments[1]->S_str() == "West" || commandments[1]->S_str() == "WEST"){
			player->go(this, WEST);
		}
		else if (commandments[1]->S_str() == "south" || commandments[1]->S_str() == "s" || commandments[1]->S_str() == "South" || commandments[1]->S_str() == "EAST"){

			if (player->position == Space_Space){//TO go THE SPACESHIP IN PLANET 1				
				if (((exits*)Entities[ROOMSNUMBER + 25])->open == false){

					printf("\n\t You need to open the door! \n");
					return UPDATE_CONTINUE;
				}

			}
			player->go(this, SOUTH);
		}
		else if (commandments[1]->S_str() == "up" || commandments[1]->S_str() == "u" || commandments[1]->S_str() == "Up" || commandments[1]->S_str() == "UP"){
			player->go(this, DOWN);
		}
		else if (commandments[1]->S_str() == "down" || commandments[1]->S_str() == "d" || commandments[1]->S_str() == "Down" || commandments[1]->S_str() == "DOWN"){
			player->go(this, DOWN);
		}

	}//go------------------------------------------------------------------------------------

	else if (commandments[0]->S_str() == "talk" || commandments[0]->S_str() == "TALK" || commandments[0]->S_str() == "Talk"){

		if (commandments[1]->S_str() == "Android" || commandments[1]->S_str() == "android" || commandments[1]->S_str() == "ANDROID" || commandments[1]->S_str() == "R2D2"){


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

		if (commandments[1]->S_str() == "MONKEY" || commandments[1]->S_str() == "monkey" || commandments[1]->S_str() == "Monkey"){
			if (Monkey->position == player->position && monkeybool == true){

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



	else if (commandments[0]->S_str() == "open" || commandments[0]->S_str() == "o" || commandments[0]->S_str() == "Open" || commandments[0]->S_str() == "OPEN"){

		if (commandments[1]->S_str() == "east" || commandments[1]->S_str() == "e" || commandments[1]->S_str() == "East" || commandments[1]->S_str() == "EAST"){

			if (player->position == Planet1_West){//TO LOCK THE SPACESHIP IN PLANET 1
				LinkedList<entity*>::Node* Object_equiped = player->PlayerItems.first;

		
				for (; Object_equiped != nullptr; Object_equiped = Object_equiped->nxt){


					if (Object_equiped->data == ((exits*)Entities[ROOMSNUMBER + EXITSNUMBER + 2])){

						((exits*)Entities[ROOMSNUMBER + 3])->locked = false;
						player->open(this, EAST);

					}
				}

				printf("You need to take the target from the monkey to open the door");
				return UPDATE_CONTINUE;
			}

			player->open(this, EAST);
		}
		else if (commandments[1]->S_str() == "north" || commandments[1]->S_str() == "n" || commandments[1]->S_str() == "North" || commandments[1]->S_str() == "NORTH"){
			player->open(this, NORTH);
		}
		else if (commandments[1]->S_str() == "west" || commandments[1]->S_str() == "w" || commandments[1]->S_str() == "West" || commandments[1]->S_str() == "WEST"){
			player->open(this, WEST);
		}
		else if (commandments[1]->S_str() == "south" || commandments[1]->S_str() == "s" || commandments[1]->S_str() == "South" || commandments[1]->S_str() == "SOUTH"){

			if (player->position == Space_Space){//TO LOCK THE SPACESHIP IN PLANET 1

				LinkedList<entity*>::Node* Object_equiped = player->PlayerItems.first;


				for (; Object_equiped != nullptr; Object_equiped = Object_equiped->nxt){


					if (Object_equiped->data == ((exits*)Entities[ROOMSNUMBER + EXITSNUMBER + 6])){

						((exits*)Entities[ROOMSNUMBER + 25])->locked = false;
						player->open(this, EAST);

					}
				}

				printf("You need to take the sensor from the Stormtrooper to open the door");
				return UPDATE_CONTINUE;
			}


			player->open(this, SOUTH);
		}

		else if (commandments[1]->S_str() == "up" || commandments[1]->S_str() == "u" || commandments[1]->S_str() == "Up" || commandments[1]->S_str() == "UP"){
			player->open(this, DOWN);
		}
		else if (commandments[1]->S_str() == "down" || commandments[1]->S_str() == "d" || commandments[1]->S_str() == "Down" || commandments[1]->S_str() == "DOWN"){
			player->open(this, DOWN);
		}
		else if (commandments[1]->S_str() == "map" || commandments[1]->S_str() == "MAP"){
			map();
		}

	}//open------------------------------------------------------------------------------------

	else if (commandments[0]->S_str() == "close" || commandments[0]->S_str() == "c" || commandments[0]->S_str() == "Close" || commandments[0]->S_str() == "CLOSE"){

		if (commandments[1]->S_str() == "east" || commandments[1]->S_str() == "e" || commandments[1]->S_str() == "East" || commandments[1]->S_str() == "EAST"){
			player->close(this, EAST);
		}
		else if (commandments[1]->S_str() == "north" || commandments[1]->S_str() == "n" || commandments[1]->S_str() == "North" || commandments[1]->S_str() == "NORTH"){
			player->close(this, NORTH);
		}
		else if (commandments[1]->S_str() == "west" || commandments[1]->S_str() == "w" || commandments[1]->S_str() == "West" || commandments[1]->S_str() == "WEST"){
			player->close(this, WEST);
		}
		else if (commandments[1]->S_str() == "south" || commandments[1]->S_str() == "s" || commandments[1]->S_str() == "South" || commandments[1]->S_str() == "EAST"){
			player->close(this, SOUTH);
		}
		else if (commandments[1]->S_str() == "up" || commandments[1]->S_str() == "u" || commandments[1]->S_str() == "Up" || commandments[1]->S_str() == "UP"){
			player->close(this, DOWN);
		}
		else if (commandments[1]->S_str() == "down" || commandments[1]->S_str() == "d" || commandments[1]->S_str() == "Down" || commandments[1]->S_str() == "DOWN"){
			player->close(this, DOWN);
		}

	}//CLOSE------------------------------------------------------------------------------------

	else if (commandments[0]->S_str() == "Pick" || commandments[0]->S_str() == "pick" || commandments[0]->S_str() == "PICK"){
		player->pick(commandments[1]->S_str());
	}

	else if (commandments[0]->S_str() == "Drop" || commandments[0]->S_str() == "drop" || commandments[0]->S_str() == "DROP"){
		player->drop(commandments[1]->S_str());

		if (commandments[1]->S_str() == "THEBASS" || commandments[1]->S_str() == "thebass"){ party(); }
	} //EASTEREGG

	else if (commandments[0]->S_str() == "Help" || commandments[0]->S_str() == "HELP" || commandments[0]->S_str() == "help"){

		if (commandments[1]->S_str() == "Map" || commandments[1]->S_str() == "map" || commandments[1]->S_str() == "MAP"){ helpmap(); }
		if (commandments[1]->S_str() == "Comand" || commandments[1]->S_str() == "comand" || commandments[1]->S_str() == "COMAND" || commandments[1]->S_str() == "Comands" || commandments[1]->S_str() == "comands" || commandments[1]->S_str() == "COMANDS"){ helpComands(); }
	}

	else if (commandments[0]->S_str() == "Equip" || commandments[0]->S_str() == "equip")
	{
		player->equip(this, commandments[1]->S_str());
	}
	else if (commandments[0]->S_str() == "Unequip" || commandments[0]->S_str() == "unequip")
	{
		player->unequip(this, commandments[1]->S_str());
	}

	else {
		printf("Maybe you speak Murlok language but im not.. \n");
	}
}//if 2--------------------------------------------------

// --------------------------------------------------

//if 3-------------------------

else if (size == 3){

	if (commandments[0]->S_str() == "Drop" || commandments[0]->S_str() == "drop" || commandments[0]->S_str() == "DROP"){

		if ((commandments[1]->S_str() == "THE" || commandments[1]->S_str() == "the") && (commandments[2]->S_str() == "BASS" || commandments[2]->S_str() == "bass")){

			party(); //EASTEREGG
		}

	}

	else if (commandments[0]->S_str() == "talk" || commandments[0]->S_str() == "TALK" || commandments[0]->S_str() == "Talk"){

		if (commandments[1]->S_str() == "MONKEY" || commandments[1]->S_str() == "monkey" || commandments[1]->S_str() == "Monkey"){

			if (Monkey->position == player->position && monkeybool == true){

				if (Update_npc_talk == UPDATE_NPC_TALK2 || Update_npc_talk == UPDATE_NPC_TALK1){
					printf("\n UUUU UUUU UUUU UUAAA AUUU III III\n");
					printf("\n seems that you can talk to the monkey... (use <<Talk Monkey 'selection'>>\n");
				}
				Monkey->talkMonkey(commandments[2]->C_str(), Update_npc_talk);

			}

		}

		if (commandments[1]->S_str() == "STORMTROOPER" || commandments[1]->S_str() == "stormtrooper" || commandments[1]->S_str() == "Stormtrooper"){
			printf("\n young boy... SNIF SNIF... I lost my Blazzer... SNIF SNIF if you found it give it to me please! SNIF SNIF\n");
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
	if ((commandments[0]->S_str() == "Get" || commandments[0]->S_str() == "get") && (commandments[2]->S_str() == "from") && (commandments[3]->S_str() == "toolkit" || commandments[3]->S_str() == "monkeyshit")){

		player->get(this, commandments[1]->C_str(), commandments[3]->C_str());
	}

	if ((commandments[0]->S_str() == "Give" || commandments[0]->S_str() == "give") && (commandments[2]->S_str() == "to") && (commandments[3]->S_str() == "monkey" || commandments[3]->S_str() == "Monkey")){

		Monkey->Change(this, commandments[1]->C_str(), commandments[3]->C_str());
	}

	else {
		printf("Maybe you speak Murlok language but im not.. \n");
	}
}

player->noStop = true;

for (int j=0; commandments.size() > j; j++){
	delete commandments[j];
}


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

bool win(world *World){
		return World->player->position==World->Entities[13];
}

void Epilogue(){
	system("cls");
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t After few month the princess go out of the jail..\n");
	printf("\t\t Congrats... YOU WIN\n");
	printf("\t\t The force was with you and showe you the way to victory\n");
	Sleep(2000);
	system("cls");
	printf("\n\t\t	          ____\n");
	printf("\t\t                 _.' :  `._\n");
	printf("\t\t             .-.'`.  ;   .'`.-.\n");
	printf("\t\t    __      / : ___\ ;  /___ ; \      __\n");
	printf("\t\t ,'_ ''--.:__;'. - .';: :'. - .':__;.--'' _`,\n");
	printf("\t\t :' `.t''--.. '<@.`;_  ',@>` ..--''j.' `;\n");
	printf("\t\t      `:-.._J '-.-'L__ `-- ' L_..-;'\n");
	printf("\t\t        ' - .__;  . - '  ' - .  : __. - '\n");
	printf("\t\t            L ' /.------.\ ' J\n");
	printf("\t\t             ' - .   '--'   . - ' \n");
	printf("\t\t            __.l' - :_JL_; -';.__\n");
	printf("\t\t         .-j/'.;  ;''''  / .'\'-.\n");
	printf("\t\t       .' /:`. ' - .:     . - ' .';  `.\n");
	printf("\t\t     .-' / ;  '-. ' - .. - ' .-'  :    '-.\n");
	printf("\t\t  .+' - .  : : '-.__.-'; -._   \ \n");
	printf("\t\t  ; \  `.; ;                    : : ' + .;\n");
	printf("\t\t  :  ;   ; ;                    : ;  : \:\n");
	printf("\t\t : `.' - ;;;                  :;, / ;\n");
	printf("\t\t  ;    -: ;  :                ;  : .-''  :\n\n");

	printf("\t\t\t MAY THE FORCE BE WITH YOU");
	Sleep(1000);
}