#ifndef _FUNTIONS_
#define  _FUNTIONS_
#include "strings.h"
#include "world.h"
#include "Entity.h"
typedef unsigned int uint;

class world;

void opendoorFX();
void closedoorFX();
void preintro();
void intro();
void help();
void credits();
bool kbhit(world*);
void party();

#define _ROOMSNUMBER_ 15 //number of Rooms
#define _PLAYERNUMBER_ 1 //number of PLAYERS
#define _EXITSNUMBER_ 32 // number of Exits
#define _INVENTORY_SPACE_ 10//number of places in the inventory
#define _ITEMNUMBER_ 10//number of itms
#define TIMETOPASS 10000//time to return to ask 1000 == 1 seg
#define COMMANDBUFFER 50

#endif
