#ifndef _STRINGS_
#define _STRINGS_

class mString{

	char* buffer = nullptr;
	unsigned int maxCapacity;

public:

	mString(const char*str);//builder
	mString(const mString& str);// copy builder

	~mString();//destroyer


	unsigned int length()const;
	const char* C_str()const;
	bool empty()const;

	bool operator==(const mString str)const;
	bool operator == (const char* str)const;
	void operator += (const mString& str);
	void operator =(const mString& str);
	mString operator + (const mString& str)const;
	void clean();
	unsigned int capacity()const;
	void shrink_to_fit();
};

#endif