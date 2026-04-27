#include <iostream>
using namespace std;
int m=10;
int main()
{
    int m=20;
    {
        int k=m;
        int m=3;

        cout << "We are int inner blocks\n";

        cout << "k= " <<k<<endl;
        cout << "m= " <<m<<endl;
        cout << "::m = " <<::m<<endl;

    }
        cout << "We are int outer blocks\n";

        cout << "m= " <<m<<endl;
        cout << "::m = " <<::m<<endl;
   return 0;
}

