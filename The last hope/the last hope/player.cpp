
//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//-----------headers------------------
#include "strings.h"
#include "world.h"
#include "player.h"
#include "rooms.h"
#include "global.h"
#include "exits.h"
#include "LinkedList.h"
//------------------------

Player::Player(const char* name, const char* description, room* position) :
Creature(name, description,nullptr, PLAYER), position(position){
}

Player::~Player(){}


void Player::go(world*World, const dir tgo){



	for (uint i = 0; i < (EXITSNUMBER); i++){//size

		if (((exits*)World->Entities[ROOMSNUMBER + i])->src != position){ continue; }

		else if (((exits*)World->Entities[ROOMSNUMBER + i])->direction != tgo){ continue; }

		else if (((exits*)World->Entities[ROOMSNUMBER + i])->open != false){

			position = ((exits*)World->Entities[ROOMSNUMBER + i])->dest;

			position->look();

			noStop = false;

			break;

		}//if open

		else{

			printf("hum... this door is close maybe you can open it \n");

			noStop = false;

			break;

		}//else close

	}//for looking every valor


}//void GOOO ------------------------------------------------------------

void Player::look()const{

	printf("\t %s \n\n %s", position->SayMyName(), position->SayTheDescription());

	if (position->container.size() >= 1)
	{
		LinkedList<entity*>::Node* Object = position->container.first;


		for (Object = position->container.first; Object != nullptr; Object = Object->nxt)
		{
			printf("\n \t /////You can see a %s", Object->data->SayMyName());
		}

		printf(".\n");
	}

}//look room ------------------------------------------------------------
void Player::look(world* World, dir look)const{
	int tmp = 0;

	for (int i = 0; i < EXITSNUMBER; i++){


		if (((exits*)World->Entities[ROOMSNUMBER + i])->src != position){ continue; }//position player

		else if (((exits*)World->Entities[ROOMSNUMBER + i])->direction == look){

			//World->Entities[ROOMSNUMBER + i]->look();

			//printf("%s\n", World->Entities[ROOMSNUMBER + i]->name);
			printf("%s\n", World->Entities[ROOMSNUMBER + i]->description);

			tmp = 1;
		}//if direction to look

		
	}//for looking every valor
	if (tmp == 0){
		printf("\t\t\tThere's nothing there\n\n");
	}
}//look door------------------------------------------------------------

void Player::close(world* World, dir close){

	for (int i = 0; i < EXITSNUMBER; i++){

		if (((exits*)World->Entities[ROOMSNUMBER + i])->src != position){ continue; }

		else if (((exits*)World->Entities[ROOMSNUMBER + i])->direction != close){ continue; }

		else if (((exits*)World->Entities[ROOMSNUMBER + i])->open == true){

			((exits*)World->Entities[ROOMSNUMBER + i])->open = false;

			closedoorFX();//FX closing door

			printf("\n\n\t Maybe you close the door too hard...\n\n",((exits*)World->Entities[ROOMSNUMBER + i])->dest);
			 
		}// close the door

		else{

			printf("You can't do that.\n");

		}//else you cant open the door

	}//for looking every valor

}// close doors---------------------------------------------------------

void Player::open(world* World, dir open){

	for (int i = 0; i < EXITSNUMBER; i++){

		if (((exits*)World->Entities[ROOMSNUMBER + i])->src != position){ continue; }//position of the player

		else if (((exits*)World->Entities[ROOMSNUMBER + i])->direction == open){ continue; }//direction to open
	
		else if (((exits*)World->Entities[ROOMSNUMBER + i])->locked == true){ break; }

		else if (((exits*)World->Entities[ROOMSNUMBER + i])->open == false){

			((exits*)World->Entities[ROOMSNUMBER + i])->open = true;

			opendoorFX();//FX closing door

			printf("\t iii.... the door was open..\n", ((exits*)World->Entities[ROOMSNUMBER + i])->dest);

		}// close the door

		else{

			printf("You can't do that.\n");

		}//else you cant open the door





	}//for looking every valor

}// open doors---------------------------------------------------------


void Player::Inventory()const
{
	if (PlayerItems.size() == 0){
		printf("You haven't any items ry now\n");
	}

	LinkedList<entity*>::Node* Object = position->container.first;
	for (Object = container.first; Object != nullptr; Object = Object->nxt){
		printf("%s\n", Object->data->SayMyName());

	}

}//inventoryy ----------------------------------------------------

void Player::pick(const mString item)
{
	if (item == "box"){
		printf("You can't do that!! :O \n");
	}

	if (PlayerItems.size() < INVENTORY_SPACE){

		LinkedList<entity*>::Node* Object = position->container.first;

		for (uint i = 0; Object != nullptr; Object=Object->nxt){

			if (item == Object->data->SayMyName()){

				PlayerItems.push_back(Object->data);

				printf("You picked up the %s\n", Object->data->SayMyName());

				position->container.erase(Object);//delete the object in the position

				break;
			}
		}
		//printf("There's nothing that you can pick");
	}
	else{
		printf("You have to many things on your bag\n");
	}
}//pickkkk -----------------------------------


