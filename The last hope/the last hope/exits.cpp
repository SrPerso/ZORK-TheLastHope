#include "exits.h"

exits::exits(const char* name, const char* description, bool open, room* src, room* dest, dir direction): Entity(name, description, EXIT), open(open), source(source), destination(destination), direction(direction)
{
	type = EXIT;
}

exits::~exits(){

}