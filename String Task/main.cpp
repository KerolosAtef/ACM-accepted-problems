#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr2 [6]={'a','e','u','o','y','i'};
    string x;
    cin >>x;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]>='A'&& x[i]<='Z')
        {
            x[i]=(char)(x[i]+32);
        }
        for (int j=0;j <6;j++)
        {
            if (x[i]==arr2[j])
            {
                x.erase(remove (x.begin(),x.end(),arr2[j]),x.end());
                i--;
            }
        }
    }
    int g=2*x.length();
    char arr [g];
    fill(arr,arr+g,'.');
    for(int i=1,j=0;i<g;i+=2,j++)
    {
        arr[i]=x[j];
    }
     for(int i=0;i<g;i++)
    {
        cout << arr[i];
    }


    return 0;
}
