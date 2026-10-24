#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter 2 values: ";
    cin >> a >> b; 

    try
    {
        if(b==0)
        {
            throw b;
        }

    c = a / b;

    cout << "\n the divsion result is:";
    cout << c << endl ;
    }

    catch (int x)
    {
        cout << "denominator cannot be zero";
        cout << "\ndivide by" << x ;
    }


    cout<<"\nat the end of the main function";

    return 0;
}