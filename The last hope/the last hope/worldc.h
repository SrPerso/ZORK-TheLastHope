
#include <iostream>
#include "principal.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

class room{
public:

	char name[20];
	char description[300];

};//class room 

class exits{
public:
	char name[4];
	char description[300];
	room dest1;
	room dest2;
	room dest3;
	room dest4;
	room dest5;
	room src;
};


class bicho{
public:

	char name[20];
	int hp;
	room position;

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


