#ifndef _STRINGS_
#define _STRINGS_
#include "Vector.h"

class mString{
public:

	char* buffer=nullptr;
	unsigned int Capacity=0;

public:

	// constructors - destructors-----
	mString();
	mString(const char*str);//builder
	mString(const mString& str);// copy builder
	~mString();
	
	//methods------------

	unsigned int length()const;
	char* C_str()const;
	bool empty()const;
	unsigned int capacity()const;
	void clean();
	void shrink_to_fit();

	

	//operators --------------
	bool operator == (const mString& str)const;
	bool mString::operator == (const char* str)const;

	bool operator != (const mString& str)const;
	bool mString::operator != (const char* str)const;

	void operator += (const mString& str);
	void operator =(const mString& str);
	mString operator + (const mString& str)const;
	
	Vector<mString*> Tokenize();

	mString S_str()const;
};

#endif