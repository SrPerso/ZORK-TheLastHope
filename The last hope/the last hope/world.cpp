#include <iostream>
#include "principal.h"
#include "worldc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;


world::world() {

	rooms = new room[14];
	player = new bicho[1];
	exit = new exits[32];

}//builder
world::~world() {
	delete[] rooms;
	printf("destruyo\n");

}//destroyer

void world::creatingworld(){

	//PJ -----------------------------------------------------------

	strcpy(player[0].name, "So - Perca"); player[0].hp = 100;

	//ROOMS -----------------------------------------------------------
	
	strcpy(rooms[0].name, "A buried ship"); strcpy(rooms[0].description, "This old ship has many arrangements, it seems that fought in various space battles ");

	strcpy(rooms[1].name, "East"); strcpy(rooms[1].description, "Nice place to do a picnic, the clearing is perfect to see the stars at night and imagine a trip around the galaxy. There is a buried ship at west with it I could travel out the planet.");

	strcpy(rooms[2].name, "West"); strcpy(rooms[2].description, "Trees, trees and more trees… well and the ship at East, maybe if I go west to the forest I will found something more");

	strcpy(rooms[3].name, "North"); strcpy(rooms[3].description, "At the north there is a cave maybe there is a creature living there, whatever, the buried ship at south seems damaged.");

	strcpy(rooms[4].name, "South"); strcpy(rooms[4].description, "Trees, trees and more trees… well and the ship at North, maybe if I go to the forest at South I will found something more…");

	strcpy(rooms[5].name, "Forest"); strcpy(rooms[5].description, "Omg! Omg! Omg!!! There is trees everywhere! Maybe is impossible to go out :O ");

	strcpy(rooms[6].name, "Space"); strcpy(rooms[6].description, "Space, a place where many would be and contemplate each of the planets that reside in the universe.");

	strcpy(rooms[7].name, "Rother 732423"); strcpy(rooms[7].description, "The Huge star Rother 732423 can reach to 100 million of degrees. Everything that arrive here can’t return. Mhmm seems that smells burned…");

	strcpy(rooms[8].name, "Cave"); strcpy(rooms[8].description, "this dark place smells like…");

	strcpy(rooms[9].name, "The Epic Space ship"); strcpy(rooms[9].description, "Every time that I am in the ship, I have a very strange feeling..");

	strcpy(rooms[10].name, "Outside of the castle"); strcpy(rooms[10].description, "this is like a rock desert, if there were not a giant castle north would say that I'm lost");

	strcpy(rooms[11].name, ""); strcpy(rooms[14].description, "");

	strcpy(rooms[12].name, "the hall"); strcpy(rooms[12].description, "the biggest hall that you can see in this galaxy.. with one door at the roof");

	strcpy(rooms[13].name, "jail"); strcpy(rooms[13].description, "the princess may be in this dark and wet place ");

	strcpy(rooms[14].name, "The swamp of duro"); strcpy(rooms[11].description, "Nice place to land the space ship…");
	//strcpy(rooms[14].name, ""); strcpy(rooms[14].description, "");

	

	//Exits -----------------------------------------------------------
	
	//-- planet 1
	strcpy(exit[0].name, "41");/**/ exit[0].dest = rooms[1];/**/ exit[0].src = rooms[4];
	strcpy(exit[1].name, "14");/**/ exit[1].dest = rooms[4];/**/ exit[1].src = rooms[1];

	strcpy(exit[2].name, "01");/**/ exit[2].dest = rooms[1];/**/ exit[2].src = rooms[0];
	strcpy(exit[3].name, "10");/**/ exit[3].dest = rooms[0];/**/ exit[3].src = rooms[1];

	strcpy(exit[4].name, "13");/**/ exit[4].dest = rooms[3];/**/ exit[4].src = rooms[1];
	strcpy(exit[5].name, "31");/**/ exit[5].dest = rooms[1];/**/ exit[5].src = rooms[3];

	strcpy(exit[6].name, "83");/**/ exit[6].dest = rooms[3];/**/ exit[6].src = rooms[8];
	strcpy(exit[7].name, "38");/**/ exit[7].dest = rooms[8];/**/ exit[7].src = rooms[3];

	strcpy(exit[8].name, "32");/**/ exit[8].dest = rooms[2];/**/ exit[8].src = rooms[3];
	strcpy(exit[9].name, "23");/**/ exit[9].dest = rooms[3];/**/ exit[9].src = rooms[2];

	strcpy(exit[10].name, "42");/**/ exit[10].dest = rooms[2];/**/ exit[10].src = rooms[4];
	strcpy(exit[11].name, "24");/**/ exit[11].dest = rooms[4];/**/ exit[11].src = rooms[2];

	strcpy(exit[12].name, "15");/**/ exit[12].dest = rooms[5];/**/ exit[12].src = rooms[1];
	strcpy(exit[13].name, "45");/**/ exit[13].dest = rooms[5];/**/ exit[13].src = rooms[4];
	strcpy(exit[14].name, "35");/**/ exit[14].dest = rooms[5];/**/ exit[14].src = rooms[3];
	strcpy(exit[15].name, "25");/**/ exit[15].dest = rooms[5];/**/ exit[15].src = rooms[2];
	//-- space
	strcpy(exit[16].name, "06");/**/ exit[16].dest = rooms[6];/**/ exit[16].src = rooms[0];
	strcpy(exit[17].name, "60");/**/ exit[17].dest = rooms[0];/**/ exit[17].src = rooms[6];

	strcpy(exit[18].name, "67");/**/ exit[18].dest = rooms[7];/**/ exit[18].src = rooms[6];

	strcpy(exit[19].name, "69");/**/ exit[19].dest = rooms[9];/**/ exit[19].src = rooms[6];
	strcpy(exit[20].name, "96");/**/ exit[20].dest = rooms[6];/**/ exit[20].src = rooms[9];

	//-- planet 2
	
	strcpy(exit[21].name, "109");/**/ exit[21].dest = rooms[9];/**/ exit[21].src = rooms[10];
	strcpy(exit[22].name, "910");/**/ exit[22].dest = rooms[10];/**/ exit[22].src = rooms[9];

	strcpy(exit[23].name, "1011");/**/ exit[23].dest = rooms[11];/**/ exit[23].src = rooms[10];
	strcpy(exit[24].name, "1110");/**/ exit[24].dest = rooms[10];/**/ exit[24].src = rooms[11];

	//--space
	strcpy(exit[25].name, "614");/**/ exit[25].dest = rooms[14];/**/ exit[25].src = rooms[6];
	strcpy(exit[26].name, "146");/**/ exit[26].dest = rooms[6];/**/ exit[26].src = rooms[14];

	//-- planet 3

	strcpy(exit[27].name, "1314");/**/ exit[27].dest = rooms[14];/**/ exit[27].src = rooms[13];

	strcpy(exit[28].name, "1213");/**/ exit[28].dest = rooms[13];/**/ exit[28].src = rooms[12];
	strcpy(exit[29].name, "1312");/**/ exit[29].dest = rooms[12];/**/ exit[29].src = rooms[13];

	strcpy(exit[30].name, "1214");/**/ exit[30].dest = rooms[14];/**/ exit[30].src = rooms[12];
	strcpy(exit[31].name, "1412");/**/ exit[31].dest = rooms[12];/**/ exit[31].src = rooms[14];


}//create the rooms 






