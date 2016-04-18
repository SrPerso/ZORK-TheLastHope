//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-----------headers------------------
#include "strings.h"
#include "world.h"
#include "player.h"
#include "rooms.h"
#include "vector.h"
#include "global.h"
//------------------------

Player::Player(const char* name, const char* description, room* position) :
entity(name, description,PLAYER),position(position){
	type = PLAYER;
}

Player::~Player(){}


void Player::go(world*World,const dir tgo){

	if (tf == true){
		int i = 0;
		for (i = 0; i < (_EXITSNUMBER_); i++){

			if (World->Exit[i]->src == position){

				if (World->Exit[i]->direction == tgo){

					if (World->Exit[i]->open == true){

						position = World->Exit[i]->dest;

						printf("\t %s \n\n%s\n", position->SayMyName(), position->SayTheDescription());

						tf = false;

						break;

					}//if open

					else{

						printf("hum... this door is close maybe you can open it with a key.. \n");
						
						tf = false;
						break;

					}//else close

				}//if direccioner

			}//if look the position

		}//for looking every valor

	}// const

}//void GOOO ------------------------------------------------------------

void Player::look()const{

	printf("\t %s \n\n %s", position->SayMyName(), position->SayTheDescription());

	if (position->entity_.size() >= 1)
	{
		printf("You can see a %s", position->entity_[0]->SayMyName());
		for (uint i = 1; position->entity_.size() > i; i++)
		{
			printf(" and a %s,", position->entity_[i]->SayMyName());
		}
		printf(".\n");
	}

}//look room ------------------------------------------------------------
void Player::lookdoor(world* World,const dir look)const{


	for (int i = 0; i < _EXITSNUMBER_; i++){

		if (World->Exit[i]->src == position){

			if (World->Exit[i]->direction == look){

				printf("%s\n", World->Exit[i]->description);

			}//if direction to look

		}//position player

	}//for looking every valor


}//look door------------------------------------------------------------

void Player::close(world* World,const dir close){

	for (int i = 0; i < _EXITSNUMBER_; i++){

		if (World->Exit[i]->src == position){

			if (World->Exit[i]->direction == close){

				if (World->Exit[i]->open == true){

					World->Exit[i]->open = false;

					closedoorFX();//FX closing door

					printf("\n\n\t Maybe you close the door too hard...\n\n", World->Exit[i]->dest);

				}// close the door

				else{

					printf("You can't do that.\n");

				}//else you cant open the door

			}//direction to close

		}//position of the player

	}//for looking every valor

}// close doors---------------------------------------------------------

void Player::open(world* World,const dir open){

	for (int i = 0; i < _EXITSNUMBER_; i++){

		if (World->Exit[i]->src == position){

			if (World->Exit[i]->direction == open){

				if (World->Exit[i]->open == false){

					World->Exit[i]->open = true;

					opendoorFX();//FX closing door

					printf("\t iii.... the door was open..\n", World->Exit[i]->dest);

				}// close the door

				else{

					printf("You can't do that.\n");

				}//else you cant open the door

			}//direction to open

		}//position of the player

	}//for looking every valor

}// open doors---------------------------------------------------------


void Player::Inventory()const
{
	if (entity_.size() == 0){
		printf("You haven't any items ry now\n");
	}
	for (unsigned int i = 0; entity_.size() > i; i++)
	{
		printf("%s\n", this->entity_[i]->SayMyName());
	}
}//inventoryy ----------------------------------------------------

void Player::pick(mString item)
{
	if (entity_.size() < 1){
		for (uint i = 0; position->entity_.size() > i; i++)
		{
			if (item == position->entity_[i]->SayMyName()){
				entity_.push_back(position->entity_[i]);
				printf("You picked up a %s", position->entity_[i]->SayMyName());
				position->entity_.Remove(i);
				return;
			}
		}
		printf("There's nothing that you can pick");
	}
	else{
		printf("You have to many things on your bag");
	}
}//pickkkk -----------------------------------


void Player::drop(mString item)
{
	if (entity_.size() > 0){
		for (unsigned int i = 0; entity_.size() > i; i++)
		{
			if (item == entity_[i]->SayMyName()){
				position->entity_.push_back(entity_[i]);
				printf("You droped the %s", entity_[i]->SayMyName());
				entity_.Remove(i);
				return;
			}
		}
		printf("You don't have this item try with otherone");
	}
	else{
		printf("You Drop all of your objects");
	}
}//DROOOPP THE BASSS .----------------------