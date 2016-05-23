#ifndef _FUNTIONS_
#define  _FUNTIONS_

typedef unsigned int uint;


void opendoorFX();
void closedoorFX();
bool preintro();
void intro();
void help();
void credits();
void kbhit(char& );


#define _ROOMSNUMBER_ 15 //number of Rooms
#define _PLAYERNUMBER_ 1 //number of PLAYERS
#define _EXITSNUMBER_ 32 // number of Exits
#define _INVENTORY_SPACE_ 10//number of places in the inventory
#define _ITEMNUMBER_ 10//number of itms
#define DELAY 3000//time to return to ask
#define COMMANDBUFFER 50

#endif
