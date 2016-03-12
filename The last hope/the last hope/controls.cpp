#include <iostream>
#include "principal.h"
#include "worldc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;


int controls(){
	char move, go, look ;

	printf("what do you want to do?");
	scanf("%c", &move);

	switch (move){

		case 'g':// GO  --------------------------------
		
			printf("witch direction do you want to go?");
			scanf("%c", &go);
			switch (go)

			{

			case 'n':			//NORTH -----


				break;

			case 's':			//SOUTH -----

				break;

			case 'e':			//EAST  -----

				break;

			case 'w':			//WEST ------

				break;

			case 'u':			//UP   ------

				break;

			case 'd':			//DOWN  ----

				break;
			}//switch go

			break;// case GO -----------------------------

		case 'l':// LOOK  --------------------------------
		
			printf("witch direction do you want to look?");
			scanf("%c", &look);
			switch (look)
			{


			case 'n':			//NORTH-------


				break;

			case 's':			//SOUTH------

				break;

			case 'e':			//EAST------

				break;
			case 'w':			//WEST------

				break;
			case 'u':			//UP ------

				break;

			case 'd':			//DOWN ----

				break;
			}//SWITCH LOOK
		break;// case LOOK -----------------------------

		case 'o':			//OPEN

			break;

		case 'c':			//CLOSE

			return;


			break;

		case 'q':			//QUIT

			return 0;

			break;

		case 'h':			//HELP

			printf("\n------COMAND LIST------\n\n");
			printf("\t\t |g| -> GO \n");
			printf("\t\t |l| -> LOOK \n");
			printf("\t\t |o| -> OPEN \n");
			printf("\t\t |c| -> CLOSE \n");
			printf("\t\t |q| -> QUIT \n");
			printf("\t\t |h| -> HELP \n");

			break;
	}//principal switch
}//controls