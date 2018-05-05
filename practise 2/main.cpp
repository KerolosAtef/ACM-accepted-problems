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
int p [1000000];
priority_queue <ll> pq1,pq2;
ll ans =0;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n ,m,a,b,t;
    cin >>n>>m ;
    for (int i=0;i<n;i++)
    {
        cin >>t;
        pq1.push(t);
    }
    for (int i=0;i<m;i++)
    {
        cin >>a>>b;
        p[a]++;p[b+1]--;
    }
    for (int i=1;i<1000000;i++)
    {
        p[i]+=p[i-1];
        if (p[i])
            pq2.push(p[i]);
    }
    while (!pq2.empty())
    {
        ans+=pq1.top()*pq2.top();
        pq1.pop();
        pq2.pop();
    }
    cout<<ans ;
    return 0;
}
