#include "world.h"
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "strings.h"
#include "global.h"
#include <Windows.h>
#include "conio.h"


update_status kbhit(world*TheWorld){

	update_status ret = UPDATE_CONTINUE;
	update_status checkret = UPDATE_CONTINUE;
	srand(time(NULL));
	mString Stringcommands;

	char command[COMMANDBUFFER];
	//char character;

	bool firsttimeinloop = true;

	unsigned int currenttime = 0, initialtime = 0, charcommandnum = 0, TimeSinceWrote = 0, TimeWrite = 0;


	initialtime = GetTickCount();

	while (checkret == UPDATE_CONTINUE){

		currenttime = GetTickCount();

		if (currenttime >= (initialtime + TIMETOPASS) || TimeSinceWrote >= TIMETOWAIT){

			int num = 1 + rand() % (5 - 1);

			if (num == 1){
				printf("\n\t\t mmmh.. maybe you should write something\n");
			}

			if (num == 2){
				printf("\n\t\t lalala lalala the time goes by.. \n");
			}

			if (num == 3){
				printf("\n\t\t It seems that it has remained a good evening\n");
			}

			if (num == 4){
				printf("\n\t\t mmmh.. maybe you should write something\n");
			}

			initialtime = currenttime;
		}//if

		if (_kbhit())
		{
			if (charcommandnum < (COMMANDBUFFER - 2)){


				command[charcommandnum] = _getch();


				//printf(" >> %s",command[charcommandnum]);

				command[charcommandnum + 1] = '\0';

				printf("\t\t >> %s\r ", command);

				charcommandnum++;

				if (command[charcommandnum - 1] == '\r'){

					printf("\n\t\t >> %s\n\t\t\n", command);

					command[charcommandnum - 1] = '\0';

					charcommandnum = 0;

					Stringcommands.buffer = command;

					checkret = TheWorld->checkinloop(Stringcommands);
					if (checkret == UPDATE_STOP){
						return UPDATE_STOP;
					}

				}//if
			}//if
			else{
				command[COMMANDBUFFER - 1] = '\0';

				TimeWrite = GetTickCount();
				TimeSinceWrote = TimeWrite - currenttime;
			}//else
		}//if


	}//while
	return ret;
}
