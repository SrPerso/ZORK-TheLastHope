//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-----------headers------------------
#include "global.h"
#include "world.h"
#include "rooms.h"
#include "exits.h"
#include "player.h"
#include <Windows.h>
//------------------------


bool preintro(){


	printf("\n\n\n\n\n\n\t\t\tThis game can cause epileptic seizures,\n");
	printf("\t\t\tif you are prone to suffer one of these\n ");
	printf("\t\t\tattacks should skip the intro\n\n");

	while (1){
	char in[50];

	printf("\t Skip the intro? (y/n) \n\n \t\t>>");
	
	gets_s(in);
	
	mString intr(in);

	system("color 0A");//black green

		if (intr == "y"){
			return true;
		}//if
		else if (intr == "n"){
			return false;

		}//if
		else{			
			printf("\t mmhh write 'n' or 'y' \n\t\t>>");
		}

	}

	
}
void intro(){
	
	
	Sleep(1500);

	system("cls");
		printf("\n\n\n\n\n\n");//
		printf("\n\n\n\n\n\n");
		printf("\n\n\n\n     The New Empire took over the Galaxy causing a horrible place to live \n\n");
	
		Sleep(1300);

		system("cls");
		printf("\n\n\n\n\n\n");//
		printf("\n\n\n\n");
		printf("\n\n\n\n\     The New Empire took over the Galaxy causing a horrible place to live \n\n");
		printf("   in peace. On a distant planet from the centre of the Galaxy was a kid \n\n");
		
		Sleep(1300);
		
		system("cls");
		printf("\n\n\n\n\n\n");//
		printf("\n\n");
		printf("\n\n\n\n     The New Empire took over the Galaxy causing a horrible place to live \n\n");
		printf("   in peace. On a distant planet from the centre of the Galaxy was a kid \n\n");
		printf("   called Perka whose family was murdered by de New Empire. He found a \n\n");
		
		Sleep(1300);
		
		system("cls");
		printf("\n\n\n\n\n\n");//

		printf("\n\n\n\n     The New Empire took over the Galaxy causing a horrible place to live \n\n");
		printf("   in peace. On a distant planet from the centre of the Galaxy was a kid \n\n");
		printf("   called Perka whose family was murdered by de New Empire. He found a \n\n");
		printf("   mysterious star ship half buried witch he was start a new adventure.\n\n\n\n");		
		
		Sleep(1300);

		system("cls");
		printf("\n\n\n\n\n\n");//
		printf("\n\n     The New Empire took over the Galaxy causing a horrible place to live \n\n");
		printf("   in peace. On a distant planet from the centre of the Galaxy was a kid \n\n");
		printf("   called Perka whose family was murdered by de New Empire. He found a \n\n");
		printf("   mysterious star ship half buried witch he was start a new adventure.\n\n\n\n");


		Sleep(1300);
		
		system("cls");
		printf("\n\n\n\n\n\n");//
		printf("     The New Empire took over the Galaxy causing a horrible place to live \n\n");
		printf("   in peace. On a distant planet from the centre of the Galaxy was a kid \n\n");
		printf("   called Perka whose family was murdered by de New Empire. He found a \n\n");
		printf("   mysterious star ship half buried witch he was start a new adventure.\n\n\n\n");
		
		Sleep(1300);
		
		system("cls");
		printf("\n\n\n\n\n\n");//
		printf("\n\n   in peace. On a distant planet from the centre of the Galaxy was a kid \n\n");
		printf("   called Perka whose family was murdered by de New Empire. He found a \n\n");
		printf("   mysterious star ship half buried witch he was start a new adventure.\n\n\n\n");
		
		Sleep(1300);
		
		system("cls");
		printf("\n\n\n\n\n\n");//
		printf("   called Perka whose family was murdered by de New Empire. He found a \n\n");
		printf("   mysterious star ship half buried witch he was start a new adventure.\n\n\n\n");
		printf("   You are in the east of the bured ship\n\n");
		printf("\n\n\n\n\n\n");//
		Sleep(1300);
		
		system("pause");

	system("cls");
	system("color 0A");//black green
	printf("\n\n");
}
void introFX(){
	int i, j;
	for (j = 0; j <=1; j++){
		for (i = 0; i < 12; i++){

			system("cls");

			system("color f0");//white black

			if (i == 1 || i == 3 || i == 5 || i == 6 || i == 8 || i == 10 || i == 11){

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

			}

			else if (i == 2 || i == 4|| i == 7 || i == 9 || i == 12){

				printf("\t------------------------------------------------------------------ \n");
				printf("\t__________________________________________________________________ \n");
				printf("\t------------------------------------------------------------------ \n");
				printf("\t------------------------------------------------------------------ \n");
				printf("\t__________________________________________________________________ \n");
				printf("\t------------------------------------------------------------------ \n");
				printf("\t--########--#---#--#####----------#-------#####--######-########-- \n");
				printf("\t-----#------#---#--#--------------#-------#---#--#---------#------ \n");
				printf("\t-----#------#####--#####----------#-------#####--######----#------ \n");
				printf("\t____________________________------#-------#---#-------#----#------ \n");
				printf("\t-----#------#---#--#####----------######--#---#--######----#------ \n");
				printf("\t__________________________________________________________________ \n");
				printf("\t------------------------------------------------------------------ \n");
				printf("\t------------------#---#--######--######--#####-------------------- \n");
				printf("\t__________________________________________________________________ \n");
				printf("\t------------------#####--#----#--######--#####-------------------- \n");
				printf("\t------------------#---#--#----#--#-------#------------------------ \n");
				printf("\t__________________________________________________________________ \n");
				printf("\t______________________________________________-------------------- \n");
				printf("\t------------------------------------------------------------------ \n");
				printf("\t------------------------------------------------------------------ \n");
				printf("\t__________________________________________________________________ \n");
				printf("\t-----------------------------------------------------BY-PERSO----- \n");
				printf("\t------------------------------------------------------------------ \n");

			}

			else if (i > 4 && i < 8){
				system("color f4");//white red
			}//if
			else if (i >8){

				system("color 0A");//black green
			}//if
			else{
				system("color 0A");//black green
		
			}//else
		}//i for
	}//j for
	system("cls");
}//intro