void Player::drop(const mString item)
{
	if (PlayerItems.size() > 0){

		LinkedList<entity*>::Node* Object = PlayerItems.first;

		for (; Object != nullptr; Object = Object->nxt)
		{
			if (item == Object->data->SayMyName()){

				position->container.push_back(Object->data);

				printf("You droped the %s\n", Object->data->SayMyName());

				PlayerItems.erase(Object);//delete the object in the position

				break;
			}
		}
		//printf("You don't have this item try with otherone");
	}
	else{
		printf("You Drop all of your objects\n");
	}
}//DROOOPP THE BASSS .----------------------


void Player::get(world* World, const mString item, const mString box){

	if (position == World->Entities[0]){

		if (PlayerItems.size() < INVENTORY_SPACE){

			LinkedList<entity*>::Node* Object_inventory = nullptr;
			LinkedList<entity*>::Node* Object_room = position->container.first;
			LinkedList<entity*>::Node* Object_container = nullptr;

			for (Object_inventory = PlayerItems.first; Object_inventory != nullptr; Object_inventory = Object_inventory->nxt){
				
				if (item == "lazzer" || item == "Lazzer"){

					printf("You got a Lazzer from the %s\n", box);

					PlayerItems.push_back(Object_inventory->data);//transfer

					container.erase(Object_inventory);//delete

					break;

				}
			}
			printf("Maybe you are wrong, there is nothing here\n");
		}

		else{
			printf("You have the bagg full\n");
		}
	}

}//get ------------------------------------------------------

void Player::put(world* World, const mString item, const mString box)
{


	if (position == World->Entities[0]){

			LinkedList<entity*>::Node* Object_inventory = nullptr;
			LinkedList<entity*>::Node* Object_room = position->container.first;


			for (Object_inventory = PlayerItems.first; Object_inventory != nullptr; Object_inventory = Object_inventory->nxt){

				if (item == "lazzer" || item == "Lazzer"){

					printf("You put the %s to the %s\n\n", box);

					container.push_back(Object_inventory->data);//transfer
					
					PlayerItems.erase(Object_inventory);//delete

					break;

				}
			}
			printf("You can put this there.. Only there is space for a Lazzer Sword\n");

	}

	else{
		printf("You arent in the place where you must be!! :O\n");
	}
}//puttttttttt


void Player::stats()
{
	system("cls");
	printf("________________________________________________________________________________\n");
	printf("\t ||HP = %i||\t\t", hp);
	printf("||ATTACK = %i||\t\t", attack);
	printf("||ATTACK SPEED = %i||", attackspeed);
	printf("\n________________________________________________________________________________\n");

}



void Player::equip(world* World, const mString item2){

	LinkedList<entity*>::Node* Object_inventory = nullptr;

	if (PlayerItems.size() >= 0){

		for (; Object_inventory != nullptr; Object_inventory = Object_inventory->nxt){

			if (item2 == Object_inventory->data->SayMyName() && ((item2 == "Stick") || (item2 == "Blazzer") || (item2 == "Stone") || (item2 == "Laser_Sword"))){

				PlayerEquip.push_back(Object_inventory->data);

				//attack += PlayerItems[i]->attack;
				//attackspeed += PlayerItems[i]->attackspeed;

				printf("You equipped %s \n", Object_inventory->data->SayMyName());

				PlayerItems.erase(Object_inventory);
				return;

			}

		}//for
	}//if

	printf("This object that you want to equip isnt in your inventory\n");
}//EQUIPP

void Player::unequip(world* World, const mString item2){

	if (PlayerItems.size() >= 0){
	
		LinkedList<entity*>::Node* Object_equiped = nullptr;

		for (; Object_equiped != nullptr; Object_equiped = Object_equiped->nxt){



			if (item2 == Object_equiped->data->SayMyName() && ((item2 == "Stick") || (item2 == "Blazzer") || (item2 == "Stone") || (item2 == "Laser_Sword"))){


				//attack -= PlayerItems->attack;
				//attackspeed -= PlayerItems[i]->attackspeed;

				PlayerEquip.push_back(Object_equiped->data);
				printf("You unequip the %s.\n", Object_equiped->data->SayMyName());		
				PlayerEquip.erase(Object_equiped);

				return;
			}

			else{

				printf("You haven't this item equipped\n");
				return;

			}//else



		}//for
	}//if
	else{

		printf("you havent any item! \n");
	}
}//UNEQUIPP