#include <iostream>
#include "principal.h"
#include "worldc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

world::world() {

	rooms = new room[14];
	player = new bicho[1];
	exit = new exits[32];
	printf("build\n");

}//builder
world::~world() {

	delete[] rooms;
	delete[] player;
	delete[] exit;


	printf("destruyo\n");

}//destroyer

void world::creatingworld(){

	//PJ -----------------------------------------------------------

	strcpy_s(player[0].name, "So - Perca"); 
	player[0].hp = 100;
	player[0].position = rooms[1];


	//ROOMS -----------------------------------------------------------
	
	strcpy_s(rooms[0].name, "A buried ship"); strcpy_s(rooms[0].description, "This old ship has many arrangements, it seems that fought in various space battles ");

	strcpy_s(rooms[1].name, "East"); strcpy_s(rooms[1].description, "Nice place to do a picnic, the clearing is perfect to see the stars at night and imagine a trip around the galaxy. There is a buried ship at west with it I could travel out the planet.");

	strcpy_s(rooms[2].name, "West"); strcpy_s(rooms[2].description, "Trees, trees and more trees… well and the ship at East, maybe if I go west to the forest I will found something more");

	strcpy_s(rooms[3].name, "North"); strcpy_s(rooms[3].description, "At the north there is a cave maybe there is a creature living there, whatever, the buried ship at south seems damaged.");

	strcpy_s(rooms[4].name, "South"); strcpy_s(rooms[4].description, "Trees, trees and more trees… well and the ship at North, maybe if I go to the forest at South I will found something more…");

	strcpy_s(rooms[5].name, "Forest"); strcpy_s(rooms[5].description, "Omg! Omg! Omg!!! There is trees everywhere! Maybe is impossible to go out :O ");

	strcpy_s(rooms[6].name, "Space"); strcpy_s(rooms[6].description, "Space, a place where many would be and contemplate each of the planets that reside in the universe.");

	strcpy_s(rooms[7].name, "Rother 732423"); strcpy_s(rooms[7].description, "The Huge star Rother 732423 can reach to 100 million of degrees. Everything that arrive here can’t return. Mhmm seems that smells burned…");

	strcpy_s(rooms[8].name, "Cave"); strcpy_s(rooms[8].description, "this dark place smells like…");

	strcpy_s(rooms[9].name, "The Epic Space ship"); strcpy_s(rooms[9].description, "Every time that I am in the ship, I have a very strange feeling..");

	strcpy_s(rooms[10].name, "Outside of the castle"); strcpy_s(rooms[10].description, "this is like a rock desert, if there were not a giant castle north would say that I'm lost");

	strcpy_s(rooms[11].name, ""); strcpy_s(rooms[14].description, "");

	strcpy_s(rooms[12].name, "the hall"); strcpy_s(rooms[12].description, "the biggest hall that you can see in this galaxy.. with one door at the roof");

	strcpy_s(rooms[13].name, "jail"); strcpy_s(rooms[13].description, "the princess may be in this dark and wet place ");

	strcpy_s(rooms[14].name, "The swamp of duro"); strcpy_s(rooms[11].description, "Nice place to land the space ship…");

	//strcpy(rooms[14].name, ""); strcpy(rooms[14].description, "");

	

	//Exits -----------------------------------------------------------
	
	strcpy_s(exit[0].name, "1"); //exit one  room 1 [east]

		exit[0].src = rooms[1];
	
		exit[0].dest1 = rooms[5];//forest
		exit[0].dest2 = rooms[0];//ship
		exit[0].dest3 = rooms[3];//north
		exit[0].dest4 = rooms[4];//south


	strcpy_s(exit[1].name, "2"); //exit 2  room 2 [west]

		exit[1].src = rooms[2];

		exit[1].dest1 = rooms[3];//north
		exit[1].dest2 = rooms[5];//forest
		exit[1].dest3 = rooms[4];//south


	strcpy_s(exit[2].name, "3"); //exit 3  room 3 [north]

		exit[2].src = rooms[3];

		exit[2].dest1 = rooms[1];//east
		exit[2].dest2 = rooms[8];//cave
		exit[2].dest3 = rooms[2];//west
		exit[2].dest4 = rooms[5];//forest

	strcpy_s(exit[3].name, "4"); //exit 4  room 4 [south]

		exit[3].src = rooms[4];

		exit[3].dest1 = rooms[1];//east
		exit[3].dest2 = rooms[2];//west
		exit[3].dest3 = rooms[5];//forest


	strcpy_s(exit[4].name, "5"); //exit 5  room 5 [forest]

		exit[4].src = rooms[5]; 

	strcpy_s(exit[5].name, "6"); //exit 6  room 6 [space]

		exit[5].src = rooms[6]; 

		exit[5].dest1 = rooms[0]; //ship p1
		exit[5].dest2 = rooms[7];//sun
		exit[5].dest3 = rooms[9]; //ship p2
		exit[5].dest4 = rooms[14];//ship p3

	strcpy_s(exit[6].name, "7"); //exit 7  room 7 [sun]

		exit[6].src = rooms[7];

	strcpy_s(exit[7].name, "8"); //exit 8  room 8 [cave]

		exit[7].src = rooms[8];

		exit[7].dest1 = rooms[3]; //north
	
	strcpy_s(exit[8].name, "9"); //exit 9  room 9 [ship p2]

		exit[8].src = rooms[9];

		exit[8].dest1 = rooms[0]; //space
		exit[8].dest2 = rooms[7];//outside

	strcpy_s(exit[9].name, "10"); //exit 10  room 10 [outside]

		exit[9].src = rooms[10];

		exit[9].dest1 = rooms[11]; //castle
		exit[9].dest2 = rooms[9];//ship p2

	strcpy_s(exit[10].name, "11"); //exit 11  room 11 [castle]

		exit[10].src = rooms[11];

		exit[10].dest1 = rooms[10]; //outside
	
	strcpy_s(exit[11].name, "12"); //exit 12  room 12 [hall]

		exit[11].src = rooms[12];

		exit[11].dest1 = rooms[14]; //ship p3
		exit[11].dest2 = rooms[13];//jail

	strcpy_s(exit[12].name, "13"); //exit 13  room 13 [jail]

		exit[12].src = rooms[6];

		exit[12].dest1 = rooms[14]; //ship p3
		exit[12].dest2 = rooms[13];//hall

	strcpy_s(exit[13].name, "14"); //exit 14  room 14 [ship 3]

		exit[13].src = rooms[14];

		exit[13].dest1 = rooms[12]; //hall
		exit[13].dest2 = rooms[6];//space



}//create the rooms 






