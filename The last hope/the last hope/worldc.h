using namespace std;


#include <iostream>
#include "principal.h"

#include <stdio.h>
#include <stdlib.h>
#include <string>

room* rooms = nullptr;

class world {
public:

	world();
	~world();

};

class room :public world {
public:

	room() = default;
	~room()=default;
};
