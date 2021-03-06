#ifndef _FUNTIONS_
#define _FUNTIONS_


#define LOG(format, ...) log(__FILE__, __LINE__, format, __VA_ARGS__);
void log(const char file[], int line, const char* format, ...);


#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define ROOMSNUMBER 15 //number of Rooms
#define PLAYERNUMBER 1 //number of PLAYERS
#define EXITSNUMBER 32 // number of Exits
#define ITEMNUMBER 10//number of itms
#define NPCNUMBER 3//number of npcs

#define INVENTORY_SPACE 10//number of places in the inventory
#define NPC_INVENTORY_SPACE 2
#define TIMETOMOVENPC 25000 //time to move the npc

#define TIMETOPASS 30000//time to return to ask 1000 == 1 seg
#define COMMANDBUFFER 50
#define TIMETOWAIT 10000//time that must pass without write something 


enum update_status
{
	UPDATE_CONTINUE = 1,
	UPDATE_STOP,
	UPDATE_TALKING,
	UPDATE_NO_TALKING,
	UPDATE_ERROR
};
enum update_npc_movement
{
	UPDATE_NPC_MOVE1,
	UPDATE_NPC_MOVE2,
	UPDATE_NPC_MOVE3,
	UPDATE_NPC_MOVE4,
	UPDATE_NPC_PET,
	UPDATE_NPC_DEAD
};

enum update_npc_talk
{
	UPDATE_NPC_TALK1,
	UPDATE_NPC_TALK2,
	UPDATE_NPC_TALK3,
	UPDATE_NPC_TALK4,
	UPDATE_NPC_TALK5,
	UPDATE_NPC_TALK6,
	UPDATE_NPC_TALK7,

};
enum moving_text{

	UPDATE_TEXT_1,
	UPDATE_TEXT_2,
	UPDATE_TEXT_3,
	UPDATE_TEXT_4,
	UPDATE_TEXT_5,
	UPDATE_TEXT_6,
	UPDATE_TEXT_7,
	UPDATE_TEXT_STOP,
};

typedef unsigned int uint;

class world;

void kbhit(world*);

// INTRO---------------
bool preintro();
void introFX();

void intro();
//moving_text intro(moving_text&);


//EXTRAS-----------------
void opendoorFX();
void closedoorFX();

void party();
void DanceAndroid();

//HELP--------------------
void help();
void helpmap();
void helpComands();
void map();
//OUTTRO------------------
bool win(world*);
void Epilogue();
void credits();


#endif
