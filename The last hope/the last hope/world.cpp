//- -------- system -----------------
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-----------headers------------------
#include "world.h"
#include "rooms.h"
#include "player.h"
#include "exits.h"
#include "NPC.h"
#include "Entity.h"
#include "Item.h"
//------------------------

world::world(){
	createWorld();
}//builder


world::~world() {

	for (unsigned int i = 0; i < Entities.size(); i++){
		delete Entities[i];
	}
	Entities.clear();

}//destroyer





void world::createWorld(){

	//ROOOMS

	//PLANET 1----------------



	room* Planet1_Ship = new room("\nA buried ship", "This old ship has many arrangements, it seems that fought in various space battles");
	Entities.push_back(Planet1_Ship);

	Planet1_West  = new room("\nWest", "Nice place to do a picnic, the clearing is perfect to see the stars at night and imagine a trip around the galaxy. There is a buried ship at East with it I could travel out the planet.\n Maybe inside there is something interesting (to enter you needs a target)");
	Entities.push_back(Planet1_West);

	Planet1_East = new room("\nEast", "Trees, trees and more trees… well and the ship at West, maybe if I go East to the forest I will found something more");
	Entities.push_back(Planet1_East);

	Planet1_North = new room("\nNorth", "At the north is the Forest and a cave maybe there is a creature living there, whatever, the buried ship at south seems damaged.");
	Entities.push_back(Planet1_North);
	
	Planet1_South = new room("\nSouth", "Trees, trees and more trees… well and the ship at North, maybe if I go to the forest at South I will found something more…");
	Entities.push_back(Planet1_South);

	room* Planet1_Forest = new room("\nForest", "Omg! Omg! Omg!!! There is trees everywhere! Maybe is impossible to go out :O.. but look there is a diamond on the floor");
	Entities.push_back(Planet1_Forest);
	//PLANET 1-----------------------------

	//SPACE---------------- 
	 Space_Space = new room("Space", "Space, a place where many would be and contemplate each of the planets that reside in the universe.");
	Entities.push_back(Space_Space);

	room* Space_Sun = new room("Rother 732423", "The Huge star Rother 732423 can reach to 100 million of degrees. Everything that arrive here can’t return. Mhmm seems that smells burned…");
	Entities.push_back(Space_Sun);
	//SPACE -------------------------------

	//PLANET 1----------------
	room* Planet1_Cave = new room("Cave", "this dark place smells like…");
	Entities.push_back(Planet1_Cave);
	//PLANET 1------------------------------

	//PLANET 2----------------
	room* Planet2_Ship = new room("The Epic Space ship", "Every time that I am in the ship, I have a very strange feeling..");
	Entities.push_back(Planet2_Ship);

	room* Planet2_Outside = new room("Outside of the castle", "this is like a rock desert, if there were not a giant castle north would say that I'm lost");
	Entities.push_back(Planet2_Outside);

	room* Planet2_Kingsroom = new room("King Room", "The principal room of the castle... where live the hated king of dantooine… maybe if the king dies his subjects will help you to repair the ship.");
	Entities.push_back(Planet2_Kingsroom);
	//PLANET 2-----------------------------

	//PLANET 3----------------

	room* Planet2_Hall = new room("the hall", "the biggest hall that you can see in this galaxy.. with one door at the roof");
	Entities.push_back(Planet2_Hall);

	room* Planet3_Jail = new room("jail", "the princess may be in this dark and wet place");
	Entities.push_back(Planet3_Jail);

	room* Planet3_Ship = new room("The swamp of duro", "Nice place to land the space ship…");
	Entities.push_back(Planet3_Ship);

	//PLANET 3-----------------------------


	// ---- EXITS ---------------------------

	//PLANET 1 ------
	Entities.push_back(new exits("South", "West", "There is a road to go in front of the ship.", Planet1_South, Planet1_West, true, NORTH));
	Entities.push_back(new exits("West", "South", "It seems that the road leads south of the ship", Planet1_West, Planet1_South, true, SOUTH));

	Entities.push_back(new exits("West", "Ship", "This cool door lead outside", Planet1_Ship, Planet1_West, true, WEST));
	Entities.push_back(new exits("Ship", "West", "The ship’s door perhaps with a key could open", Planet1_West, Planet1_Ship, false, EAST));
	((exits*)Entities[ROOMSNUMBER + 3])->locked = true;

	Entities.push_back(new exits("West", "North1", "It seems that the road leads north of the ship", Planet1_West, Planet1_North, true, NORTH));
	Entities.push_back(new exits("North", "West", "There is a road to go in front of the ship.", Planet1_North, Planet1_West, true, WEST));

	Entities.push_back(new exits("North", "cave", "the light is shining is a good way to go out the cave..", Planet1_Cave, Planet1_North, true, UP));
	Entities.push_back(new exits("cave", "North", "This hole seems that leads to a cave", Planet1_North, Planet1_Cave, true, DOWN));

	Entities.push_back(new exits("North", "East", "The road is leading to the ship’s back maybe there is something…", Planet1_North, Planet1_East, true, EAST));
	Entities.push_back(new exits("East", "North", "It seems that the road leads north of the ship", Planet1_East, Planet1_North, true, NORTH));

	Entities.push_back(new exits("South", "East", "The road is leading to the ship’s back maybe there is something…", Planet1_South, Planet1_East, true, EAST));
	Entities.push_back(new exits("East", "South", "It seems that the road leads south of the ship", Planet1_East, Planet1_South, true, SOUTH));

	Entities.push_back(new exits("West", "Forest", "There is a road full of herbs and shrubs, it seems to be leading to forest", Planet1_West, Planet1_Forest, true, WEST));
	Entities.push_back(new exits("South", "Forest", "There is a road full of herbs and shrubs, it seems to be leading to forest", Planet1_South, Planet1_Forest, true, SOUTH));
	Entities.push_back(new exits("North", "Forest", "There is a road full of herbs and shrubs, it seems to be leading to forest", Planet1_North, Planet1_Forest, true, NORTH));
	Entities.push_back(new exits("East", "Forest", "There is a road full of herbs and shrubs, it seems to be leading to forest", Planet1_East, Planet1_Forest, true, EAST));
	//PLANET 1 ------

	// SPACE----
	Entities.push_back(new exits("Ship", "Space", "i must put all ready to leave the planet", Planet1_Ship, Space_Space, true, UP));
	Entities.push_back(new exits("Space", "Ship in plab", "This lost planet is really nice from space", Space_Space, Planet1_Ship, true, DOWN));

	Entities.push_back(new exits("Space", "Sun", "mmm this star is perfect for take a SUPER.. HOT.. hollidays", Space_Space, Space_Sun, true, NORTH));
	// SPACE----

	//DANTOOINE- --
	Entities.push_back(new exits("Space", "Dantooine", "this dry planet seems the perfect place for take the fuel", Space_Space, Planet2_Ship, true, WEST));
	Entities.push_back(new exits("Dantooine", "Space", "space the huge unknown", Planet2_Ship, Space_Space, true, UP));

	Entities.push_back(new exits("Outside of the castle", "Ship ", "i love that ship", Planet2_Outside, Planet2_Ship, true, WEST));
	Entities.push_back(new exits("Ship ", "Outside of the castle", "this is like a desert but blue.. (da ba dee da ba daaa.... -eiffel 65)", Planet2_Ship, Planet2_Outside, true, EAST));

	Entities.push_back(new exits("Outside of the castle", "Inside of the castle", "fiuu fiuu this castle reminds me of the castle disney ... but badly build", Planet2_Outside, Planet2_Kingsroom, true, NORTH));
	Entities.push_back(new exits("Inside of the castle", "Outside of the castle", "fresh air over there..", Planet2_Kingsroom, Planet2_Outside, true, SOUTH));
	//DANTOOINE- --

	//DURO--
	Entities.push_back(new exits("Space", "Duro", "UOoUOOoo pretty green planet, maybe i will travel ther when i take some fuel", Space_Space, Planet3_Ship, false, SOUTH));
	Entities.push_back(new exits("Duro", "Space", "Came on camion! i can not wait to travel to the starss!", Planet3_Ship, Space_Space, true, UP));

	Entities.push_back(new exits("Jail", "Swamp of Duro", "Maybe to arrive fastly to the ship you just have to jump down", Planet3_Jail, Planet3_Ship, true, DOWN));

	Entities.push_back(new exits("Hall", "Jail", "with this stairs i could ho to the jail", Planet2_Hall, Planet3_Jail, true, EAST));
	Entities.push_back(new exits("Jail", "Hall", "oing down i will arrive to the hall", Planet3_Jail, Planet2_Hall, true, WEST));

	Entities.push_back(new exits("Hall", "Ship in the Swang", "the ship.. nice way to land off...", Planet2_Hall, Planet3_Ship, true, SOUTH));
	Entities.push_back(new exits("Ship in the Swang", "Hall", "well i think that we just land off in the hall LoL", Planet3_Ship, Planet2_Hall, true, NORTH));
	//DURO--

	///----------------------------------------------------------------------------------------
	///----------------------------------ITEMS---------------------------------------------
	///----------------------------------------------------------------------------------------
	Item* Stone = new Item("Stone", "you can broke a window with it", Planet1_East);
	Entities.push_back(Stone);
	//[
	Stone->attack = 15;
	Stone->attackspeed = 1;
	//]

	Item* Stick = new Item("Stick", "Stick", Planet1_East);
	Entities.push_back(Stick);
	//[
	Stick->attack = 10;
	Stick->attackspeed = 2;
	//]

	Card = new Item("Target", "you can enter to some ship.", Planet1_Cave);
	Entities.push_back(Card);

	Item* Diamond = new Item("Diamond", "Nice Stone,it seems that belongs to a collection of shiny rocks", Planet1_Forest);
	Entities.push_back(Diamond);

	Item* Laser_Sword = new Item("Laser Sword", "old weapon, maybe the rey’ sword, can attack", Planet1_Ship);
	Entities.push_back(Laser_Sword);
	//[
	Laser_Sword->attack = 50;
	Laser_Sword->attackspeed = 2;
	//]

	Item* Blazzer = new Item("Blazzer", "weapon, pistol, can attack.", Planet2_Outside);
	Entities.push_back(Blazzer);

	//[
	Blazzer->attack = 10;
	Blazzer->attackspeed = 3;
	//]

	Item* sensor = new Item("Sensor", "it can scan where is the princess", Planet2_Kingsroom);
	Entities.push_back(sensor);

	Item* Cable = new Item("Cable", "maybe could repair a starship", Planet1_South);
	Entities.push_back(Cable);
	
	Item* BOX = new Item("box", "It contains things", Planet1_Ship);
	Entities.push_back(BOX);

	// ITEMS_------------------------------

	

	///----------------------------------------------------------------------------------------
	///----------------------------------NPCS---------------------------------------------
	///----------------------------------------------------------------------------------------

	Android = new Npc("Android", "This android seems that wears a diamond inside him \n Maybe i could talk with him...", Planet1_West);
	Entities.push_back(Android);

	Monkey = new Npc("Monkey", "A rare white monkey with a target in his hand \n Perhaps i can convince him to give me the target ", Planet1_Cave);
	Entities.push_back(Monkey);


	stormtrooper = new Npc("Stormtrooper", "One Stormtrooper cying... He lost the blazzer..", Planet1_West);
	Entities.push_back(stormtrooper);
	


	// ---- Player ----

	player = new Player("SO-PERCA", "One normal guy that feels the force", Planet1_West);
	Entities.push_back(player);
	// ---- Player ----



	Entities[1]->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 0]);//stone

	Entities[1]->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 1]);//stick

	Monkey->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 2]);//Card

	Entities[5]->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 3]);//diamond

	Entities[0]->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 4]);//lasser

	Entities[3]->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 5]);//blazzer

	stormtrooper->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 6]);//sensor

	Entities[0]->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 7]);//cable

	Entities[0]->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 8]);// box

	Entities[8]->container.push_back(Entities[ROOMSNUMBER + EXITSNUMBER + 7]);
}
