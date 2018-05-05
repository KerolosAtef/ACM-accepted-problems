#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a,q;
int main()
{
    int n,c,x,z,y,k,m=0,g,b=0;
    cin >> n>> c;
    int arr [n];
    vector <int> v;
    for (int i=0;i<n;i++)
    {
        cin >>x;
        arr[i]= x;
    }
    for (int j=0 ;j<n-1;j++)
    {
        if (arr[j]>arr[j+1])
        {
            y=arr [j]-arr[j+1];
            v.push_back(y);
            b ++;
            q=j;
        }
    }

    if (b>1)
    {
    sort (v.begin(),v.end(),greater <int> ());
    z= v[0];
    for (int l=0 ;l<n-1;l++)
    {
        if (arr[l] > arr[l+1])
        {
            g=arr [l]-arr[l+1];
            if (z==g)
            {
                a= l;
            }
        }
    }

    k= arr[a]-arr[a+1]-c;
    if (k>=0)
     {
       cout << k ;
     }
    else
     {
       cout << 0;
     }
     }
    else if (b==1)
    {
     k= arr[q]-arr[q+1]-c;
     if (k>=0)
     {
    cout << k ;
    }
    else
    {
      cout << 0;
    }
    }
   else
    {
        cout << 0;
    }

    return 0;
}
