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

world::world() {

	rooms = new room[_NoR_];//15  #define _NoR_ 15
	player = new bicho[_NoB_];//1  #define _NoB_ 1
	exit = new exits[_NoE_];//32  #define _NoE_ 32



}//builder
world::~world() {

	delete[] rooms;
	delete[] player;
	delete[] exit;


}//destroyer

void world::creatingrooms(){




	strcpy_s(rooms[0].name, "A buried ship");
	strcpy_s(rooms[0].description, "This old ship has many arrangements, it seems that fought in various space battles ");

	strcpy_s(rooms[1].name, "East");
	strcpy_s(rooms[1].description, "Nice place to do a picnic, the clearing is perfect to see the stars at night and imagine a trip around the galaxy. There is a buried ship at west with it I could travel out the planet.");

	strcpy_s(rooms[2].name, "West");
	strcpy_s(rooms[2].description, "Trees, trees and more trees… well and the ship at East, maybe if I go west to the forest I will found something more");

	strcpy_s(rooms[3].name, "North");
	strcpy_s(rooms[3].description, "At the north there is a cave maybe there is a creature living there, whatever, the buried ship at south seems damaged.");

	strcpy_s(rooms[4].name, "South");
	strcpy_s(rooms[4].description, "Trees, trees and more trees… well and the ship at North, maybe if I go to the forest at South I will found something more…");

	strcpy_s(rooms[5].name, "Forest");
	strcpy_s(rooms[5].description, "Omg! Omg! Omg!!! There is trees everywhere! Maybe is impossible to go out :O ");

	strcpy_s(rooms[6].name, "Space");
	strcpy_s(rooms[6].description, "Space, a place where many would be and contemplate each of the planets that reside in the universe.");

	strcpy_s(rooms[7].name, "Rother 732423");
	strcpy_s(rooms[7].description, "The Huge star Rother 732423 can reach to 100 million of degrees. Everything that arrive here can’t return. Mhmm seems that smells burned…");


	strcpy_s(rooms[8].name, "Cave");
	strcpy_s(rooms[8].description, "this dark place smells like…");

	strcpy_s(rooms[9].name, "The Epic Space ship");
	strcpy_s(rooms[9].description, "Every time that I am in the ship, I have a very strange feeling..");

	strcpy_s(rooms[10].name, "Outside of the castle");
	strcpy_s(rooms[10].description, "this is like a rock desert, if there were not a giant castle north would say that I'm lost");


	strcpy_s(rooms[11].name, "King Room");
	strcpy_s(rooms[11].description, "The principal room of the castle... where live the hated king of dantooine… maybe if the king dies his subjects will help you to repair the ship.");

	strcpy_s(rooms[12].name, "the hall");
	strcpy_s(rooms[12].description, "the biggest hall that you can see in this galaxy.. with one door at the roof");

	strcpy_s(rooms[13].name, "jail");
	strcpy_s(rooms[13].description, "the princess may be in this dark and wet place ");

	strcpy_s(rooms[14].name, "The swamp of duro");
	strcpy_s(rooms[14].description, "Nice place to land the space ship…");



}//create the rooms 



