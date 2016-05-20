/**
*   Design a CargoShip class that is derived from the Ship class. The CargoShip class
*   should have the following members:
*   • A member variable for the cargo capacity in tonnage (an int).
*   • A constructor and appropriate accessors and mutators.
*   • A print function that overrides the print function in the base class. The CargoShip
*   class’s print function should display only the ship’s name and the ship’s cargo capacity.
*/

#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include<string>
#include<iostream>
#include "Ship.h"

class CargoShip : public Ship
{
    public:
        CargoShip(std::string name, int capacityIn);
        void setCargoCapacity(int cap);
        int getCargoCapacity();
        virtual void print();
        virtual ~CargoShip();
    private:
        int cargoCapacity;
};

#endif // CARGOSHIP_H
