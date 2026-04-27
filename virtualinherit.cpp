#include<iostream>
using namespace std;

class A
{
public:
    int i;
};

class B: virtual public A
{
public:
    int j;
};

class C: public virtual A
{
public:
    int k;
};

class D: public B, public C
{
public:
    int sum;
};

int main()
{
    D a1;
    a1.i=10;
    a1.j=20;
    a1.k=30;
    a1.sum=a1.i+a1.j+a1.k;
    cout<<a1.sum;
}
