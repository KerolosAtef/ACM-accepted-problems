#include <bits/stdc++.h>
#include<math.h>
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
    ll a,b,n ;
    cin >>a>>b>>n ;
    bool flag = false ;
    while (1)
    {
        if (flag ==false )
        {
            if (n>=__gcd(a,n))
            {
                n-=__gcd(a,n);
                flag =true;
            }
            else
            {
                cout<<1;
                return 0;
            }
        }
        else
        {
            if (n>=__gcd(b,n))
            {
                n-=__gcd(b,n);
                flag =false;
            }
            else
            {
                cout<<0;
                return 0;
            }

        }

    }

    return 0;
}
