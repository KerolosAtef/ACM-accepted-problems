#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define mp make_pair
#define MOD 1000000007
#define oo  1000000000
#define N   1000000

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
    //memset(memo,-1,sizeof memo);
    ll a, b,x,y,z ,yellow,blue,ans;
    cin>>a>>b>>x>>y>>z;
    yellow=x*2+y;
    blue=y+3*z;
    ans=(yellow >a )?(yellow-a) : 0 ;
    ans+=(blue >b) ?(blue-b) : 0 ;
    cout<<ans ;
    return 0;
}
