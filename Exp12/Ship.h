#include <iostream>
using namespace std;
#pragma once // dinh nghia 1 lan, tranh may hieu dinh nghia class Ship nhieu lan

// dinh nghia class Ship
class Ship
{
    // khoi tao 2 thuoc tin voi quyen truy cap private
    private:
        string shipName;
        string yearBuilt;

    public:
        // ham khoi tao - constructor
        Ship(string shipName, string yearBuilt);
        Ship();

        // ham getter va setter
        void setShipName(string shipName);
        void setYearBuilt(string yearBuilt);
        string getShipName() const;
        string getYearBuilt() const;

        //method display de in ra man hinh thong tin cua ship
        virtual void display();

        // ham huy - destructor
        virtual ~Ship();
};