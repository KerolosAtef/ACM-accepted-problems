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
ll n ,k ;
ll arr [100005];
bool solve (ll mid)
{
    ll temp=k ;
    ll ans =arr[0]+mid-1;
    temp--;
    while (ans < arr[n-1])
    {
        ans =*upper_bound(arr ,arr+n,ans);
        ans +=mid-1;
        temp --;
        if (temp <0)
            return 0;
    }
    return 1;
}
int main()
{
    in ;
    int t ;
    cin >>t;
    while(t>0)
    {
        cin >> n >>k;
        for (int i=0;i<n;i++)
            cin>>arr[i];
        ll l= 0, r=1000000000 ,mid ;
        while (l<r )
        {
            mid =(l+r)/2;
            if (solve( mid))
               r=mid;
            else
                l=mid+1;
        }
        cout<<l<<endl;
        t--;
    }
    return 0;
}
