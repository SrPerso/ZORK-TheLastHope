#include <stdio.h>
#include "strings.h"
#include <iostream>
#include "global.h"


mString::mString(const char * str){
	
	maxCapacity = strlen(str)+1;

	buffer = new char[maxCapacity];

	strcpy_s(buffer, maxCapacity, str);
	LOG("Builded constructor str");
}//builder

mString::mString(const mString & str){


	maxCapacity = strlen(str.buffer) + 1;

	buffer = new char[maxCapacity];

	strcpy_s(buffer, maxCapacity, str.buffer);
	LOG("copy Builded constructor str");

}//copybuilder

mString::~mString(){

	delete[] buffer;

	LOG("destroyed str");

}//destroyer


unsigned int mString::length()const{

	return strlen(buffer);

}//length


const char* mString::C_str()const{

	return buffer;

}//buffer return

bool mString::empty()const{

	return (strlen(buffer) == 0);

}//empty




bool mString::operator == (const char* str)const{

	return(strcmp(buffer, str) == 0);

}// == 

//bool mString::operator == (const mString& str)const{
//	return(strcmp(buffer, str.buffer) == 0);
//}// == copia

void mString::operator += (const mString& str){


	if ((str.length() + length() + 1)> maxCapacity)	{

		maxCapacity += str.length();
		char* temp = nullptr;
		temp = new char[maxCapacity];
		strcpy_s(temp, maxCapacity, buffer);
		delete[] buffer;
		buffer = new char[maxCapacity];
		strcat_s(temp, maxCapacity, str.buffer);
		buffer = temp;

	}//if

	else{
		strcat_s(buffer, maxCapacity, str.buffer);
	}//else

}//+=

void mString::operator = (const mString& str)
{
	if (str.length() + 1 > maxCapacity){

		maxCapacity = str.length() + 1;

		delete[] buffer;

		buffer = new char[maxCapacity];
		strcpy_s(buffer, maxCapacity, str.buffer);

	}//if
	else if (str.length() + 1 <= maxCapacity){

		strcpy_s(buffer, str.length() + 1, str.buffer);

	}//else if

}//operator =


mString mString::operator + (const mString& str)const{

	mString concat(buffer);
	int len = strlen(str.buffer) + maxCapacity;
	concat.buffer = new char[len];
	strcpy_s(concat.buffer, maxCapacity, buffer);
	strcat_s(concat.buffer, len, str.buffer);
	return concat;

}//operator +

unsigned int mString::capacity()const{

	return maxCapacity;

}//capacity

void mString::clean(){

	strcpy_s(buffer, maxCapacity, "");
}//clean

void mString::shrink_to_fit(){

	if (maxCapacity > length() + 1){
		maxCapacity = length() + 1;
		delete[] buffer;
		buffer = new char[maxCapacity];

	}//if

	else{

		printf("The capacity is already the string length\n");
	}//else
}//shrink_to_fit

