
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
//------------------------

Player::Player(const char* name, const char* description, room* position) :
Creature(name, description,nullptr, PLAYER), position(position){
}

Player::~Player(){}


void Player::go(world*World, const dir tgo){



	for (uint i = 0; i < (EXITSNUMBER); i++){//size

		if (((exits*)World->Entities[ROOMSNUMBER + i])->src != position){ continue; }

		else if (((exits*)World->Entities[ROOMSNUMBER + i])->direction != tgo){ continue; }

		if (((exits*)World->Entities[ROOMSNUMBER + i])->open == true){

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
		
		for (uint i = 1; position->container.size() >= i; i++)
		{
			printf("\n \t /////You can see a %s", position->container[i-1]->SayMyName());
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
	for (unsigned int i = 0; PlayerItems.size() > i; i++){

		printf("%s\n", this->PlayerItems[i]->SayMyName());
	}
}//inventoryy ----------------------------------------------------

void Player::pick(const mString item)
{
	if (item == "box"){
		printf("You can't do that!! :O \n");
	}
	if (PlayerItems.size() < 1){
		for (uint i = 0; position->container.size() > i; i++){

			if (item == position->container[i]->SayMyName()){

				PlayerItems.push_back(position->container[i]);

				printf("You picked up the %s\n", position->container[i]->SayMyName());
				position->container.Remove(i);//delete the object in the position

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
		for (uint i = 0; PlayerItems.size() > i; i++)
		{
			if (item == PlayerItems[i]->SayMyName()){

				position->container.push_back(PlayerItems[i]);

				printf("You droped the %s\n", PlayerItems[i]->SayMyName());

				PlayerItems.Remove(i);//delete the object in the position

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

			for (unsigned int i = 0; World->Entities[ROOMSNUMBER + 8]->container.size() > i; i++){

				if (item == World->Entities[ROOMSNUMBER + EXITSNUMBER + 8]->container[i]->SayMyName() && World->Entities[ROOMSNUMBER + EXITSNUMBER + 8]->container[i]->type == ITEM){

					printf("You got a %s from the %s\n", World->Entities[ROOMSNUMBER + EXITSNUMBER + 8]->container[i]->SayMyName(), box);

					PlayerItems.push_back(World->Entities[ROOMSNUMBER + EXITSNUMBER + 8]->container[i]);//transfer

					World->Entities[ROOMSNUMBER + 8]->container.Remove(i);//delete

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

	if (PlayerItems.size() > 0){

		for (unsigned int i = 0; PlayerItems.size() > i; i++)
		{
			if (item == PlayerItems[i]->SayMyName()){

				World->Entities[ROOMSNUMBER + EXITSNUMBER + 8]->container.push_back(PlayerItems[i]);

				printf("You put the %s to the %s\n", PlayerItems[i]->SayMyName(), box);

				PlayerItems.Remove(i);


				break;
			}
		}
		//printf("you havent this item\n ");

	}

	else{
		printf("You can't put nothing there because YOU HAVENT ANY ITEM !\n");
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

	if (PlayerItems.size() >= 0){

		for (uint i = 0; i < ITEMNUMBER; i++){

			if (item2 == PlayerItems[i]->SayMyName() && ((item2 == "Stick") || (item2 == "Blazzer") || (item2 == "Stone") || (item2 == "Laser_Sword"))){

				PlayerEquip.push_back(PlayerItems[i]);

				attack += PlayerItems[i]->attack;
				attackspeed += PlayerItems[i]->attackspeed;

				printf("You equipped %s \n", PlayerItems[i]->name.C_str());
				PlayerItems.Remove(i);
				return;

			}

		}//for
	}//if

	printf("This object that you want to equip isnt in your inventory\n");
}//EQUIPP

void Player::unequip(world* World, const mString item2){

	if (PlayerItems.size() >= 0){

		for (uint i = 0; i < ITEMNUMBER; i++){

			if (item2 == PlayerItems[i]->SayMyName() && ((item2 == "Stick") || (item2 == "Blazzer") || (item2 == "Stone") || (item2 == "Laser_Sword"))){


				attack -= PlayerItems[i]->attack;
				attackspeed -= PlayerItems[i]->attackspeed;

				PlayerEquip.push_back(PlayerItems[i]);
				printf("You unequip the %s.\n", PlayerItems[i]->SayMyName());
				PlayerEquip.Remove(i);
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