
#include <iostream>
#include "principal.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

enum dir {
	NORTH,
	SOUTH,
	EAST,
	WEST,
	UP,
	DOWN
};


class room{
public:

	char name[30];
	char description[400];

};//class room 

class exits{
public:
	char name[5];
	char description[300];
	room* dest;
	room* src;
	dir direction;
	bool open;
};


class bicho{
public:

	char name[20];
	//int hp;
	room* position;

};//class bicho
class world {
public:
	bicho* player = nullptr;
	room* rooms = nullptr;
	exits* exit = nullptr;

	world();//build
	~world();// destroy


	void creatingworld();


};//class world


