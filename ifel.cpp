# include<iostream>
using namespace std;

int main()
{
int age;
cout << "enter your age: ";

cin >> age;

if(age>150 || age<4)
{
cout << "invalid age";
}
else if (age>18)
{
cout << "you can vote";
}
else
{
cout << "you cannot vote";
}
}
