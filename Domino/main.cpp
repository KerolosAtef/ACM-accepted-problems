#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
keroooooooooo
*/
int main()
{
    int a,b,n,x=0,y=0,sec =0;
    cin >>n;
    pair <int,int> arr [n];
    for (int i =0 ;i < n;i++)
    {
        cin >> a>>b;
        arr [i]={a,b};
        x+=a;
        y+=b;
    }
    for (int i =0 ;i < n;i++)
    {
        if (x %2 ==1 || y%2==1)
        {
            x=x-arr[i].first ;
            x=x+arr[i].second ;
             y=y-arr[i].second ;
            y=y+arr[i].first ;
            if (x %2 ==1 || y%2==1)
            {
            x=x-arr[i].second ;
            x=x+arr[i].first;
             y=y-arr[i].first;
            y=y+arr[i].second ;
            }
            else
            {
                sec ++;
                cout << sec;
                return 0;
            }
        }
    }
    if (x %2 ==1 || y%2==1)
    {
        cout << -1;
    }
    else
    {
    cout << sec ;
    }
    return 0;
}
