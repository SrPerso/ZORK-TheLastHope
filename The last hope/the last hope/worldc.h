
#include <iostream>
#include "principal.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

class room{
public:

	char name[20];
	char description[300];

};//class room 



class world {
	
public:


	room* rooms=nullptr;




	world();//build
	~world();// destroy
	void creatingworld();

};//class world


