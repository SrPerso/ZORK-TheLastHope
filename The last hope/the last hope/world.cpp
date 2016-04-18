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
//------------------------

world::world() {
	//ROOOMS

	//PLANET 1----------------
	room* Planet1_Ship = new room("A buried ship", "This old ship has many arrangements, it seems that fought in various space battles");
	Room.push_back(Planet1_Ship);

	room* Planet1_East = new room("East", "Nice place to do a picnic, the clearing is perfect to see the stars at night and imagine a trip around the galaxy. There is a buried ship at west with it I could travel out the planet.");
	Room.push_back(Planet1_East);

	room* Planet1_West = new room("West", "Trees, trees and more trees… well and the ship at East, maybe if I go west to the forest I will found something more");
	Room.push_back(Planet1_West);

	room* Planet1_North = new room("North", "At the north there is a cave maybe there is a creature living there, whatever, the buried ship at south seems damaged.");
	Room.push_back(Planet1_North);

	room* Planet1_South = new room("South", "Trees, trees and more trees… well and the ship at North, maybe if I go to the forest at South I will found something more…");
	Room.push_back(Planet1_South);

	room* Planet1_Forest = new room("Forest", "Omg! Omg! Omg!!! There is trees everywhere! Maybe is impossible to go out :O ");
	Room.push_back(Planet1_Forest);
	//PLANET 1-----------------------------

	//SPACE----------------
	room* Space_Space = new room("Space", "Space, a place where many would be and contemplate each of the planets that reside in the universe.");
	Room.push_back(Space_Space);

	room* Space_Sun = new room("Rother 732423", "The Huge star Rother 732423 can reach to 100 million of degrees. Everything that arrive here can’t return. Mhmm seems that smells burned…");
	Room.push_back(Space_Sun);
	//SPACE -------------------------------

	//PLANET 1----------------
	room* Planet1_Cave = new room("Cave", "this dark place smells like…");
	Room.push_back(Planet1_Cave);
	//PLANET 1------------------------------

	//PLANET 2----------------
	room* Planet2_Ship = new room("The Epic Space ship", "Every time that I am in the ship, I have a very strange feeling..");
	Room.push_back(Planet2_Ship);

	room* Planet2_Outside = new room("Outside of the castle", "this is like a rock desert, if there were not a giant castle north would say that I'm lost");
	Room.push_back(Planet2_Outside);

	room* Planet2_Kingsroom = new room("King Room", "The principal room of the castle... where live the hated king of dantooine… maybe if the king dies his subjects will help you to repair the ship.");
	Room.push_back(Planet2_Kingsroom);
	//PLANET 2-----------------------------

	//PLANET 3----------------

	room* Planet2_Hall = new room("the hall", "the biggest hall that you can see in this galaxy.. with one door at the roof");
	Room.push_back(Planet2_Hall);

	room* Planet3_Jail = new room("jail", "the princess may be in this dark and wet place");
	Room.push_back(Planet3_Jail);

	room* Planet3_Ship = new room("The swamp of duro", "Nice place to land the space ship…");
	Room.push_back(Planet3_Ship);

	//PLANET 3-----------------------------


	// ---- Player ----

	player.push_back(new Player("SO-PERCA", "One normal guy that feels the force", Room[1]));

	// ---- Player ----



	// ---- EXITS ---------------------------

	//PLANET 1 ------
	Exit.push_back(new exits("South", "There is a road to go in front of the ship.", "East", Room[4], Room[1], true, NORTH));
	Exit.push_back(new exits("East", "It seems that the road leads south of the ship", "South", Room[1], Room[4], true, SOUTH));

	Exit.push_back(new exits("East", "This cool door lead outside", "Ship", Room[0], Room[1], false, EAST));
	Exit.push_back(new exits("Ship", "The ship’s door perhaps with a key could open", "East", Room[1], Room[0], true, WEST));

	Exit.push_back(new exits("East", "It seems that the road leads north of the ship", "North", Room[1], Room[3], true, NORTH));
	Exit.push_back(new exits("North", "There is a road to go in front of the ship.", "East", Room[3], Room[1], true, WEST));

	Exit.push_back(new exits("North", "the light is shining is a good way to go out the cave..", "cave", Room[8], Room[3], true, DOWN));
	Exit.push_back(new exits("cave", "This hole seems that leads to a cave", "North", Room[3], Room[8], true, UP));

	Exit.push_back(new exits("North", "The road is leading to the ship’s back maybe there is something…", "West", Room[3], Room[2], true, WEST));
	Exit.push_back(new exits("West", "It seems that the road leads north of the ship", "North", Room[2], Room[3], true, NORTH));

	Exit.push_back(new exits("South", "The road is leading to the ship’s back maybe there is something…", "West", Room[4], Room[2], true, WEST));
	Exit.push_back(new exits("West", "It seems that the road leads south of the ship", "South", Room[2], Room[4], true, SOUTH));

	Exit.push_back(new exits("East", "There is a road full of herbs and shrubs, it seems to be leading to forest", "Forest", Room[1], Room[5], true, EAST));
	Exit.push_back(new exits("South", "There is a road full of herbs and shrubs, it seems to be leading to forest", "Forest", Room[4], Room[5], true, NORTH));
	Exit.push_back(new exits("North", "There is a road full of herbs and shrubs, it seems to be leading to forest", "Forest", Room[3], Room[5], true, NORTH));
	Exit.push_back(new exits("West", "There is a road full of herbs and shrubs, it seems to be leading to forest", "Forest", Room[2], Room[5], true, NORTH));
	//PLANET 1 ------

	// SPACE----
	Exit.push_back(new exits("Ship", "i must put all ready to leave the planet", "Space", Room[0], Room[6], true, UP));
	Exit.push_back(new exits("Space", "This lost planet is really nice from space", "Ship in plab", Room[6], Room[0], true, DOWN));

	Exit.push_back(new exits("Space", "mmm this star is perfect for take a SUPER.. HOT.. hollidays", "Sun", Room[6], Room[7], true, NORTH));
	// SPACE----

	//DANTOOINE- --
	Exit.push_back(new exits("Space", "this dry planet seems the perfect place for take the fuel", "Dantooine", Room[6], Room[9], true, EAST));
	Exit.push_back(new exits("Dantooine", "space the huge unknown", "Space", Room[9], Room[6], true, UP));

	Exit.push_back(new exits("Outside of the castle", "i love that ship", "Ship ", Room[10], Room[9], true, EAST));
	Exit.push_back(new exits("Ship ", "this is like a desert but blue.. (da ba dee da ba daaa.... -eiffel 65)", "Outside of the castle", Room[9], Room[10], true, WEST));

	Exit.push_back(new exits("Outside of the castle", "fiuu fiuu this castle reminds me of the castle disney ... but badly build", "Inside of the castle", Room[10], Room[11], true, NORTH));
	Exit.push_back(new exits("Inside of the castle", "fresh air over there..", "Outside of the castle", Room[11], Room[10], true, SOUTH));
	//DANTOOINE- --

	//DURO--
	Exit.push_back(new exits("Space", "UOoUOOoo pretty green planet, maybe i will travel ther when i take some fuel", "Duro", Room[6], Room[14], true, SOUTH));
	Exit.push_back(new exits("Duro", "Came on camion! i can not wait to travel to the starss!", "Space", Room[14], Room[6], true, UP));

	Exit.push_back(new exits("Jail", "Maybe to arrive fastly to the ship you just have to jump down", "Swamp of Duro", Room[13], Room[14], true, DOWN));

	Exit.push_back(new exits("Hall", "with this stairs i could ho to the jail", "Jail", Room[12], Room[13], true, EAST));
	Exit.push_back(new exits("Jail", "oing down i will arrive to the hall", "Hall", Room[13], Room[12], true, WEST));

	Exit.push_back(new exits("Hall", "the ship.. nice way to land off...", "Ship in the Swang", Room[12], Room[14], true, SOUTH));
	Exit.push_back(new exits("Ship in the Swang", "well i think that we just land off in the hall LoL", "Hall", Room[14], Room[12], true, NORTH));
	//DURO--


	Item* Stone = new Item("Stone", "you can broke a window with it", Planet1_West);
	item.push_back(Stone);

	Item* Stick = new Item("Stick", " you can use it for kick someone or something", Planet1_East);
	item.push_back(Stick);

	Item* Target = new Item("Target", "you can enter to some ship.", Planet1_Cave);
	item.push_back(Target);

	Item* Diamond = new Item("Diamond", "Nice Stone,it seems that belongs to a collection of shiny rocks", Planet1_Forest);
	item.push_back(Diamond);

	Item* Laser_Sword = new Item("Laser Sword", "old weapon, maybe the rey’ sword, can attack", Planet1_Ship);
	item.push_back(Laser_Sword);

	Item* Blazzer = new Item("Blazzer", "weapon, pistol, can attack.", Planet2_Outside);
	item.push_back(Blazzer);

	Item* sensor = new Item("Sensor", "it can scan where is the princess", Planet2_Kingsroom);
	item.push_back(sensor);

	Item* Cable = new Item("Cable", "maybe could repair a starship", Planet1_South);
	item.push_back(Cable);

	// ITEMS_------------------------------

}//builder
world::~world() {

/*	Room.clear();
	Exit.clear();
	player.clear();

*/
}//destroyer

