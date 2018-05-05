#include <iostream>

using namespace std;

int main()
{
    int y ;
    int  x [6];

    for (int i = 0 ; i <5;i++)
    {
        cin >> x[i];
        y= x [0];
        if (y<x[i])
            y=x[i];
    }
    cout << y;
    return 0;
}
