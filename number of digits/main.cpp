#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*****************************
    int x;
    cin>> x;
    int i=10;
    int j=1;
    while (true)
    {
        if (x<i)
        {
            cout << j<< " ";
            break;
        }
        else
        {
           i*=10;
           j++;
        }

    }
    *****************************************/


   /**************** with built in function
    int x;
    cin >> x;
    stringstream ss;
    ss<<x;
    string y=ss.str();
    cout << y.length();
    ****************************************/




    return 0;
}
