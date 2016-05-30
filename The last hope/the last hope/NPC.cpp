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

update_npc_movement Npc::Move(update_npc_movement& update_npc, world*World){
	
/*	if (this->IsAlive() == false){
		return UPDATE_NPC_DEAD;
	}

*/
	int num = 1 + rand() % (3- 1);

	switch (update_npc)
	{
		case UPDATE_NPC_MOVE1://East

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
			
			printf("\tANDROID IS AT NORTH\n");

			position = World->Planet1_North;

			return UPDATE_NPC_MOVE1;
			break;

		
	case UPDATE_NPC_PET:

		position = World->player->position;

		return UPDATE_NPC_PET;
		break;
	

	default:
		break;
	}



}