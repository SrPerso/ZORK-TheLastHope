#include <stdio.h>
#include "strings.h"
#include <iostream>



mString::mString(const char * str){

	int len = strlen(str);

	buffer = new char[len + 1];

	strcpy_s(buffer, len + 1, str);
	printf("\nbuilded\n");

}//builder

mString::mString(const mString & str){


	int len = strlen(buffer);

	buffer = new char[len + 1];

	strcpy_s(buffer, len + 1, buffer);
	printf("\n copy builded\n");

}//copybuilder


unsigned int mString::lenght()const{

	return strlen(buffer);

}


const char* mString::C_str()const{

	return buffer;

}

bool mString::empty()const{

	return (strlen(buffer) == 0);

}
mString::~mString(){

	delete[] buffer;

	printf("\ndestroyed\n");
}//destroyer