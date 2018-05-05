#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n, t;
ll arr [300005],arr2[300005];
bool solve (ll mid)
{
    for (ll i =1 ;i+mid-1 <=n ;i++)
    {
        if (arr[i+mid-1]-arr[i-1] <= t)
            return true;
    }
    return false;
}
void new_arr (ll mid)
{
    for (ll i =1 ;i+mid-1 <=n ;i++)
        if (arr[i+mid-1]-arr[i-1] <= t)
            for (int j =i ;j <= i+mid-1 && t>0;j++)
                if (arr2[j]==0)
                {
                  arr2[j]=1;
                  t--;
                }
}
int main()
{
    scanf("%lld %lld",&n,&t);
    for (ll i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
        arr2[i]=arr[i];
        if (arr[i]==0)arr[i]=arr[i-1]+1;
        else arr[i]=arr[i-1];
    }
    ll l=0 ,r= 2*n , mid =(l+r)/2;
    while (l<=r )
    {
        if (solve( mid))
            l=mid+1;
        else
            r=mid-1;
        mid =(l+r)/2;
    }
    printf("%lld\n",mid);
    new_arr(mid);
    for (int i=1;i<=n;i++)
        printf("%lld ",arr2[i]);
    return 0;
}
