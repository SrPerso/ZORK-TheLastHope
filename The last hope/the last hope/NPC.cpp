#include "NPC.h"
#include "rooms.h"
#include "world.h"
#include "Entity.h"
#include "global.h"
#include <stdio.h>
#include "player.h"
#include "vector.h"

#include <Windows.h>

Npc::Npc(const char* name, const char* description, room* position) :
Creature(name, description,nullptr, CREATURE), position(position){

}
Npc::~Npc(){

}


bool Npc::Update(world*World, const int& inittime, update_npc_movement&npc_update,bool& npcstop){

	int currenttime = 0;

		currenttime = GetTickCount();

		if (currenttime >= (inittime + TIMETOMOVENPC) && npcstop == true){
			
			npc_update =	World->Android->Move(npc_update, World);

			return false; 
		}


	return true;
}




update_npc_movement Npc::Move(update_npc_movement& update_npc, world*World){
	
/*	if (this->IsAlive() == false){
		return UPDATE_NPC_DEAD;
	}

*/

	int num = 1 + rand() % (3- 1);
	
		switch (update_npc)
		{
		case UPDATE_NPC_MOVE1://East

			if (position == World->player->position){ printf("\t aa1\n"); return UPDATE_NPC_PET; }

			printf("\t ANDROID IS AT EAST\n");

			if (num == 1){
				position = World->Planet1_North;

				return UPDATE_NPC_MOVE4;
			}

			else{
				position = World->Planet1_South;
				return UPDATE_NPC_MOVE2;
			}
			
			break;

		case UPDATE_NPC_MOVE2://south

			if (this->position == World->player->position){ printf("\t aa2\n"); return UPDATE_NPC_PET; }

			printf("\tANDROID IS AT SOUTH\n");

			if (num == 1){
				position = World->Planet1_East;
				return UPDATE_NPC_MOVE1;
			}

			else{
				position = World->Planet1_West;
				return UPDATE_NPC_MOVE3;
			}
			
			break;

		case UPDATE_NPC_MOVE3://west

			if (this->position == World->player->position){ printf("\t aa3\n"); return UPDATE_NPC_PET; }

			printf("\tANDROID IS AT WEST\n");

			if (num == 1){
				position = World->Planet1_South;
				return UPDATE_NPC_MOVE2;
			}

			else{
				position = World->Planet1_North;
				return UPDATE_NPC_MOVE4;
			}
		
			break;

		case UPDATE_NPC_MOVE4://north

			if (this->position == World->player->position){ printf("\t aa4\n"); return UPDATE_NPC_PET; }

			printf("\tANDROID IS AT NORTH\n");

			if (num == 1){
				position = World->Planet1_East;
				return UPDATE_NPC_MOVE3;
			}

			else{
				position = World->Planet1_West;
				return UPDATE_NPC_MOVE1;
			}


			return UPDATE_NPC_MOVE1;

	
			break;


		case UPDATE_NPC_PET:

			this->position = World->player->position;
			printf("\t %$%/$$$!$·$/·$/$$\n");
			return UPDATE_NPC_PET;

	
			break;


		default:
			break;
		}
}