void closedoorFX(){
	int i;

	for (i = 0; i < 7; i++){

		system("cls");
		system("color f0");//white black


		printf("\t----------------------------########------------------------------ \n");
		printf("\t------------------------------######------------------------------ \n");
		printf("\t---------------------------##---#####----------------------------- \n");
		printf("\t---------------------------#--#---###----------------------------- \n");
		printf("\t-----------------------#####----#-----##-------------------------- \n");
		printf("\t--------------------______#_______#______________----------------- \n");
		printf("\t------------------######____#__________________-|----------------- \n");
		printf("\t-----------------##-|-|-##--------------------|-|----------------- \n");
		printf("\t------------------##|-|##---------------------|-|----------------- \n");
		printf("\t-----------######---###-----------------------|-|----------------- \n");
		printf("\t----------##-----##-|-|-----------------------|-|----------------- \n");
		printf("\t-----####--##---##--|-|-----------------------|-|----------------- \n");
		printf("\t----#---#----###----|-|-----------------------|-|----------------- \n");
		printf("\t----#---####--------|-|------------------->>>-|-|----------------- \n");
		printf("\t-----##----#--------|-|------------------->>>-|-|----------------- \n");
		printf("\t------#--##---------|-|------------------->>>-|-|----------------- \n");
		printf("\t-------##*----------|-|------------------->>>-|-|----------------- \n");
		printf("\t--------------------|-|-----------------------|-|----------------- \n");
		printf("\t--------------------|-|---------|����|--------|-|----------------- \n");
		printf("\t--------------------|-|---------|    |--------|-|----------------- \n");
		printf("\t--------------------|-|---------|    |--------|-|----------------- \n");



		if (i==2){
			system("color 0A");//black green
		}//if
		if (i == 4){
			
			system("color f4");//white red
		}//if
		if (i == 6){
			system("color 0A");//black green
		}//if
		else{
			
			system("color f4");//white red
			
		}//if
	}//for
	
}//close door FX

