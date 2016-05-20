/**
*   Design a CruiseShip class that is derived from the Ship class. The CruiseShip class
*   should have the following members:
*   • A member variable for the maximum number of passengers (an int)
*   • A constructor and appropriate accessors and mutators
*   • A print function that overrides the print function in the base class. The CruiseShip
*   class’s print function should display only the ship’s name and the maximum number
*   of passengers.
*/

#include "CruiseShip.h"
#include <iostream>

CruiseShip::CruiseShip(std::string name, int passengersIn) : Ship(name)
{
    maxPassengers = passengersIn;
}

int CruiseShip::getMaxPassengers() {
    return maxPassengers;
}

void CruiseShip::setMaxPassengers(int maxPass) {
    maxPassengers = maxPass;
}

void CruiseShip::print() {
    std::cout << "The " << name << " has a passenger capacity of " << maxPassengers << std::endl;
    //std::cout << "(Or around 5,000 when the inspector get's paid correctly)" << std::endl;
}

CruiseShip::~CruiseShip()
{
    //dtor
}
