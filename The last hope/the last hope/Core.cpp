#include "world.h"
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "strings.h"
#include "global.h"
#include <Windows.h>
#include "conio.h"
#include "NPC.h"


void kbhit(world*TheWorld){

	srand(time(NULL));
	
	update_status checkret = UPDATE_CONTINUE;
	update_npc_movement  Update_npc_movement = UPDATE_NPC_MOVE1;
	update_npc_talk monkeytalkstate = UPDATE_NPC_TALK1;
	update_status player_talking = UPDATE_NO_TALKING;
	
	mString Stringcommands;

	char command[COMMANDBUFFER];

	bool firsttimeinloop = true;
	bool npcstop = true;
	bool monkeybool = true;
	unsigned int currenttime = 0, initialtime = 0, charcommandnum = 0, TimeSinceWrote = 0, TimeWrite = 0;
	
	initialtime = GetTickCount();


	while (checkret != UPDATE_STOP){


		if (npcstop == true){
			npcstop = TheWorld->Android->Update(TheWorld, initialtime, Update_npc_movement, npcstop);
		}

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
			npcstop = true;
			initialtime = currenttime;

		}//if


		


			if (_kbhit()){

				if (charcommandnum < (COMMANDBUFFER - 2)){

					
					command[charcommandnum] = _getch();

					
					//printf(" >> %s",command[charcommandnum]);
					if (command[0] == '\0'){ continue; }


					command[charcommandnum + 1] = '\0';

					if (checkret != UPDATE_TALKING){ printf("\t\t >> %s\r ", command); }
					if (checkret == UPDATE_TALKING){ printf("\t\t [[ %s\r ", command); }

					charcommandnum++;

					if (command[charcommandnum - 1] == '\r'){
						printf("\n");
						//printf("\n\t\t >> %s\n\t\t\n", command);

						command[charcommandnum - 1] = '\0';

						charcommandnum = 0;

						Stringcommands = command;
						if (checkret != UPDATE_TALKING && checkret !=UPDATE_STOP){ checkret = TheWorld->checkinloop(Stringcommands, monkeytalkstate, monkeybool);	}
						if (checkret == UPDATE_TALKING){ checkret = TheWorld->Android->talkandroid(Stringcommands);	}
						if (win(TheWorld) == true ){
							Epilogue();
							checkret = UPDATE_STOP;
						}
						
				
					
					}//if
				}//if
			}
	
		}//while
	
}
