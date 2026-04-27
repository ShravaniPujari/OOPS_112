#include<iostream>
using namespace std;

class Student
{

private:
 string id;
 string name;
 int marks;

public:
    void setData(string d, string n ,int m);
    void display();
};

void Student::setData(string d,string n,int m)
{
    id=d;
    name=n;
    marks=m;
}

void Student:: display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main()
{
    Student s1;
    s1.setData("01fe24bec401", "Shrusti", 101);
    s1.display();
    return 0;
}