void opendoorFX(){
	

	for (int i = 0; i < 4; i++){

		system("cls");
		


		printf("\t---------------------------------------------------------------- \n");
		printf("\t---------------------------------------------------------------- \n");
		printf("\t---------------------------------------------------------------- \n");
		printf("\t---------------------------------------------------------------- \n");
		printf("\t---------------------------------------------------------------- \n");
		printf("\t------------------_____________________________----------------- \n");
		printf("\t------------------|-_________________________-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");
		printf("\t------------------|-|                       |-|----------------- \n");

		system("color 0A");//black green

		if (i == 2){
			system("color f4");//white red
		}//if
		if (i == 3){
			system("color 0A");//black green
			
		}//if
		else{

			system("color f4");//white red

		}//if
	}//for

}//open door FX


void party(){
	
	for (int j = 0; j <= 2; j++){
		for (int i = 0; i < 7; i++){

			system("cls");
			system("color f0");//white black


			printf("\n\n\t�==============================================================�\n");
			printf("\n\t\t\t\t#####             __              #####\n");
			printf("\t\t\t\t#( )# |          _( )__         | #( )#\n");
			printf("\t\t\t\t##### |         /_    /         | #####\n");
			printf("\t\t\t\t#| |# |     ___m/__ m/_____     | #| |#\n");
			printf("\t\t\t\t# O # | ___#-x./++m/.x- #_____ _| # O #\n");
			printf("\t\t\t\t#m.m# |/ @  |||###/||| @ ___ _   | #m.m#\n");
			printf("\t\t\t\t#####///    ######/     _######  _ #####\n ");
			printf("\n\n\t�==============================================================�\n");
			if (i == 2){
				system("color 0A");//black green
			}//if
			if (i == 4){

				system("color f4");//white red
			}//if
			if (i == 6){
				system("color 0A");//black green
			}//if
			else{

				system("color f4");//white red

			}//if
		}//for
	}//for

}

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

void map(){

	printf("\n\n\t�==============================================================�\n");
	printf("\t�--------------------------____--------------------------------� \n");
	printf("\t�---____------------------[    ]-------------------------------� \n");
	printf("\t�---|11|-----------------{  07  }------------------------------� \n");
	printf("\t�---!__!------------------[____]-------------------------------� \n");
	printf("\t�----*----------------------+----------------------------------� \n");
	printf("\t�---____---____-------------+----------------------------------� \n");
	printf("\t�---|10|***|09|+++----------+----------------------------------� \n");
	printf("\t�---!__!---!__!----++-------+----------------------------____--� \n");
	printf("\t�--------------------+--________-------------------------|08|--� \n"); 
	printf("\t�---------------------++|  06  |++++++++++---------******!__!--� \n");
	printf("\t�--------____-----------|______|----------++-----__*_----------� \n");
	printf("\t�----****|13|-------------+----------------*+****|03|*****-----� \n");
	printf("\t�--__*_--!__!-------------+---------------*--+---!__!-----*----� \n");
	printf("\t�--|12|-----------------++------____----____---+-____-----_*__-� \n"); 
	printf("\t�--!__!---------------- + ------|05|****|01|*****|00|-----|02|-� \n");
	printf("\t�--__*_---------+++++++---------!__!----!__!-----!__!-----!__!-� \n");
	printf("\t�--|14|-------++-------------------------**------____-----***--� \n");
	printf("\t�--!__!+++++++-----------------------------******|04|*****-----� \n");
	printf("\t�------------------------------------------------!__!----------� \n");
	printf("\t�==============================================================�\n");
	printf("\n\t Use 'Help Map' to know more");
	
}

