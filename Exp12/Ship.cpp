#include "Ship.h"

//constructor

Ship::Ship(string shipName, string yearBuilt)
{
    this->shipName = shipName;
    this->yearBuilt = yearBuilt;
}

Ship::Ship() {}

//destructor
Ship::~Ship() {}

//getter
string Ship::getShipName() const { return shipName; }

string Ship::getYearBuilt() const { return yearBuilt; }


//setter
void Ship::setYearBuilt(string yearBuilt) { this->yearBuilt = yearBuilt; }

void Ship::setShipName(string name) { this->shipName = shipName; }

//print ship name and year built
void Ship::display() 
{
    cout << "Ship Name: " << Ship::getShipName() << endl;
    cout << "Year Built: " << Ship::getYearBuilt() << endl;
}
