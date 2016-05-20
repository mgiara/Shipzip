#include <iostream>
#include "Ship.h"


Ship::Ship(std::string nameIn) : name(nameIn)
{
    year = "1872";
}

std::string Ship::getName() {
    return name;
}

void Ship::setName(std::string nameIn) {
    name = nameIn;
}

std::string Ship::getYearBuilt() {
    return year;
}

void Ship::setYear(std::string yearIn) {
    //std::string yar;
    year = yearIn;
}

void Ship::print() {
    std::cout << "The " << name << " was built in " << year << "\n";
}

Ship::~Ship()
{
    //dtor
}
