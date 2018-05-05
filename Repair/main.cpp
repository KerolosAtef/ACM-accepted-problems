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
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);

    ll a,b,a1,b1,a2,b2;
    cin>>a>>b>>a1>>b1>>a2>>b2;
    if ((a1+a2<=a&&max(b1,b2)<=b)||(a1+a2<=b&&max(b1,b2)<=a))
        cout<<"YES";
    else if ((a1+b2<=a&&max(a2,b1)<=b)||(a1+b2<=b&&max(a2,b1)<=a))
        cout<<"YES";
    else if ((a2+b1<=a&&max(a1,b2)<=b)||(a2+b1<=b&&max(a1,b2)<=a))
        cout<<"YES";
    else if ((b1+b2<=a&&max(a1,a2)<=b)||(b2+b1<=b&&max(a1,a2)<=a))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
