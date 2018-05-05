#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a=0,b=0,v,s;
    cin >> n>>v;
    int arr[n];
   for (int i=0;i<n;i++)
    {
        cin >> k ;
        for (int j=0 ; j<k;j++)
        {
            cin >> s;
            if (s<v)
            {
                a=i+1;
            }
        }
        if (a!=0)
        {
        b=b+1;
        }
        arr [i]=a;
        a=0;

    }
    cout <<b<<"\n";
    sort (arr,arr+n);
   if (b!=0)
    {
        for (int y=0;y<n;y++)
        {
           if (arr[y]!=0)
           {
               cout <<arr[y]<<" ";
           }
        }
    }

    return 0;
}
