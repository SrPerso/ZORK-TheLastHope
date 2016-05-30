#ifndef _FUNTIONS_
#define _FUNTIONS_


#define LOG(format, ...) log(__FILE__, __LINE__, format, __VA_ARGS__);
void log(const char file[], int line, const char* format, ...);
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

enum update_status
{
	UPDATE_CONTINUE = 1,
	UPDATE_STOP,
	UPDATE_ERROR
};

typedef unsigned int uint;

class world;

void opendoorFX();
void closedoorFX();
bool preintro();
void introFX();
void intro();
void help();
void credits();
update_status kbhit(world*);
void party();
void map();
void helpmap();

#define ROOMSNUMBER 15 //number of Rooms
#define PLAYERNUMBER 1 //number of PLAYERS
#define EXITSNUMBER 32 // number of Exits
#define ITEMNUMBER 10//number of itms
#define NPCNUMBER 3//number of npcs

#define INVENTORY_SPACE 10//number of places in the inventory

#define TIMETOPASS 20000//time to return to ask 1000 == 1 seg
#define COMMANDBUFFER 50
#define TIMETOWAIT 10000//time that must pass without write something 
#endif
