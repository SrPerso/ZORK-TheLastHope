#ifndef NULL
#define NULL 0
#endif 
#define _CRT_SECURE_NO_WARNINGS


#ifndef _FUNTIONS_
#define  _FUNTIONS_


void reader(char *token,char *firstword);
void intro();
#endif


#ifndef _CONTROLS_
#define  _CONTROLS_

int checkings(char *token, char *firstword);
void help();
void go(char comand);


enum comands{ GO, LOOK, HELP, EXIT };
#endif


