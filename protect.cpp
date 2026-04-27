#include<iostream>
using namespace std;

class Base
{
protected:
    int x;
};

class derived : public Base
{
 public:
    void setData(int a)
    {
        x=a;
    }

    void display()
    {
        cout << "Number: " << x;
    }

};




int main()
{
    derived d1;
    d1.setData(23);
    d1.display();

}
