#ifndef _VECTOR_
#define _VECTOR_

#define MAX 100

#include <assert.h>
class mString;
template <class TYPE>

class Vector{
public:
	TYPE* buffer;
	unsigned int Capacity;
	unsigned int num_elements = 0;
public:

	Vector<TYPE>(){
		Capacity = MAX;
		buffer = new TYPE[Capacity];

	}// constructor

	Vector<TYPE>(const Vector<TYPE>&other){


		Capacity = other.num_elements;
		buffer = new TYPE[Capacity];

		if (other.num_elements > 0){

			num_elements = other.num_elements;

			for (unsigned int i = 0; i < num_elements; i++){

				buffer[i] = other.buffer[i];

			}
		}

	}//constructor copy

	Vector<TYPE>(unsigned int size){
		buffer = new TYPE[size];
	}

	~Vector(){ delete[] buffer;  }//destructor

	//--------------------------

	void push_back(const TYPE& value){

		TYPE* temp = nullptr;

		if (Capacity == num_elements){

			Capacity += 15;

			temp = new TYPE[Capacity];

			for (unsigned int i = 0; i < num_elements; i++){
				*(temp + i) = *(buffer + i);
			}//for

			delete[] buffer;
			buffer = temp;

		}//if

		*(buffer + num_elements++) = value;

	}//pushback

	void push_front(const TYPE &value){

		if (max_size == num_elements){

			TYPE *temp = nullptr;
			Capacity + = 5;
			temp = new TYPE[Capacity];

			for (int i = 0; i < num_elements; i++){

				*(temp + i) = *(buffer + i);

			}//for

			delete[] buffer;
			buffer = temp;

		}//if

		for (int i = num_elements - 1; i >= 0; i--){

			*(buffer + i + 1) = *(buffer + i);

		}//for

		*(buffer) = value;

		num_elements++;

	}//push front

	void pop_back(){

		if (num_elements > 0){

			num_elements--;

		}//if

	}//pop_back

	//--------------------------

	TYPE operator[](unsigned int &index)const{

		assert(index < 100);

		return buffer[index];

	}

	TYPE &operator[] (unsigned int index) {

		assert(index < 100);

		return buffer[index];

	}
	
	//--------------------------

	bool empty() const
	{
		return num_elements == 0;
	}//took empty 

	void clear(){
		num_elements = 0;
	}//cleaning

	unsigned int size() const{
		return num_elements;
	}//size

	unsigned int capacity()const{
		return max_size;
	}//Capacity

	void shrink_to_fit(){

		if (Capacity != num_elements){

			TYPE *temp = nullptr;
			Capacity = num_elements;
			temp = new TYPE[Capacity];

			for (uint i = 0; i < Capacity; i++){

				temp[i] = buffer[i];
			
			}//for

			delete[]buffer;
			buffer = temp;
		}//if
	}//shrink to fit

	
	void Remove(unsigned int index){

		for (unsigned int i = index; i < num_elements; i++){
			buffer[i] = buffer[i + 1];
		}
		num_elements--;

		this->shrink_to_fit();
	}


};// VECTOR CLASS

#endif
