//-----------headers------------------

#include "rooms.h"
#include "Entity.h"
//------------------------


#ifndef _EXIT_
#define  _EXIT_
class room;
enum dir{ NORTH, SOUTH, EAST, WEST, UP, DOWN };

class exits:public entity{
private:


	room* dest =nullptr;
	room* src =nullptr;
	dir direction;	
	entity* key;
	mString name_dest;

	bool open;
	bool locked;

public:


	exits(const mString name, const mString name_dest, const mString description, room* src, room* dest);
	~exits();

	void Look() const;
};

#endif