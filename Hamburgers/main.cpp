#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll arr[3],arr2[3],arr3[3],arr4[3];
ll r;
bool solve (ll n)
{
    ll x = r ;
    for (ll i=0;i<3;i++)
    {
        arr4[i]=n*arr[i];
        if (arr4[i]!=0&&arr2[i]<arr4[i])
        {
            ll m =arr4[i]-arr2[i];
            m=m*arr3[i];
            if (x>=m)
                x=x-m;
            else
                return false ;
        }
    }
    return true;
}

int main()
{
    string x;
    cin >>x;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]=='B')arr[0]++;
        else if (x[i]=='S')arr[1]++;
        else arr[2]++;
    }
    for (int i=0;i<3;i++)
        cin>>arr2[i];
    for (int i=0;i<3;i++)
        cin>>arr3[i];
    cin >>r;
    ll l=0 , r=2*1000000000000,mid=(r+l)/2;
    while ( l<=r )
    {
        if (solve( mid))
            l=mid+1;
        else
            r=mid-1;
        mid=(r+l)/2;
    }
    cout<<mid;
    return 0;
}