void Npc::talkMonkey(const mString answer, update_npc_talk&Update_npc_talk){
	

	switch (Update_npc_talk){

	
		case UPDATE_NPC_TALK1:

		printf("\n\n-------------------------------------------------------------------------------");
		printf("\n\n 1. Is silly trying to talk to a monkey ");
		printf("\n\n-------------------------------------------------------------------------------");
		printf("\n\n 2. WHAT THE FU...");
		printf("\n\n-------------------------------------------------------------------------------");
		printf("\n\n 3. Give me the target...");
		printf("\n\n-------------------------------------------------------------------------------");
		printf("\n\n 4. UUU UUA UUAUAUU AUUAUA");
		printf("\n\n-------------------------------------------------------------------------------");

		Update_npc_talk = UPDATE_NPC_TALK2;

		break;


		case UPDATE_NPC_TALK2:

			if (answer == "1"){
				printf("\n\n	AAAU AUAU UAU AAU AU "); }
			else if (answer == "2"){ 
				printf("\n\n	FUFUFUFUU  "); }
			else if (answer == "3"){
				printf("\n\n	UA II IUUUAU AUUIA "); }
			else if (answer == "4"){ 
				printf("\n\n	UAA UAUAU UUA AUUA "); }
			else{ 
				printf("\n\n	This is not a valid answer "); }

			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 1. Is silly trying to talk to a monkey ");
			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 2. WHAT THE FU...");
			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 3. Give me the target...");
			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 4. U u uaaA UAA UAAA");
			printf("\n\n-------------------------------------------------------------------------------");

			Update_npc_talk = UPDATE_NPC_TALK3;

		break;

		case UPDATE_NPC_TALK3:

			if (answer == "1"){ 
				printf("\n\n	AAAU AUAU UAU AAU AU "); }
			else if (answer == "2"){ 
				printf("\n\n	FUFUFUFUU  "); }
			else if (answer == "3"){ 
				printf("\n\n	AAAU AUAU UAU AAU AU  (maybe you must say please..)"); }
			else if (answer == "4"){ 
				printf("\n\n	UAA UAUAAAUAU UUA AUUA "); }
			else{ 
				printf("\n\n	This is not a valid answer "); }
			

			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 1. Is silly trying to talk to a monkey ");
			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 2. WHAT THE FU...");
			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 3. Give me the target...PLEASE");
			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 4. U u uaaA UAA UAAA");
			printf("\n\n-------------------------------------------------------------------------------");

			Update_npc_talk = UPDATE_NPC_TALK4;

		break;

		case UPDATE_NPC_TALK4:

			if (answer == "1"){ 
				printf("\n\n	AAAU AUAU UAU AAU AU "); }
			else if (answer == "2"){
				printf("\n\n	FUFUFUFUU  ");
				Update_npc_talk = UPDATE_NPC_TALK1;	}
			else if (answer == "3"){ 
				printf("\n\n	III III III III UUU U U (seems that it doesnt like that you said please shouting "); }
			else if (answer == "4"){
				printf("\n\n	UAA UAUAU UUA AUUA "); }
			else{ 
				printf("\n\n	This is not a valid answer "); }

			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 1. Is silly trying to talk to a monkey ");
			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 2. WHAT THE FU...");
			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 3. Give me the target...please..");
			printf("\n\n-------------------------------------------------------------------------------");
			printf("\n\n 4. AA UU UA UUII III UUU ");
			printf("\n\n-------------------------------------------------------------------------------");
			
			Update_npc_talk = UPDATE_NPC_TALK5;
		
		break;

		case UPDATE_NPC_TALK5:

			if (answer == "1"){
				printf("\n\n	AAAU AUAU UAU AAU AU "); }
			else if (answer == "2"){
				printf("\n\n	FUFUFUFUU  ");
				Update_npc_talk = UPDATE_NPC_TALK1; }
			else if (answer == "3"){ 
				printf("\n\n	UI U AU AA...  UI U AU AA  (Seems that he want a Stick..)"); }
			else if (answer == "4"){
				printf("\n\n	UI U AU AA...  UI U AU AA  (Seems that he want a Stick..)"); }
			else{ 
				printf("\n\n	This is not a valid answer "); }
			
			Update_npc_talk = UPDATE_NPC_TALK6;

		break;
		
		case UPDATE_NPC_TALK6:

			printf("\n\n Seems that is is dancing... a famous spanish song.. i think that Melody sangs it! :O ");
			printf("\n\nU UA AAA  U U U UU!");
		break;

	}//switch
}


update_status Npc::talkandroid(mString& token1){


	update_status ret = UPDATE_TALKING;

	if (token1.buffer == "\0"){
		printf("\t%%&/%$%&($·%$\n");
		return UPDATE_TALKING;
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
		printf("\t@#@|^*_#@¨^\n\n");
		return UPDATE_TALKING;
	}


	if (size == 1 && command1 == nullptr){
		if (*command0 == "REPRODUCE" || *command0 == "reproduce" || *command0 == "Reproduce"){
			printf("\n ---Help me Obi-Wan Kenobi, you' re my only hope!--- \n");
		}
		if (*command0 == "DANCE" || *command0 == "dance" || *command0 == "Dance" || *command0 == "Dance"){
			DanceAndroid();
		}
		else if (*command0 == "hi" || *command0 == "hey" || *command0 == "HEY" || *command0 == "HI" || *command0 == "HELLO" || *command0 == "hello" || *command0 == "Hello"){
			printf("\t @__@\n\n");
		}
		
		else {
			printf("\n\t &%$&%&/$%54r98 \n");
		}

	}//if 1---------------------------------------------------

	//---------------------------------------------------

	//if 2--------------------------------------------------
	else if (size == 2 && command2 == nullptr){

		if (*command0 == "STOP" || *command0 == "stop" || *command0 == "Stop"){

			if (*command1 == "TALKING" || *command1 == "TALK" || *command1 == "Talk" || *command1 == "Talking" || *command1 == "talking" || *command1 == "talk"){
				return UPDATE_NO_TALKING;
			}

		}//if 2--------------------------------------------------

		// --------------------------------------------------

		//if 3-------------------------

		else if (size == 3){


		}
		//if 3--------------------------------------------------

		// --------------------------------------------------

		//if 4--------------------------------------------------
		else if (size == 4){

		}


		return UPDATE_TALKING;
	}
	return UPDATE_TALKING;
}


void Npc::Change(world* World, const mString item, const mString monkey){

	if (position == World->Entities[8]){

		if (container.size() < NPC_INVENTORY_SPACE){
	
			for (unsigned int i = 0; World->player->PlayerItems.size() > i; i++){

					if (item == World->player->PlayerItems[i]->SayMyName()){

						printf("You gave a %s to the %s\n", World->Entities[ROOMSNUMBER + EXITSNUMBER + 1]->SayMyName(), monkey);

						printf("The monkey gave you a %s \n", World->Entities[ROOMSNUMBER + EXITSNUMBER + 2]->SayMyName());

						World->player->PlayerItems.push_back(World->Entities[ROOMSNUMBER + EXITSNUMBER + 2]->container[i]);
						World->Monkey->container.Remove(i);//delete

						World->Monkey->container.push_back(World->Entities[ROOMSNUMBER + EXITSNUMBER + 1]->container[i]);
						World->player->PlayerItems.Remove(i);//delete
						
						break;

					}
				}
		
		}//npc inventory space

		else{
			printf("The npc has the inventory full\n");
		}
	}

}//get ------------------------------------------------------