#define _CRT_SECURE_NO_WARNINGS

#ifndef _FUNTIONS_
#define  _FUNTIONS_

enum comands{
	GO,
	LOOK,
	HELP,
	EXIT
};

typedef unsigned int uint;


void opendoorFX();
void closedoorFX();
void preintro();
void intro();
void help();

void credits();

#define _ROOMSNUMBER_ 15 //number of Rooms
#define _PLAYERNUMBER_ 1 //number of PLAYERS
#define _EXITSNUMBER_ 32 // number of Exits


#endif
//-------------------- enums 