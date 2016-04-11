#define _CRT_SECURE_NO_WARNINGS

#ifndef _FUNTIONS_
#define  _FUNTIONS_

#define LOG(format, ...) log(__FILE__, __LINE__, format, __VA_ARGS__);
void log(const char file[], int line, const char* format, ...);

enum comands{
	GO,
	LOOK,
	HELP,
	EXIT
};

void opendoorFX();
void closedoorFX();
void preintro();
void intro();
void help();

void credits();
#endif

#define _ROOMSNUMBER_ 15 //number of Rooms
#define _PLAYERNUMBER_ 1 //number of PLAYERS
#define _EXITSNUMBER_ 32 // number of Exits

//-------------------- enums 