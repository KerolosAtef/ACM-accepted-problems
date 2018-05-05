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
vector <ll> v ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    ll n ;
    cin>>n;
    int x= 10;
    while (x)
    {
        for (ll i=0;i<(1<<x);i++)
        {
            if (__builtin_popcount(i)*2==x)
            {
                string y="";
                int temp=i;
                int j=x;
                while (j--)
                {
                    if (temp&1)
                        y.push_back('7');
                    else
                        y.push_back('4');
                   temp=temp>>1;
                }
                ll a =atoll(y.c_str());
                v.push_back(a);
            }
        }
        x-=2;
    }
    sort(all(v));
    cout<<*lower_bound(all(v),n);
    return 0;
}
