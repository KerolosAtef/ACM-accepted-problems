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
    ll n ;
    cin >>n ;
    if (n<3)
    {
        cout<<-1;
        return 0;
    }
    if (n%2==0)
    {
        ll b =(n/2)*(n/2)-1;
        cout<<b<< " "<< b+ 2;
    }
    else
    {
        ll a =((n*n)-1)/2;
        cout<<a<<" "<<a+1;
    }

    return 0;
}
