#include "animal.h"

Animal::Animal(){
    std::cout<<"Animal Created"<<std::endl;
}

Animal::Animal(std::string name){
    this->name = name;
    std::cout<<"Animal created"<<std::endl;
}

void Animal::set_name(std::string name){
    this->name = name;
}

void Animal::speak(){
    std::cout<<"My name is "<<this->name<<std::endl;
}

Animal::~Animal(){
    std::cout<<"Animal destroyed"<<std::endl;
}
