#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
#define oo  1000000000
#define N   100000
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

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n,k,t,ans=0;
    cin >>n>>k>>t ;
    if (t>k)
        ans=k;
    else if (t>n)
        ans= t-n;
    if (t>n && t>k)
        ans=abs(n-(t-k));
    if (ans==0)
        ans=t;

    cout<<ans;

    return 0;
}
