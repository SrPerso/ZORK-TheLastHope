#include <stdio.h>
#include "strings.h"
#include <iostream>
#include <ctype.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
//-------------construuctors--------------- 

mString::mString(){
	
}

mString::mString(const char * str){


	Capacity = strlen(str)+1;

	buffer = new char[Capacity];

	strcpy_s(buffer, Capacity, str);


}//builder

mString::mString(const mString & str){


	Capacity = strlen(str.buffer)+1;

	buffer = new char[Capacity];

	strcpy_s(buffer, Capacity, str.buffer);


}//copybuilder

mString::~mString(){

delete[] buffer;

}//destroyer


//---------------methods------------- 

unsigned int mString::length()const{

	return strlen(buffer);

}



char* mString::C_str()const{

	return buffer;

}
mString mString::S_str()const{

	mString copy(buffer);
	return copy;
}

bool mString::empty()const{

	return (strlen(buffer) == 0);

}

unsigned int mString::capacity()const{
	return Capacity;
}


void mString::clean()
{
	strcpy_s(buffer, Capacity, "");
}


void mString::shrink_to_fit()
{
	if (Capacity > length() + 1){
		Capacity = length() + 1;
		delete[] buffer;
		buffer = new char[Capacity];
	}
	else{
		printf("the cap");
	}
}

Vector<mString*> mString::Tokenize(){

		Vector<mString*> token;
		char *context = nullptr;
		token.push_back(new mString(strtok_s(this->buffer, " ", &context)));

		while (strcmp(context, "") != 0){
			token.push_back(new mString(strtok_s(NULL, " ", &context)));
		}
		return token;
}//tokenizee





//------------Operators---------------- 

bool mString::operator == (const mString& str)const{

	return(strcmp(buffer, str.buffer) == 0);

}

bool mString::operator == (const char* str)const{

	return(strcmp(buffer, str) == 0);

}


bool mString::operator != (const mString& str)const{

	return(strcmp(buffer, str.buffer) != 0);

}

bool mString::operator != (const char* str)const{

	return(strcmp(buffer, str) != 0);

}

void mString::operator += (const mString& str){

	if (str.length() + length() + 1 > Capacity)	{

		Capacity += str.length();
		char* temp = nullptr;
		temp = new char[Capacity];
		strcpy_s(temp, Capacity, buffer);
		delete[] buffer;
		buffer = new char[Capacity];
		strcat_s(temp, Capacity, str.buffer);
		buffer = temp;

	}
	else{
		strcat_s(buffer, Capacity, str.buffer);
	}

}

void mString::operator = (const mString& str){

	if (str.length() + 1 > Capacity){

		Capacity = str.length() + 1;
		delete[] buffer;
		buffer = new char[Capacity];
		strcpy_s(buffer, Capacity, str.buffer);

	}

	else if (str.length() + 1 <= Capacity){

		strcpy_s(buffer, str.length() + 1, str.buffer);

	}
}
/*
mString mString::operator + (const mString& str)const{

	mString concat(buffer);
	int len = strlen(str.buffer) + Capacity;
	concat.buffer = new char[len];
	strcpy_s(concat.buffer, Capacity, buffer);
	strcat_s(concat.buffer, len, str.buffer);

	return concat;

}*/
