#include <iostream>
#include "principal.h"
#include "worldc.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
	intro();

	world worl;
	bicho player;
	worl.creatingworld();
	room rooms;

	player.position = worl.rooms[1];//first point


	int r, i, f;
	char direc = 'a';



do{
	printf("Where do you want to go (n/s/e/w/q)?\n");
	fflush(stdin);
	scanf_s("%c", &direc);//direcction

	switch (direc){
	case 'n'://North--------------------------------

		for (i = 0; i < 15; i++){
			if (worl.player.position = worl.exit[i].src){
				worl.player.position = worl.exit[i].dest1;
			}//if
			continue;
		}//for

		break;//north

	case 'e'://East--------------------------------

		for (i = 0; i < 15; i++){
			if (worl.player.position = worl.exit[i].src){
				worl.player.position = worl.exit[i].dest4;
			}//if
			continue;
		}//for
		break;//east

	case 's'://South--------------------------------

		for (i = 0; i < 15; i++){
			if (worl.player.position = worl.exit[i].src){
				worl.player.position = worl.exit[i].dest3;
			}//if
			continue;
		}//for


		break;//south

	case 'w'://West--------------------------------
		for (i = 0; i < 15; i++){
			if (worl.player.position = worl.exit[i].src){
				worl.player.position = worl.exit[i].dest2;
			}//if
			continue;
		}//for
		break;//west

	case 't'://top--------------------------------
		for (i = 0; i < 15; i++){
			if (worl.player.position = worl.exit[i].src){
				worl.player.position = worl.exit[i].dest6;
			}//if
			continue;
		}//for
		break;//top
	case 'b'://bottom--------------------------------
		for (i = 0; i < 15; i++){
			if (worl.player.position = worl.exit[i].src){
				worl.player.position = worl.exit[i].dest5;
			}//if
			continue;
		}//for
		break;//bottom

	case 'q'://quit
		continue;
		break;//quit

	case 'h'://help
		printf("\t\t_____COMAND LIST____\n");
		printf("\t\t|                   |\n");
		printf("\t\t|  Go North  -> n   |\n");
		printf("\t\t|  Go South  -> s   |\n");
		printf("\t\t|  Go West   -> w   |\n");
		printf("\t\t|  Go East   -> e   |\n");
		printf("\t\t|  Go Top    -> t   |\n");
		printf("\t\t|  Go Bottom -> b   |\n");
		printf("\t\t|  Go Quit   -> q   |\n");
		printf("\t\t|  Go Help   -> h   |\n");
		printf("\t\t|___________________|\n");

		break;

	default:
		printf("What?");//if user ask for another character
		getchar();
		break;

	}//switch

}while(direc!='q');
}//main
