#ifndef ANIMAL_H
#define ANIMAL_H 

#include <iostream>

class Animal{
    private:
        std::string name;
    private:
    public:
    public:
        Animal();
        Animal(std::string name);
        void set_name(std::string name);
        void speak();
        ~Animal();
};


#endif //ANIMAL_H