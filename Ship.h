/**
*   Design a Ship class that has the following members:
*   • A member variable for the name of the ship (a string)
*   • A member variable for the year that the ship was built (a string)
*   • A constructor and appropriate accessors and mutators
*   • A virtual print function that displays the ship’s name and the year it was built.
*/

#ifndef SHIP_H
#define SHIP_H
#include<iostream>

//using namespace std;


class Ship
{
    public:
        Ship(std::string name);
        std::string getName();
        void setName(std::string name);
        std::string getYearBuilt();
        void setYear(std::string yar);
        virtual void print();
        virtual ~Ship();
    protected:
        std::string name;
    private:
        std::string year;
};

#endif // SHIP_H
