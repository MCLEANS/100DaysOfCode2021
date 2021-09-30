#include <iostream>

/**
 * 1. Create a pointer to an integer
 * 2. Print out the address of the pointer
 * 3. Print out the value stored in the pointer address using the pointer
 * 4. When we pass in a parameter by reference the address of the data is passed and
 * not a copy
 */

void access_value(double *value){
	*value = 233.90;
}

int main(){
	int my_interger = 23;
	int* pointer_to_my_interger = &my_interger;
	std::cout<<"The address of the pointer is "<<pointer_to_my_interger<<std::endl;
	std::cout<<"The value stored in the pointer address is "<<*pointer_to_my_interger<<std::endl;

	std::cout<<"----------------------------------------------------------"<<std::endl;
	double my_value = 56.90;
	std::cout<<"1. My value is "<<my_value<<std::endl;
	access_value(&my_value);
	std::cout<<"2. My value is "<<my_value<<std::endl;
	return 0;
}
