#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
#define oo  1000000000
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
int a ,b, c;
bool solve (ll mid )
{
    if ((mid +c)*b < a*c)
        return 1;
    else
        return 0;
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);

    cin >>a>>b>>c ;
    ll l= 0, r= oo,mid ;
    while (l<r)
    {
        mid =(l+r+1)/2;
        if (solve(mid))
            l=mid;
        else
            r=mid-1;
    }
    cout<< l+1;

    return 0;
}
