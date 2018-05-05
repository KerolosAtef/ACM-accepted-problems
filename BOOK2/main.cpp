#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n ,t ;
ll arr [100005];
bool solve(ll mid )
{
    for(int i = 1 ; i+mid-1 <= n ; i++)
    {
        if(arr[i+mid-1] - arr[i-1] <= t)
            return 1;
    }
    return 0;
}
int main()
{
    scanf("%lld %lld",&n,&t);
    for (ll i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
        if(i>1)arr[i]+=arr[i-1];
    }
    ll l=0 ,r=2*n ,mid =(r+l)/2;
    while ( l<=r)
    {
        if (solve(mid))
            l=mid+1;
        else
            r=mid-1;
        mid=(r+l)/2;
    }
    printf("%lld",mid);
    return 0;
}
