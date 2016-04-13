#ifndef _ENTITY_
#define _ENTITY_

#include "strings.h"


class entity{
public:

	mString name;
	mString description;


	entity(const char* name, const char* description):my_name(name) my_description(description);
	~entity();
};


#endif
