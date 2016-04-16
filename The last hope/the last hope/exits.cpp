#include "exits.h"

exits::exits(const mString name, const mString description, bool open, room* src, room* dest, dir direction) : entity(name, description, EXIT), open(open), src(src), dest(dest), direction(direction)
{
	type = EXIT;
}

exits::~exits(){

}