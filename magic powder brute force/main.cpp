#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n ,k ,c =0;
ll arr [100005],arr2[100005],arr3[100005];
bool solve (ll n)
{
    ll x= k;
    for (ll i=0;i<100005;i++)
    {
        arr3[i]=n*arr[i];
        if (arr2[i]<arr3[i])
        {
            ll m =arr3[i]-arr2[i];
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
    cin>>n>>k;
    for (ll i=0;i<n;i++)
        cin >>arr[i];
    for (ll i=0;i<n;i++)
        cin >>arr2[i];
    while ( true )
    {
        c++;
        if (!solve(c))
            break;
    }
    cout<<c-1;
    return 0;
}

