
//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//-----------headers------------------
#include "strings.h"
#include "world.h"
#include "player.h"
#include "rooms.h"
#include "vector.h"
#include "global.h"
#include "exits.h"
//------------------------

Player::Player(const char* name, const char* description, room* position) :
entity(name, description, PLAYER), position(position){
}

Player::~Player(){}


void Player::go(world*World, const dir tgo){



	for (uint i = 0; i < (_EXITSNUMBER_); i++){//size

		if (World->Exit[i]->src != position){ continue; }

		else if (World->Exit[i]->direction != tgo){ continue; }

		if (World->Exit[i]->open == true){

			position = World->Exit[i]->dest;

			position->look();

			noStop = false;

			break;

		}//if open

		else{

			printf("hum... this door is close maybe you can open it with a key.. \n");

			noStop = false;

			break;

		}//else close

	}//for looking every valor


}//void GOOO ------------------------------------------------------------

void Player::look()const{

	printf("\t %s \n\n %s", position->SayMyName(), position->SayTheDescription());

	if (position->Entity.size() >= 1)
	{
		printf("You can see a %s", position->Entity[0]->SayMyName());
		for (uint i = 1; position->Entity.size() > i; i++)
		{
			position->look();
		}
		printf(".\n");
	}

}//look room ------------------------------------------------------------
void Player::look(world* World, dir look)const{


	for (int i = 0; i < _EXITSNUMBER_; i++){


		if (World->Exit[i]->src != position){ continue; }//position player

		else if (World->Exit[i]->direction == look){

			printf("%s\n", World->Exit[i]->name);
			printf("%s\n", World->Exit[i]->description);

		}//if direction to look


	}//for looking every valor


}//look door------------------------------------------------------------

void Player::close(world* World, dir close){

	for (int i = 0; i < _EXITSNUMBER_; i++){

		if (World->Exit[i]->src != position){ continue; }

		else if (World->Exit[i]->direction != close){ continue; }

		else if (World->Exit[i]->open == true){

			World->Exit[i]->open = false;

			closedoorFX();//FX closing door

			printf("\n\n\t Maybe you close the door too hard...\n\n", World->Exit[i]->dest);

		}// close the door

		else{

			printf("You can't do that.\n");

		}//else you cant open the door

	}//for looking every valor

}// close doors---------------------------------------------------------

void Player::open(world* World, dir open){

	for (int i = 0; i < _EXITSNUMBER_; i++){

		if (World->Exit[i]->src != position){ continue; }//position of the player

		else if (World->Exit[i]->direction == open){ continue; }//direction to open

		else if (World->Exit[i]->open == false){

			World->Exit[i]->open = true;

			opendoorFX();//FX closing door

			printf("\t iii.... the door was open..\n", World->Exit[i]->dest);

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
	if (PlayerItems.size() < 1){
		for (uint i = 0; position->RoomItems.size() > i; i++){

			if (item == position->RoomItems[i]->SayMyName()){

				PlayerItems.push_back(position->RoomItems[i]);

				printf("You picked up a %s", position->RoomItems[i]->SayMyName());
				position->RoomItems.Remove(i);//delete the object in the position

				break;
			}
		}
		printf("There's nothing that you can pick");
	}
	else{
		printf("You have to many things on your bag");
	}
}//pickkkk -----------------------------------


void Player::drop(const mString item)
{
	if (PlayerItems.size() > 0){
		for (uint i = 0; PlayerItems.size() > i; i++)
		{
			if (item == PlayerItems[i]->SayMyName()){

				position->RoomItems.push_back(PlayerItems[i]);

				printf("You droped the %s", PlayerItems[i]->SayMyName());

				PlayerItems.Remove(i);//delete the object in the position

				break;
			}
		}
		printf("You don't have this item try with otherone");
	}
	else{
		printf("You Drop all of your objects");
	}
}//DROOOPP THE BASSS .----------------------


void Player::get(world* World, const mString item, const mString box){

	if (position == World->Room[0]){

		if (PlayerItems.size() < _INVENTORY_SPACE_){

			for (unsigned int i = 0; World->item[8]->BOXItems.size() > i; i++){

				if (item == World->item[8]->BOXItems[i]->SayMyName() && World->item[8]->BOXItems[i]->type == ITEM){

					printf("You got a %s from the %s", World->item[8]->BOXItems[i]->SayMyName(), box);

					PlayerItems.push_back(World->item[8]->BOXItems[i]);//transfer

					World->item[8]->BOXItems.Remove(i);//delete

					break;

				}
			}
			printf("Maybe you are wrong, there is nothing here");
		}

		else{
			printf("You have the bagg full");
		}
	}

}//get ------------------------------------------------------

void Player::put(world* World, const mString item, const mString box)
{

	if (PlayerItems.size() > 0){

		for (unsigned int i = 0; PlayerItems.size() > i; i++)
		{
			if (item == PlayerItems[i]->SayMyName()){

				World->item[8]->BOXItems.push_back(PlayerItems[i]);

				printf("You put the %s to the %s", PlayerItems[i]->SayMyName(), box);

				PlayerItems.Remove(i);


				break;
			}
		}
		printf("you havent this item ");

	}

	else{
		printf("You can't put nothing there because YOU HAVENT ANY ITEM !");
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

		for (uint i = 0; i < _ITEMNUMBER_; i++){

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

		for (uint i = 0; i < _ITEMNUMBER_; i++){

			if (item2 == PlayerItems[i]->SayMyName() && ((item2 == "Stick") || (item2 == "Blazzer") || (item2 == "Stone") || (item2 == "Laser_Sword"))){


				attack -= PlayerItems[i]->attack;
				attackspeed -= PlayerItems[i]->attackspeed;

				PlayerEquip.push_back(PlayerItems[i]);
				printf("You unequip the %s.", PlayerItems[i]->SayMyName());
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