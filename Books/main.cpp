#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
#define oo  1000000000
#define N  100000

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
int arr [N] ;
int n ,t;
bool solve (ll mid )
{
    ll sum;
    for (int i=1;i+mid-1<=n;i++)
    {
        if (arr[i+mid-1]-arr[i-1]<=t)
            return 1;
    }
    return 0;
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    cin >>n>>t;
    for (int i=1;i<=n;i++)
    {
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    ll l =0 , r=n ,mid ;
    while (l<r)
    {
        mid = (l+r+1)/2;
        if (solve (mid))
            l=mid;
        else
            r=mid-1;
    }
    cout<<l;

    return 0;
}
