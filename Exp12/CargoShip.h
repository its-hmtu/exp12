#include "Ship.h"
#pragma once

// dinh nghia class CargoShip la subclass cua class Ship
class CargoShip : public Ship 
{
    // khoi tao thuoc tinh voi quyen truy cap private
    private: 
        int capacity;
    
    public:
        // ham khoi tao - constructor
        CargoShip(string shipName = "", string yearBuilt = "", int capacity = 0);
        
        // ham huy - destructor    
        virtual ~CargoShip();

        // method gettet va setter
        int getCapacity() const;
        void setCapacity(int capacity);

        // method display de in ra man hinh thong tin cua cruise ship
        virtual void display();
};