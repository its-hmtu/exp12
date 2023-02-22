#include "Ship.h"
#pragma once

// dinh nghia class CruiseShip la subclass cua class Ship
class CruiseShip : public Ship
{
    // khoi tao thuoc tinh voi quyen truy cap private
    private:
        int maxPassenger;

    public:
        // ham khoi tao - constructor
        CruiseShip(string shipName = "", string yearBuilt = "", int maxPassenger = 0);
        
        // ham huy - destructor
        virtual ~CruiseShip();

        // method gettet va setter
        int getMaxPassenger() const;
        void setMaxPassenger(int maxPassenger);

        // method display de in ra man hinh thong tin cua cruise ship
        virtual void display();
};