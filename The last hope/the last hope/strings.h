#ifndef _STRINGS_
#define _STRINGS_

class mString{

	char* buffer = nullptr;
	unsigned int Capacity;

public:

	// constructors - destructors-----
	mString();
	mString(const char*str);//builder
	mString(const mString& str);// copy builder
	~mString();//destroyer
	
	//methods------------

	unsigned int length()const;
	const char* C_str()const;
	bool empty()const;
	unsigned int capacity()const;
	void clean();
	void shrink_to_fit();
	Vector<mString*>Tokenize();

	//operators --------------
	bool operator == (const mString& str)const;
	bool mString::operator == (const char* str)const;
	void operator += (const mString& str);
	void operator =(const mString& str);
	mString operator + (const mString& str)const;

	
};

#endif