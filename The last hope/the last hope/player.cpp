//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-----------headers------------------

#include "world.h"
#include "player.h"
//------------------------

CPlayer::CPlayer(){

	position = new room;

}
CPlayer::~CPlayer(){

	delete[] position;

}



void CPlayer::go(world*World, dir tgo){

	if (tf == true){
		int i = 0;
		for (i = 0; i < (_EXITSNUMBER_); i++){

			if (World->exit[i].src == position){

				if (World->exit[i].direction == tgo){

					if (World->exit[i].open == true){

						position = World->exit[i].dest;

						printf("\t %s \n\n %s.\n", World->exit[i].dest->name, World->exit[i].dest->description);

						tf = false;

						break;

					}//if open

					else{

						printf("hum... this door is close maybe you can open it with a key.. \n");
						break;

					}//else close

				}//if direccioner

			}//if look the position

		}//for looking every valor

	}// const

}//void GOOO ------------------------------------------------------------

void CPlayer::look()const{

	printf("\n %s", position->description);

}//look room ------------------------------------------------------------
void CPlayer::lookdoor(world* World, dir look)const{


	for (int i = 0; i < _EXITSNUMBER_; i++){

		if (World->exit[i].src == position){

			if (World->exit[i].direction == look){

				printf("%s\n", World->exit[i].description);

			}//if direction to look

		}//position player

	}//for looking every valor


}//look door------------------------------------------------------------

void CPlayer::close(world* World, dir close)const{

	for (int i = 0; i < _EXITSNUMBER_; i++){

		if (World->exit[i].src == position){

			if (World->exit[i].direction == close){

				if (World->exit[i].open == true){

					World->exit[i].open = false;

					closedoorFX();//FX closing door

					printf("\n\n\t Maybe you close the door too hard...\n\n", World->exit[i].dest);

				}// close the door

				else{

					printf("You can't do that.\n");

				}//else you cant open the door

			}//direction to close

		}//position of the player

	}//for looking every valor

}// close doors---------------------------------------------------------

void CPlayer::open(world* World, dir open)const{

	for (int i = 0; i < _EXITSNUMBER_; i++){

		if (World->exit[i].src == position){

			if (World->exit[i].direction == open){

				if (World->exit[i].open == false){

					World->exit[i].open = true;

					opendoorFX();//FX closing door

					printf("\t iii.... the door was open..\n", World->exit[i].dest);

				}// close the door

				else{

					printf("You can't do that.\n");

				}//else you cant open the door

			}//direction to open

		}//position of the player

	}//for looking every valor

}// open doors---------------------------------------------------------



