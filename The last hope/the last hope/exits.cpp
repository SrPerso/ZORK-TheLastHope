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


void world::createexits(){


	//-- planet 1;/*--------------*/ ;/*--------------*/ ;/*--------------*/ 
	//east-south;/*--------------*/ 

	strcpy_s(exit[0].name, "41");

	exit[0].dest = &rooms[1];
	exit[0].src = &rooms[4];
	exit[0].direction = NORTH;
	exit[0].open = true;
	strcpy_s(exit[0].description, "There is a road to go in front of the ship.");

	strcpy_s(exit[1].name, "14");

	exit[1].dest = &rooms[4];
	exit[1].src = &rooms[1];
	exit[1].direction = SOUTH;
	exit[1].open = true;
	strcpy_s(exit[1].description, "It seems that the road leads south of the ship");


	//east ship;/*--------------*/ 

	strcpy_s(exit[2].name, "01");

	exit[2].dest = &rooms[1];
	exit[2].src = &rooms[0];
	exit[2].direction = EAST;
	exit[2].open = false;
	strcpy_s(exit[2].description, "01-	This cool door lead outside");


	strcpy_s(exit[3].name, "10");

	exit[3].dest = &rooms[0];
	exit[3].src = &rooms[1];
	exit[3].direction = WEST;
	exit[3].open = false;
	strcpy_s(exit[3].description, "The ship’s door perhaps with a key could open");

	//east  north;/*--------------*/ 

	strcpy_s(exit[4].name, "13");

	exit[4].dest = &rooms[3];
	exit[4].src = &rooms[1];
	exit[4].direction = NORTH;
	exit[4].open = true;
	strcpy_s(exit[4].description, "It seems that the road leads north of the ship");


	strcpy_s(exit[5].name, "31");

	exit[5].dest = &rooms[1];
	exit[5].src = &rooms[3];
	exit[5].direction = SOUTH;
	exit[5].open = true;
	strcpy_s(exit[5].description, "There is a road to go in front of the ship.");

	//north cave;/*--------------*/ 

	strcpy_s(exit[6].name, "83");

	exit[6].dest = &rooms[3];
	exit[6].src = &rooms[8];
	exit[6].direction = UP;
	exit[6].open = true;
	strcpy_s(exit[6].description, "the light is shining is a good way to go out the cave..");


	strcpy_s(exit[7].name, "38");

	exit[7].dest = &rooms[8];
	exit[7].src = &rooms[3];
	exit[7].direction = DOWN;
	exit[7].open = true;
	strcpy_s(exit[7].description, "This hole seems that leads to a cave");

	//north west;/*--------------*/ 

	strcpy_s(exit[8].name, "32");

	exit[8].dest = &rooms[2];
	exit[8].src = &rooms[3];
	exit[8].direction = SOUTH;
	exit[8].open = true;
	strcpy_s(exit[8].description, "The road is leading to the ship’s back maybe there is something…");


	strcpy_s(exit[9].name, "23");

	exit[9].dest = &rooms[3];
	exit[9].src = &rooms[2];
	exit[9].direction = NORTH;
	exit[9].open = true;
	strcpy_s(exit[9].description, "It seems that the road leads north of the ship");

	//west south;/*--------------*/ 

	strcpy_s(exit[10].name, "42");

	exit[10].dest = &rooms[2];
	exit[10].src = &rooms[4];
	exit[10].direction = NORTH;
	exit[10].open = true;
	strcpy_s(exit[10].description, "The road is leading to the ship’s back maybe there is something…");


	strcpy_s(exit[11].name, "24");

	exit[11].dest = &rooms[4];
	exit[11].src = &rooms[2];
	exit[11].direction = SOUTH;
	exit[11].open = true;
	strcpy_s(exit[11].description, "It seems that the road leads south of the ship");

	//forest;/*--------------*/ 

	strcpy_s(exit[12].name, "15");

	exit[12].dest = &rooms[5];
	exit[12].src = &rooms[1];
	exit[12].direction = EAST;
	exit[12].open = true;
	strcpy_s(exit[12].description, "There is a road full of herbs and shrubs, it seems to be leading to forest");


	strcpy_s(exit[13].name, "45");

	exit[13].dest = &rooms[5];
	exit[13].src = &rooms[4];
	exit[13].direction = SOUTH;
	exit[13].open = true;
	strcpy_s(exit[13].description, "There is a road full of herbs and shrubs, it seems to be leading to forest");


	strcpy_s(exit[14].name, "35");

	exit[14].dest = &rooms[5];
	exit[14].src = &rooms[3];
	exit[14].direction = NORTH;
	exit[14].open = true;
	strcpy_s(exit[14].description, "There is a road full of herbs and shrubs, it seems to be leading to forest");


	strcpy_s(exit[15].name, "25");

	exit[15].dest = &rooms[5];
	exit[15].src = &rooms[2];
	exit[15].direction = WEST;
	exit[15].open = true;
	strcpy_s(exit[15].description, "There is a road full of herbs and shrubs, it seems to be leading to forest");

	//-- space;/*--------------*/ ;/*--------------*/ ;/*--------------*/ 
	// ship space;/*--------------*/ 

	strcpy_s(exit[16].name, "06");

	exit[16].dest = &rooms[6];
	exit[16].src = &rooms[0];
	exit[16].direction = UP;
	exit[16].open = true;
	strcpy_s(exit[16].description, "i must put all ready to leave the planet");


	strcpy_s(exit[17].name, "60");

	exit[17].dest = &rooms[0];
	exit[17].src = &rooms[6];
	exit[17].direction = DOWN;
	exit[17].open = true;
	strcpy_s(exit[17].description, "This lost planet is really nice from space");

	//space sun;/*--------------*/ 

	strcpy_s(exit[18].name, "67");

	exit[18].dest = &rooms[7];
	exit[18].src = &rooms[6];
	exit[18].direction = NORTH;
	exit[18].open = true;
	strcpy_s(exit[18].description, "mmm this star is perfect for take a SUPER.. HOT.. hollidays");

	//space ship 2;/*--------------*/ 

	strcpy_s(exit[19].name, "69");

	exit[19].dest = &rooms[9];
	exit[19].src = &rooms[6];
	exit[19].direction = EAST;
	exit[19].open = true;
	strcpy_s(exit[19].description, "this dry planet seems the perfect place for take the fuel");


	strcpy_s(exit[20].name, "96");

	exit[20].dest = &rooms[6];
	exit[20].src = &rooms[9];
	exit[20].direction = UP;
	exit[20].open = true;
	strcpy_s(exit[20].description, "space the huge unknown ");

	//-- planet 2;/*--------------*/ ;/*--------------*/ ;/*--------------*/ 
	//ship outside;/*--------------*/ 

	strcpy_s(exit[21].name, "109");

	exit[21].dest = &rooms[9];
	exit[21].src = &rooms[10];
	exit[21].direction = WEST;
	exit[21].open = true;
	strcpy_s(exit[21].description, "i love that ship");


	strcpy_s(exit[22].name, "910");

	exit[22].dest = &rooms[10];
	exit[22].src = &rooms[9];
	exit[22].direction = EAST;
	exit[22].open = true;
	strcpy_s(exit[22].description, "this is like a desert but blue.. (da ba dee da ba daaa.... -eiffel 65)");

	// outside - castle

	strcpy_s(exit[23].name, "1011");

	exit[23].dest = &rooms[11];
	exit[23].src = &rooms[10];
	exit[23].direction = NORTH;
	exit[23].open = true;
	strcpy_s(exit[23].description, "fiuu fiuu this castle reminds me of the castle disney ... but badly build");


	strcpy_s(exit[24].name, "1110");

	exit[24].dest = &rooms[10];
	exit[24].src = &rooms[11];
	exit[24].direction = SOUTH;
	exit[24].open = true;
	strcpy_s(exit[24].description, "fresh air over there..");

	//--space;/*--------------*/ ;/*--------------*/ ;/*--------------*/ 
	//space shi 3;/*--------------*/ 

	strcpy_s(exit[25].name, "614");

	exit[25].dest = &rooms[14];
	exit[25].src = &rooms[6];
	exit[25].direction = SOUTH;
	exit[25].open = true;
	strcpy_s(exit[25].description, "UOoUOOoo pretty green planet, maybe i will traver ther when i take some fuel");


	strcpy_s(exit[26].name, "146");

	exit[26].dest = &rooms[6];
	exit[26].src = &rooms[14];
	exit[26].direction = UP;
	exit[26].open = true;
	strcpy_s(exit[26].description, "Came on camion! i can not wait to travel to the starss!");

	//-- planet 3;/*--------------*/ ;/*--------------*/ ;/*--------------*/ 
	//jail ship;/*--------------*/ 

	strcpy_s(exit[27].name, "1314");

	exit[27].dest = &rooms[14];
	exit[27].src = &rooms[13];
	exit[27].direction = DOWN;
	exit[27].open = true;
	strcpy_s(exit[27].description, "Maybe to arrive fastly to the ship you just have to jump down ");

	//jail hall;/*--------------*/ 

	strcpy_s(exit[28].name, "1213");

	exit[28].dest = &rooms[13];
	exit[28].src = &rooms[12];
	exit[28].direction = WEST;
	exit[28].open = true;
	strcpy_s(exit[28].description, "with this stairs i could ho to the jail");


	strcpy_s(exit[29].name, "1312");

	exit[29].dest = &rooms[12];
	exit[29].src = &rooms[13];
	exit[29].direction = EAST;
	exit[29].open = true;
	strcpy_s(exit[0].description, "going down i will arrive to the hall");

	// ship hall;/*--------------*/ 

	strcpy_s(exit[30].name, "1214");

	exit[30].dest = &rooms[14];
	exit[30].src = &rooms[12];
	exit[30].direction = SOUTH;
	exit[30].open = true;
	strcpy_s(exit[30].description, "the ship.. nice way to land off... ");


	strcpy_s(exit[31].name, "1412");

	exit[31].dest = &rooms[12];
	exit[31].src = &rooms[14];
	exit[31].direction = NORTH;
	exit[31].open = true;
	strcpy_s(exit[31].description, "well i think that we just land off in the hall LoL");

}