void helpmap(){
	printf("\n\n\n\t N� 0 --->Planet1_Ship ========= N� 8 --->Planet1_Cave \n");
	printf("\t N� 1 --->Planet1_East ========= N� 9 --->Planet2_Ship \n");
	printf("\t N� 2 --->Planet1_West ========= N� 10--->Planet2_Outside \n");
	printf("\t N� 3 --->Planet1_North ======== N� 11--->Planet2_Kingsroom \n");
	printf("\t N� 4 --->Planet1_South ======== N� 12--->Planet2_Hall \n");
	printf("\t N� 5 --->Planet1_Forest ======= N� 13--->Planet3_Jail \n");
	printf("\t N� 6 --->Space_Space ========== N� 14--->Planet3_Ship \n");
	printf("\t N� 7 --->Space_Sun \n");
}

void DanceAndroid(){
	int i, j;
	for (j = 0; j <= 2; j++){
		for (i = 0; i < 28; i++){

			system("cls");

			system("color f0");//white black

			if (i == 1 || i == 2 || i == 3 || i ==4){
				printf("\n\n\n\n\n\n");
				printf("\t\t\t         ,-----.        \n");
				printf("\t\t\t       ,'_/_|_\_`.      \n");
				printf("\t\t\t      /<<::8[O]::>\     \n");
				printf("\t\t\t     _|-----------|_    \n");
				printf("\t\t\t :::|  | ====-=- |  |:::\n");
				printf("\t\t\t :::|  | -=-==== |  |:::\n");
				printf("\t\t\t :::\  | ::::|()||  /:::\n");
				printf("\t\t\t ::::| | ....|()|| |::::\n");
				printf("\t\t\t     | |_________| |    \n");
				printf("\t\t\t     | |\_______/| |    \n");
				printf("\t\t\t    /   \ /   \ /  |   \n");
				printf("\t\t\t    `---' `---' `---'   \n");
				printf("\n\n\n");
			}

			else if (i == 5 || i == 6 || i == 7 || i == 8){
				printf("\n\n\n\n\n\n");
				printf("\t\t\t            ,-----.        \n");
				printf("\t\t\t          ,'_/_|_\_`.      \n");
				printf("\t\t\t         /<<::8[O]::>\     \n");
				printf("\t\t\t        _|-----------|_    \n");
				printf("\t\t\t    :::|  | ====-=- |  |:::\n");
				printf("\t\t\t    :::|  | -=-==== |  |:::\n");
				printf("\t\t\t    :::\  | ::::|()||  /:::\n");
				printf("\t\t\t    ::::| | ....|()|| |::::\n");
				printf("\t\t\t        | |_________| |    \n");
				printf("\t\t\t        | |\_______/| |    \n");
				printf("\t\t\t       /   \ /   \ /  |   \n");
				printf("\t\t\t       `---' `---' `---'   \n");
				printf("\n\n\n");
			}
			else if (i == 9 || i == 10 || i == 11 || i == 12){
				printf("\n\n\n\n\n\n");
				printf("\t\t\t               ,-----.        \n");
				printf("\t\t\t             ,'_/_|_\_`.      \n");
				printf("\t\t\t            /<<::8[O]::>\     \n");
				printf("\t\t\t           _|-----------|_    \n");
				printf("\t\t\t       :::|  | ====-=- |  |:::\n");
				printf("\t\t\t       :::|  | -=-==== |  |:::\n");
				printf("\t\t\t       :::\  | ::::|()||  /:::\n");
				printf("\t\t\t       ::::| | ....|()|| |::::\n");
				printf("\t\t\t           | |_________| |    \n");
				printf("\t\t\t           | |\_______/| |    \n");
				printf("\t\t\t          /   \ /   \ /  |   \n");
				printf("\t\t\t          `---' `---' `---'   \n");
				printf("\n\n\n");
			}
			else if (i == 13 || i == 14 || i == 15 || i == 16){
				printf("\n\n\n\n\n\n");
				printf("\t\t\t                  ,-----.        \n");
				printf("\t\t\t                ,'_/_|_\_`.      \n");
				printf("\t\t\t               /<<::8[O]::>\     \n");
				printf("\t\t\t              _|-----------|_    \n");
				printf("\t\t\t          :::|  | ====-=- |  |:::\n");
				printf("\t\t\t          :::|  | -=-==== |  |:::\n");
				printf("\t\t\t          :::\  | ::::|()||  /:::\n");
				printf("\t\t\t          ::::| | ....|()|| |::::\n");
				printf("\t\t\t              | |_________| |    \n");
				printf("\t\t\t              | |\_______/| |    \n");
				printf("\t\t\t             /   \ /   \ /  |   \n");
				printf("\t\t\t             `---' `---' `---'   \n");
				printf("\n\n\n");
			}

			else if (i == 17 || i == 18 || i == 19 || i == 20){
				printf("\n\n\n\n\n\n");
				printf("\t\t\t               ,-----.        \n");
				printf("\t\t\t             ,'_/_|_\_`.      \n");
				printf("\t\t\t            /<<::8[O]::>\     \n");
				printf("\t\t\t           _|-----------|_    \n");
				printf("\t\t\t       :::|  | ====-=- |  |:::\n");
				printf("\t\t\t       :::|  | -=-==== |  |:::\n");
				printf("\t\t\t       :::\  | ::::|()||  /:::\n");
				printf("\t\t\t       ::::| | ....|()|| |::::\n");
				printf("\t\t\t           | |_________| |    \n");
				printf("\t\t\t           | |\_______/| |    \n");
				printf("\t\t\t          /   \ /   \ /  |   \n");
				printf("\t\t\t          `---' `---' `---'   \n");
				printf("\n\n\n");
			}
			else if (i == 21 || i == 22 || i == 23 || i == 24){
				printf("\n\n\n\n\n\n");
				printf("\t\t\t            ,-----.        \n");
				printf("\t\t\t          ,'_/_|_\_`.      \n");
				printf("\t\t\t         /<<::8[O]::>\     \n");
				printf("\t\t\t        _|-----------|_    \n");
				printf("\t\t\t    :::|  | ====-=- |  |:::\n");
				printf("\t\t\t    :::|  | -=-==== |  |:::\n");
				printf("\t\t\t    :::\  | ::::|()||  /:::\n");
				printf("\t\t\t    ::::| | ....|()|| |::::\n");
				printf("\t\t\t        | |_________| |    \n");
				printf("\t\t\t        | |\_______/| |    \n");
				printf("\t\t\t       /   \ /   \ /  |   \n");
				printf("\t\t\t       `---' `---' `---'   \n");
				printf("\n\n\n");
			}
			if (i == 25 || i == 26 || i == 27 || i ==28){
				printf("\n\n\n\n\n\n");
				printf("\t\t\t         ,-----.        \n");
				printf("\t\t\t       ,'_/_|_\_`.      \n");
				printf("\t\t\t      /<<::8[O]::>\     \n");
				printf("\t\t\t     _|-----------|_    \n");
				printf("\t\t\t :::|  | ====-=- |  |:::\n");
				printf("\t\t\t :::|  | -=-==== |  |:::\n");
				printf("\t\t\t :::\  | ::::|()||  /:::\n");
				printf("\t\t\t ::::| | ....|()|| |::::\n");
				printf("\t\t\t     | |_________| |    \n");
				printf("\t\t\t     | |\_______/| |    \n");
				printf("\t\t\t    /   \ /   \ /  |   \n");
				printf("\t\t\t    `---' `---' `---'   \n");
				printf("\n\n\n");

			}
			/*
			else if (i > 4 && i < 8){
				system("color f4");//white red
			}//if
			else if (i > 8){

				system("color 0A");//black green
			}//if
			else{
				system("color 0A");//black green

			}//else*/
		}//i for
	}
	
	system("color 0A");//black green
	
}