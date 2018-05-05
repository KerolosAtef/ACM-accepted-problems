#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n ,k;
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
        scanf("%lld",&arr[i]);
    for (ll i=0;i<n;i++)
        scanf("%lld",&arr2[i]);
    if ( ! solve(1))
    {
        printf("0");
        return 0;
    }
    ll l=0 , r=1000000000*2 ,mid=(r+l)/2;
    while ( l<=r )
    {
        if (solve( mid))
            l=mid+1;
        else
            r=mid-1;
        mid=(r+l)/2;
    }
    mid+=2;
    while(!solve(mid))
        mid--;
    printf("%d",mid);
    return 0;
}
