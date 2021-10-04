#include "animal.h"

Animal::Animal(){
    std::cout<<"Animal Created"<<std::endl;
}

Animal::Animal(std::string name){
    this->name = name;
}

void Animal::set_name(std::string){
    this->name = name;
}

void Animal::speak(){
    std::cout<<"My name is "<<this->name<<std::endl;
}
