#define _CRT_SECURE_NO_WARNINGS

#ifndef _FUNTIONS_
#define  _FUNTIONS_


void reader(char *token1,char *token2);
void intro();
#endif



//-------------------- enums 
enum comands{ 
	GO,
	LOOK,
	HELP, 
	EXIT 
};

enum dir {
	NORTH,
	SOUTH,
	EAST,
	WEST,
	UP,
	DOWN
};
