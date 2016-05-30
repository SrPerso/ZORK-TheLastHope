#include "NPC.h"
#include "rooms.h"
#include "world.h"
#include "Entity.h"
#include "global.h"
#include <stdio.h>
#include "player.h"

#include <Windows.h>

Npc::Npc(const char* name, const char* description, room* position) :
Creature(name, description,nullptr, CREATURE), position(position){

}
Npc::~Npc(){

}
bool Npc::IsPlayerHere(){
	return hp > 0;
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



update_status Npc::talkandroid(mString& token1){


	update_status ret = UPDATE_TALKING;

	if (token1.buffer == "\0"){
		printf("%%&/%$%&($·%$\n");
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
		printf("@#@|^*_#@¨^\n\n");
		return UPDATE_TALKING;
	}


	if (size == 1 && command1 == nullptr){
		if (*command0 == "DANCE" || *command0 == "dance" || *command0 == "Dance" || *command0 == "Dance"){
			DanceAndroid();
		}
		else if (*command0 == "hi" || *command0 == "hey" || *command0 == "HEY" || *command0 == "HI" || *command0 == "HELLO" || *command0 == "hello" || *command0 == "Hello"){
			printf("@__@\n\n");
		}

		else {
			printf("\n &%$&%&/$%54r98 \n");
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