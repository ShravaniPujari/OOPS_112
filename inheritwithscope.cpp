#include<iostream>
using namespace std;

class Vehicle
{
public:
    int speed;
    void showSpeed();

};

void Vehicle::showSpeed()
    {
        cout << "Speed:" << speed << endl;
    }

class car: public Vehicle
{
public:
    string brand;
};



int main()
{
    car c1,c2;
    c1.brand = "Toyta";
    c1.speed = 120;


    cout << "Brand: " << c1.brand << endl;
    c1.showSpeed();

    return 0;
}
