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
		for (i = 0; i < 30; i++){

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


			if (i > 10 && i < 20){
				system("color f4");//white red
			}//if
			if (i > 20){

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

void reader(char *token1, char*token2){


	char recep[80]="NULL", seps[3]= " ,";
	token1 = NULL;
	token2 = NULL;
	printf("comand?\n");
	fflush(stdin);

	gets_s(recep);
	

	fflush(stdin);
	token1 = strtok_s(recep, seps, &token2);

	/*while (token1 != NULL){
		printf("\t %s\n", token1);
		token1 = strtok_s(NULL, seps, &token2);

	}*/

}