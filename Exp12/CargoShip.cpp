#include "CargoShip.h"

CargoShip::CargoShip(string shipName, string yearBuilt, int capacity) : Ship(shipName, yearBuilt) { this->capacity = capacity; }
CargoShip::~CargoShip() {}

void CargoShip::setCapacity(int capacity) { this->capacity = capacity; }
int CargoShip::getCapacity() const { return capacity; }

void CargoShip::display() 
{
    cout << "Ship name: " << Ship:: getShipName() << endl;
    cout << "Capacity: " << CargoShip:: getCapacity() << " tonnage" << endl;
}