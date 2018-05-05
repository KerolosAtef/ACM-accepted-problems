#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,z,c=0,x;
    cin >>n>>a;
    int arr[1000];
    //memset(arr,0,sizeof arr);
    for (int i=0;i<a;i++)
    {
       cin >>arr [i];
    }
    cin >>b;
    for (int j=0;j<b;j++)
    {
       cin >> arr[a+j];
    }
    z=(a+b);
    sort (arr,arr+z);
    for (int k=0;k<z;k++)
    {
        if (arr[k]==arr[k+1])
        {
            c=c+1;
        }
    }
    x=z-c;
    if (x==n)
        cout <<"I become the guy.";
    else
        cout <<"Oh, my keyboard!";
    return 0;
}
