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

			if (position == World->player->position){ printf("\t An Android has just appeared :O!\n"); return UPDATE_NPC_PET; }

			//printf("\t ANDROID IS AT EAST\n");

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

			//printf("\tANDROID IS AT SOUTH\n");

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

			//printf("\tANDROID IS AT WEST\n");

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

			//printf("\tANDROID IS AT NORTH\n");

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
		printf("\n\n 3. Give me the Card...");
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
			printf("\n\n 3. Give me the Card...");
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
			printf("\n\n 3. Give me the Card...PLEASE");
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
			printf("\n\n 3. Give me the Card...please..");
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


	if (size == 1){
		if (commandments[0]->S_str() == "REPRODUCE" || commandments[0]->S_str() == "reproduce" || commandments[0]->S_str() == "Reproduce"){
			printf("\n ---Help me Obi-Wan Kenobi, you' re my only hope!--- \n");
		}
		if (commandments[0]->S_str() == "DANCE" || commandments[0]->S_str() == "dance" || commandments[0]->S_str() == "Dance" || commandments[0]->S_str() == "Dance"){
			DanceAndroid();
		}
		else if (commandments[0]->S_str() == "hi" || commandments[0]->S_str() == "hey" || commandments[0]->S_str() == "HEY" || commandments[0]->S_str() == "HI" || commandments[0]->S_str() == "HELLO" || commandments[0]->S_str() == "hello" || commandments[0]->S_str() == "Hello"){
			printf("\t @__@\n\n");
		}

		else {
			printf("\n\t &%$&%&/$%54r98 \n");
		}

	}//if 1---------------------------------------------------

	//---------------------------------------------------

	//if 2--------------------------------------------------
	else if (size == 2){

		if (commandments[0]->S_str() == "STOP" || commandments[0]->S_str() == "stop" || commandments[0]->S_str() == "Stop"){

			if (commandments[1]->S_str() == "TALKING" || commandments[1]->S_str() == "TALK" || commandments[1]->S_str() == "Talk" || commandments[1]->S_str() == "Talking" || commandments[1]->S_str() == "talking" || commandments[1]->S_str() == "talk"){
				return UPDATE_NO_TALKING;
			}

		}//if 2--------------------------------------------------
		for (int j = 0; commandments.size() > j; j++){
			delete commandments[j];
		}

		return UPDATE_TALKING;
	}
	return UPDATE_TALKING;
}


void Npc::Change(world* World, const mString item, const mString NPC){

	bool true_false = false;

	if (position == World->Entities[8]){

		if (container.size() < NPC_INVENTORY_SPACE){

			LinkedList<entity*>::Node* Object_equiped = nullptr;
			LinkedList<entity*>::Node* Object_npc = nullptr;
			for (; Object_npc != nullptr; Object_npc = Object_npc->nxt){

				if (NPC.buffer == "monkey" || NPC.buffer == "Monkey" || NPC.buffer == "MONKEY"){

					if (((Npc*)Object_npc->data)->SayMyName() == "Stick"){

						LinkedList<entity*>::Node* Object_equiped = World->player->PlayerItems.first;

						for (; Object_equiped != nullptr; Object_equiped = Object_equiped->nxt)
						{
							if (item == Object_equiped->data->SayMyName()){

								World->player->PlayerItems.push_back(Object_equiped->data);
								World->Monkey->container.erase(Object_equiped);//delete
								true_false = true;
							}

						}

						if (true_false = true){

							printf("You gave a Stick to the Monkey\n");

							LinkedList<entity*>::Node* Object_monk = World->Monkey->container.first;

							for (; Object_monk != nullptr; Object_monk = Object_monk->nxt)
							{
								if ("Card" == Object_monk->data->SayMyName()){

									World->player->PlayerItems.push_back(Object_monk->data);
									World->Monkey->container.erase(Object_monk);//delete
								}
							}
							printf("The monkey gave you a Card \n");

						}
						else{
							printf("yo cant give it\n");

						}

					}

					true_false = false;
					if (NPC.buffer == "STORMTROOPER" || NPC.buffer == "Stormtrooper" || NPC.buffer == "stormtrooper"){

						if (((Npc*)Object_npc->data)->SayMyName() == "Blazzer"){

							LinkedList<entity*>::Node* Object_equiped = World->player->PlayerItems.first;

							for (; Object_equiped != nullptr; Object_equiped = Object_equiped->nxt)
							{
								if (item == Object_equiped->data->SayMyName()){

									World->player->PlayerItems.push_back(Object_equiped->data);
									World->Monkey->container.erase(Object_equiped);//delete
									true_false = true;
								}

							}

							if (true_false = true){

								printf("Thank U 4 all my friend!!  \n");
								printf("You gave a Blazzer to the Storm trooper\n");

								LinkedList<entity*>::Node* Object_monk = World->Monkey->container.first;

								for (; Object_monk != nullptr; Object_monk = Object_monk->nxt)
								{
									if ("Sensor" == Object_monk->data->SayMyName()){

										World->player->PlayerItems.push_back(Object_monk->data);
										World->Monkey->container.erase(Object_monk);//delete
									}
								}
								printf("The Stormtrooper gave you a sensor \n");

							}
							else{
								printf("yuo cant give it\n");

							}

						}
					}

				}//npc inventory space

				else{
					printf("The npc has the inventory full\n");
				}
			}

		}
	}//get ------------------------------------------------------
}