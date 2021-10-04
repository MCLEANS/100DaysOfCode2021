#include <iostream>
#include "animal.h"

int main(){
		/* Create animal object and make it speak */
		{
			Animal cat;
			cat.set_name("Tom");
			cat.speak();
		}
		
		/* Create animal object in the heap using new operator */
		Animal *dog  = new Animal("Garfield");
		dog->speak();
		delete dog;

	return 0;
}
