#ifndef _STRINGS_
#define _STRINGS_

class mString{

	char* buffer = nullptr;

public:

	mString(const char*str);//builder
	mString(const mString& str);// copy builder

	~mString();//destroyer


	unsigned int lenght()const;
	const char* C_str()const;
	bool empty()const;

	bool operator==(const mString str)const;
};

#endif