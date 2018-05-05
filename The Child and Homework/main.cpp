#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    int y,n=0,m=0,z,k;
    int arr [4];
    int arr1 [4];
    int arr2[4];
    int arr3 [4];
    for (int i=0;i<4;i++)
    {
        cin >> x;
        y=x.length();
        y=y-2;
        arr[i]=y;
        arr1[i]=y;
        arr2[i]=y/2;
        arr3 [i]=y*2;
    }
    sort (arr,arr+4);
    sort (arr2,arr2+4);
    sort (arr3,arr3+4);
    for (int i=1,j=2;i<4;i++,j--)
    {
        if (arr [0]<=arr2[i])
        {
            m++;
        }
        if (arr [3]>=arr3[j])
        {
            n++;
        }
    }
    for (int i=0; i <4;i++)
    {
       if ( arr[0]==arr1[i])
       {
           z=i;
       }
       if (arr [3]==arr1 [i])
       {
           k=i;
       }
    }
    if (n==3&&m==3)
    {
        cout << "C";
    }
    else if (n==3)
    {
        if (k==0)
        cout <<"A";
        else if (k==1)
        cout <<"B";
        else if (k==2)
        cout <<"C";
        else if (k==3)
        cout <<"D";
    }
    else if (m==3)
    {
        if (z==0)
        cout <<"A";
        else if (z==1)
        cout <<"B";
        else if (z==2)
        cout <<"C";
        else if (z==3)
        cout <<"D";
    }
    else
    {
        cout << "C";
    }
    return 0;
}
