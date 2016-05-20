/**
*   Design a CargoShip class that is derived from the Ship class. The CargoShip class
*   should have the following members:
*   • A member variable for the cargo capacity in tonnage (an int).
*   • A constructor and appropriate accessors and mutators.
*   • A print function that overrides the print function in the base class. The CargoShip
*   class’s print function should display only the ship’s name and the ship’s cargo capacity.
*/

#include "CargoShip.h"
#include <iostream>

CargoShip::CargoShip(std::string name, int capacity) : Ship(name)
{
    cargoCapacity = capacity;
}

void CargoShip::setCargoCapacity(int cap) {
    cargoCapacity = cap;
}

int CargoShip::getCargoCapacity() {
    return cargoCapacity;
}

void CargoShip::print() {
    std::cout << "The " << name << " has a cargo capacity of " << cargoCapacity;
    std::cout << " tonnes." << std::endl;
}

CargoShip::~CargoShip()
{
    //dtor
}

/*
public:
        CargoShip();
        void setCargoCapacity(int cap);
        int getCargoCapacity();
        void print();
        ~CargoShip();
    private:
        int cargoCapacity;
*/
