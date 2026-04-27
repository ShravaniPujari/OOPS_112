#include<iostream>
using namespace std;

class rectangle
{
private:
  int l;
  int b;

public:
    //default constructor
    rectangle()
    {
       l=0;
       b=0;
    }


    //parameterized constructor

    rectangle(int x,int y)
    {
     l=x;
     b=y;
    }

    //copy constructor

    rectangle(const rectangle &z)
    {
        l=z.l;
        b=z.b;
    }

    // Function to display data
    void display() {
        cout << "length: " << l << ", breadth: " << b << endl;
    }


};




int main() {
    // Using Default Constructor
    rectangle r1;
    r1.display();

    cout << endl;

    // Using Parameterized Constructor
    rectangle r2(101, 23);
    r2.display();

    cout << endl;

    // Using Copy Constructor
    rectangle r3 = r2;
    r3.display();

    return 0;
}
