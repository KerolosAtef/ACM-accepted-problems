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

int main()
{
    in ;
    ll k,n,w,ans;
    double total ;
    cin >>k>>n>>w;
    total =(w/2.0)*(k*2 +k*(w-1));
    ans= total-n;
    if (ans<0)
        cout<<0;
    else
        cout<<ans;
    return 0;
}
