#ifndef _VECTOR_
#define _VECTOR_
#include "global.h"
#include <assert.h>
template <class TYPE>

class Vector{
private:

	TYPE * buffer;
	unsigned int Capacity = 10;
	unsigned int num_elements = 0;

public:

	Vector(){

		buffer = new TYPE[Capacity];

	}// constructor

	Vector(const Vector&other){


		Capacity = other.num_elements;
		buffer = new TYPE[Capacity];

		if (other.num_elements > 0){

			num_elements = other.num_elements;

			for (unsigned int i = 0; i < num_elements; i++){

				buffer[i] = other.buffer[i];

			}
		}

	}//constructor copy


	Vector(unsigned int size){
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

		assert(index < num_elements);

		return buffer[index];

	}

	TYPE &operator[] (unsigned int index) {

		assert(index < num_elements);

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

		if (max_size != n_elements){

			TYPE *temp = nullptr;
			max_size = num_elements;
			temp = new TYPE[max_size];

			for (int i = 0; i < max_size; i++){

				temp[i] = buffer[i];
			
			}//for

			delete[]buffer;
			buffer = temp;
		}//if
	}//shrink to fit




};// VECTOR CLASS

#endif

// en el fondo solo neceitas un solo vector para 