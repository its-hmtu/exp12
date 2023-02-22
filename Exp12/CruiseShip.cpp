#include "CruiseShip.h"

CruiseShip::CruiseShip(string shipName, string yearBuilt, int maxPassenger) : Ship(shipName, yearBuilt)
{
    this->maxPassenger = maxPassenger;
}

CruiseShip::~CruiseShip() {}

int CruiseShip:: getMaxPassenger() const { return maxPassenger; }

void CruiseShip:: setMaxPassenger(int maxPassenger) { this->maxPassenger = maxPassenger; }

void CruiseShip:: display() 
{
    cout << "Ship name: " << Ship:: getShipName() << endl;
    cout << "Max passenger: " << CruiseShip:: getMaxPassenger() << " passenger" << endl;
}