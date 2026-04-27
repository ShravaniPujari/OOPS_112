#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;
    int area;

    void display()
    {
        cout<<"Length:" << length <<endl;
        cout << "Width:" << width << endl;
        area=length*width;
        cout << "Area:" << area << endl;

    }
};

int main()
{
  Rectangle r1;
  r1.length=23;
  r1.width=12;
  r1.display();
  return 0;

}
