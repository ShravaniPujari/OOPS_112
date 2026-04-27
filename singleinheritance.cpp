#include<iostream>
using namespace std;

class A
{
public:
    int rollno;

    void display()
    {
        cout << "RollNo:" << rollno << endl;
    }
};

class B: public A
{
public:
    string name;
};



int main()
{
    B b1;
    b1.name = "Shravani";
    b1.rollno = 112;


    cout << "Name:" << b1.name << endl;
    b1.display();

    return 0;
}
