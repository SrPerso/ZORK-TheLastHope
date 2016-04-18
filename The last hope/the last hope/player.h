#ifndef _PLAYER_
#define _PLAYER_
//-----------headers------------------

#include "Entity.h"
#include "exits.h"
#include "Item.h"
//------------------------
class world;
class room;

class Player:public entity{
public:
	Vector <Item*>PlayerItems;
	Vector <Item*>PlayerEquip;
	room* position=nullptr;
	bool noStop = true;
	bool Item_Equiped = false;
	//Stats
	int hp = 100;
	int attack = 20;
	int attackspeed = 1;

	

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
	void get(world* World, const mString item, const mString box);//const mString

	void put(world* World, const mString item, const mString box);//const mString

	void equip(world* World, const mString item);
	void unequip(world* World, const mString item);

	void stats();
};//class player

#endif