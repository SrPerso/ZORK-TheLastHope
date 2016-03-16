//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-----------headers------------------
#include "principal.h"
#include "worldc.h"
#include "rooms.h"
#include "controls.h"
#include "exits.h"
#include "bicho.h"
//------------------------

void intro(){
	int i, j;
	for (j = 0; j <=1; j++){
		for (i = 0; i < 12; i++){

			system("cls");

			system("color f0");//white black

			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t--########--#---#--#####----------#-------#####--######-########-- \n");
			printf("\t-----#------#---#--#--------------#-------#---#--#---------#------ \n");
			printf("\t-----#------#####--#####----------#-------#####--######----#------ \n");
			printf("\t-----#------#---#--#--------------#-------#---#-------#----#------ \n");
			printf("\t-----#------#---#--#####----------######--#---#--######----#------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------#---#--######--######--#####-------------------- \n");
			printf("\t------------------#---#--#----#--#----#--#------------------------ \n");
			printf("\t------------------#####--#----#--######--#####-------------------- \n");
			printf("\t------------------#---#--#----#--#-------#------------------------ \n");
			printf("\t------------------#---#--######--#-------#####-------------------- \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t------------------------------------------------------------------ \n");
			printf("\t-----------------------------------------------------BY-PERSO----- \n");
			printf("\t------------------------------------------------------------------ \n");


			if (i > 4 && i < 8){
				system("color f4");//white red
			}//if
			if (i >8){

				system("color 0A");//black green
			}//if
			else{
				system("color 0A");//black green

			}//else
		}//i for
	}//j for
	system("pause");
	system("cls");
}//intro
void preintro(){
	printf("\n\n\n\n\n\n\t\t\tThis game can cause epileptic seizures,\n");
	printf("\t\t\tif you are prone to suffer one of these\n ");
	printf("\t\t\tattacks should skip the intro\n\n");
	char in;
	printf("\t Skip the intro? (y/n) \n\n\t\t");
	scanf_s("%c", &in);

	if (in != 'y' || in != 's'){
		intro(); 
	}//if
}


void closedoorFX(){
	int i;

	for (i = 0; i < 7; i++){
		system("cls");
		printf("KBOOOOOOM!\n");
		printf("KBOOOOOOM!\n");
		printf("KBOOOOOOM!\n");
		printf("KBOOOOOOM!\n");
		printf("KBOOOOOOM!\n");
		if (i==2){
			system("color f4");//white red
		}//if
		if (i == 4){
			system("color 0A");//black green
		}//if
		if (i == 6){
			system("color f4");//white red
		}//if
		else{
			system("color 0A");//black green
			
		}//if
	}//for
	
}//close door FX

void credits(){
	system("cls");
	system("color 4f");
	printf("\n\t\t ----------------THANKS 4 PLAY-----------------\n");
	printf("\n\t\t- GAME MADE BY:\n");
	printf("\n\t\t\t PERSO INDUSTRIES\n");
	printf("\n\t\t- MANAGEMENT, CODE & DESIGN BY:\n");
	printf("\n\t\t\t CARLOS PERALTA SOROLLA\n");
	printf("\n\t\t -FX MADE BY:\n");
	printf("\n\t\t\t CARLOS PERALTA SOROLLA\n");
	printf("\n\t\t- OBJETIVES: \n");
	printf("\n\t\t\t CONQUER THE WORLD & SAVE THE POLAR BEARS\n");
	printf("\n\t\t- WE GIVE THANKS TO\n");
	printf("\n\t\t\t MONSTER,BALLANTINES, JACK DANIELS,");
	printf("\n\t\t\t SOME BEAUTIFUL GIRLS AND RIC PILLOSU\n\n");
	system("pause");
} 