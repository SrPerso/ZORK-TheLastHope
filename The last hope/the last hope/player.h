#ifndef _PLAYER_
#define _PLAYER_
//-----------headers------------------

#include "Entity.h"
//------------------------
class world;
class room;

class Player:public entity{
public:

	room* position=nullptr;
	bool tf = true;

public:

	//constructors-----

	Player(const char* name, const char* description, room* position);
	~Player();

	//----------

	//TODO ZORK 1
	void go(world* World, dir tgo);//quitar const
	void look()const;
	void look(world* World, dir look)const;//sobrecargar +

	void open(world* World, dir open);
	
	void close(world* World, dir close);

	//TODO ZORK 2

	void Inventory()const;//lookinventory
	void pick(const mString item);//const mString
	void drop(const mString item);
	void get(world* World,const mString item);//const mString
};//class player

#endif