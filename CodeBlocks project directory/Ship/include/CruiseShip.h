/**
*   Design a CruiseShip class that is derived from the Ship class. The CruiseShip class
*   should have the following members:
*   • A member variable for the maximum number of passengers (an int)
*   • A constructor and appropriate accessors and mutators
*   • A print function that overrides the print function in the base class. The CruiseShip
*   class’s print function should display only the ship’s name and the maximum number
*   of passengers.
*/

#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include <string>
#include <iostream>
#include "Ship.h"


class CruiseShip : public Ship
{
    public:
        CruiseShip(std::string name, int passengers);
        int getMaxPassengers();
        void setMaxPassengers(int maxPass);
        virtual void print();
        virtual ~CruiseShip();
    private:
        int maxPassengers;
};

#endif // CRUISESHIP_H
