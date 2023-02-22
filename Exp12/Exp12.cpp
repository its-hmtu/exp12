#include "Ship.cpp"
#include "CruiseShip.cpp"
#include "CargoShip.cpp"
#include <iostream>


int main(void)
{
    Ship** ships = new Ship * [3];
    ships[0] = new Ship("Ship", "2020");
    ships[1] = new CruiseShip("Cruise Ship", "2015", 2000);
    ships[2] = new CargoShip("Cargo Ship", "2016", 10000);

    for (int i = 0; i < 3; i++) 
    { 
        ships[i]->display(); 
        cout << endl;
    }

    return 0;
}