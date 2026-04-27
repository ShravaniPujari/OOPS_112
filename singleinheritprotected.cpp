#include<iostream>
using namespace std;

class A
{
protected:
    int rollno;
    string name;
};

class B: public A
{
public:
    void setData(int a,string b)
    {
        rollno=a;
        name=b;
    }

    void display()
    {
        cout << "RollNo:" << rollno << endl;
        cout << "Name:" << name << endl;
    }
};



int main()
{
    B b1;
    b1.setData(112,"Shravani");

    b1.display();

    return 0;
}
