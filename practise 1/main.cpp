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
vi arr[100000] ;
bool vis [100000];
int cnt=0;
set <int >  st;
vi v ;
void dfs (int s)
{
    vis[s]=1;
    for (int i=0;i<arr[s].size();i++)
    {
        if (!vis[arr[s][i]])
        {
            cnt++;
            dfs(arr[s][i]);
        }
    }
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n,a,b;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        cin >>a>>b ;
        st.insert(a);
        st.insert(b);
        arr[a].push_back(b);
        arr[b].push_back (a);
    }
    int maxi=0;
    v.assign(st.begin(),st.end());
    for (int i=0;i<v.size();i++)
    {
        dfs(v[i]);
        if (cnt>maxi)
            maxi=cnt;
        cnt=0;
    }
    cout<<maxi;
    return 0;
}
