#include <iostream>

/**
 * 1. Create a pointer to an integer
 * 2. Print out the address of the pointer
 * 3. Print out the value stored in the pointer address using the pointer
 */

int main(){
	int my_interger = 23;
	int* pointer_to_my_interger = &my_interger;
	std::cout<<"The address of the pointer is "<<pointer_to_my_interger<<std::endl;
	std::cout<<"The value stored in the pointer address is "<<*pointer_to_my_interger<<std::endl;
	return 0;
}
