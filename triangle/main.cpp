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
vii v;
vi v2 ;
multiset <int> ms;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n,a,b,x,y ;
    cin >>n ;
    for (int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        ms.insert(a);
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    int ans=0;
    for (int i=0;i<n;i++)
    {
        if (v[i].first ==v[i+1].first )
        {
            x=v[i].second ;
            y=v[i+1].second;
            if (x==v[i].first &&x==v[i+1].first)
                ans+=ms.count(x)-2;
            else if (x==v[i].first || x==v[i+1].first)
                ans+=ms.count(x)-1;
            else
                ans+=ms.count(x);
            if (y==v[i+1].first && y==v[i].first)
                ans+=ms.count(y)-2;
            else if (y==v[i+1].first || y==v[i].first)
                ans+=ms.count(y)-1;
            else
                ans+=ms.count(y);
        }
    }
    cout<<ans;
    return 0;
}
