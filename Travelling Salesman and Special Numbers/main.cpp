#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define mp make_pair
#define MOD 1000000007
#define oo  1000000000
#define N   100000

using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vi v ;
ll fact (ll x)
{
    if (x ==1 || x==0)
        return 1;
    return (x*(fact(x-1)))% MOD;
}
ll com (ll x, ll y)
{
    return (fact(x)/(fact(y) *fact(x-y)))%MOD ;
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    string x ;
    int k ;
    cin>>x>>k ;
    for (int i=2;i<=x.length();i++)
    {
        if (__builtin_popcount(i)==(k-1))
            v.push_back(i);
    }
    int m =0;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]=='0')
        {
            m++;
        }
    }
    ll ans =0 ;
    for (int i=0;i<v.size();i++)
    {
        ans+=com(x.length(),v[i]);
        //ans=((ans % MOD)+(com(x.length(),v[i]))%MOD ) % MOD;
    }
    ll u =pow(2,m);
    cout<<(ans - u)%MOD ;
    return 0;
}
