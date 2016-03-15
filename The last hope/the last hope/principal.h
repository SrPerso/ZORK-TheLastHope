#ifndef NULL
#define NULL 0
#endif 
#define _CRT_SECURE_NO_WARNINGS


#ifndef _FUNTIONS_
#define  _FUNTIONS_


void reader(char *token1,char *token2);
void intro();
#endif


#ifndef _CONTROLS_
#define  _CONTROLS_

int checkings(char *token1, char *token2);
void help();
void go(char comand);


enum comands{ GO, LOOK, HELP, EXIT };
#endif


