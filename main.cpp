/** Michael Giaramito 5413445
*   15.12 Ship, CruiseShip and CargoShip
*
*   Design a Ship class that has the following members:
*   • A member variable for the name of the ship (a string)
*   • A member variable for the year that the ship was built (a string)
*   • A constructor and appropriate accessors and mutators
*   • A virtual print function that displays the ship’s name and the year it was built.
*
*   Design a CruiseShip class that is derived from the Ship class. The CruiseShip class
*   should have the following members:
*   • A member variable for the maximum number of passengers (an int)
*   • A constructor and appropriate accessors and mutators
*   • A print function that overrides the print function in the base class. The CruiseShip
*   class’s print function should display only the ship’s name and the maximum number
*   of passengers.
*
*   Design a CargoShip class that is derived from the Ship class. The CargoShip class
*   should have the following members:
*   • A member variable for the cargo capacity in tonnage (an int).
*   • A constructor and appropriate accessors and mutators.
*   • A print function that overrides the print function in the base class. The CargoShip
*   class’s print function should display only the ship’s name and the ship’s cargo capacity.
*
*   Programming Challenges 967
*   968 Chapter 15 Inheritance, Polymorphism, and Virtual Functions
*   Demonstrate the classes in a program that has an array of Ship pointers. The array
*   elements should be initialized with the addresses of dynamically allocated Ship,
*   CruiseShip, and CargoShip objects. (See Program 15-14, lines 17 through 22, for an
*   example of how to do this.) The program should then step through the array, calling
*   each object’s print function.
*/

#include <iostream>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

using namespace std;

int main()
{
    /*Ship *santaMariaPtr = new Ship;
    santaMariaPtr->setName("Santa Maria");
    santaMariaPtr->setYear("1763");
    //santaMariaPtr->print();

    CruiseShip *CarnivalPtr = new CruiseShip;
    CarnivalPtr->setName("Carnival");
    CarnivalPtr->setMaxPassengers(4860);
    //CarnivalPtr->print();

    CargoShip *MSC_Maya = new CargoShip;
    MSC_Maya->setName("MSC Maya");
    MSC_Maya->setCargoCapacity(19224);
    //MSC_Maya->print();*/

    Ship* shipYard[] {new Ship("Ship"), new CruiseShip("Cruise", 500), new CargoShip("Cargo", 1000)};

    /*
    shipYard[0]->setName("Santa Maria");
    shipYard[0]->setYear("1763");
    shipYard[1]->setName("Carnival");
    //shipYard[1]->setMaxPassengers(4860);
    shipYard[2]->setName("MSC Maya");
    //shipYard[2]->setCargoCapacity(19224);
    */

    for (int i = 0; i < sizeof(shipYard) / sizeof(Ship*); i++) {
        shipYard[i]->print();
    }

    for (int i = 0; i < sizeof(shipYard) / sizeof(Ship*); i++) {
        delete shipYard[i];
    }

    cout << "Press and key and return to exit ";
    char c;
    cin >> c;

    return 0;
}
