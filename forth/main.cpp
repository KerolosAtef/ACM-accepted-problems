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
int n,b,c2 ;long double c,d ;
vector <pair<int,int > > v ;
/*ll memo [5005][10001];
ll solve (int i=0 ,int rem=c2)
{
    if (i==n)return 0;
    ll &ret =memo[i][rem];
    if (~ret) return ret ;
    return ret =max ((v[i].second <=rem) ?solve(i,rem-v[i].second)+v[i].first :-1 ,solve(i+1,rem));
}
*/
int dp[3][10005];
int solve2()
{
    int r=0;
    for (int rem=0;rem<c2;rem++)
        dp[r][rem]=0;
    for (int i=n-1;~i;i--)
    {
        r=!r;
        for (int rem=0;rem<=c2;rem++)
            dp[r][rem]=max((v[i].second<=rem)?dp[r][rem-v[i].second]+v[i].first : 0 ,dp[!r][rem]);
    }
    return dp[r][c2];
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    while (cin>>n>>c)
    {
        c2=c*100;
        //memset(memo,-1,sizeof memo);
        memset(dp,0,sizeof dp);
        v.clear();
        if (!n &&!c)
            return 0;
        for (int i=0;i<n;i++)
        {
            cin>>b>>d;
            d*=100;
            v.push_back({b,d});
        }
        cout<<solve2()<<endl;
    }
    return 0;
}
