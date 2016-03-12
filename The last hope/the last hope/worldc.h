
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

class exits{
public:
	char name[4];
	char description[300];
	room dest;
	room src;
};


class bicho{
public:

	char name[20];
	int hp;

};//class bicho
class world {

	bicho* player = nullptr;
	room* rooms = nullptr;
	exits* exit = nullptr;

public:

	world();//build
	~world();// destroy
	void creatingworld();

};//class world


