#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
/***
.
.
.
.
kerolos atef
.
.
.
.
***/
using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
ll t , n ,k ;
ll arr[1000005];
bool solve (ll mid)
{
    ll temp = k-1;
    ll curr =arr[0];
    for (int i=1;i<n;i++)
    {
       if (arr[i]-curr>=mid)
       {
           temp--;
           curr=arr[i];
       }
       if (temp==0)
        return true ;
    }
    return false ;
}
int main()
{
    in ;
    cin >>t ;
    while (t>0)
    {
        cin >>n>>k;
        for (int i=0;i<n;i++)
            cin >>arr[i];
        sort(arr,arr+n);
        ll l=0 , r= 1000000000 , mid ;
        while (l<r)
        {
            mid =(l+r+1)/2;
            if (solve (mid))
                l=mid;
            else
                r=mid-1;
        }
        cout<<l <<endl;
        t--;
    }
    return 0;
}
