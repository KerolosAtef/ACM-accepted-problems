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
vector <int> arr[100005];
stack <int> st;
bool vis [1000005];
void dfs (int s )
{
    vis[s]=1;
    for (int i : arr[s])
    {
        if (!vis[i])
        {
            dfs(i);
            cout<<i<<" ";
        }
    }
}
void dfs2 (int s)
{
    vis[s]=1;
    for (int i=0;i<arr[s].size();i++)
    {
        int child = arr[s][i];
        if ( !vis [child])
        {
            dfs2(child);
            cout<<child <<" ";
        }
    }
}
void dfs_iterative (int s)
{
    vis[s]=1;
    st.push(s);
    while (!st.empty())
    {
        int u=st.top();
        st.pop();
        for (int i : arr[u])
        {
            if (!vis [i])
            {
                vis [i]=1;
                st.push(i);
            }
        }
    }


}
int connected_component (int n)
{
    int count=0;
    for (int i=1;i<=n;i++)
    {
        if ( ! vis[i])
        {
            dfs(i);
            count++;
        }
    }
    return count;
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n,e,a,b;
    cin >>n >>e;
    /*bool arr [n][n];
    memset(arr,0,sizeof arr);
    for (int i=0;i<e;++i)
    {
        cin >> a>>b;
        --a;--b;
        arr[a][b]=1;
    }
    for (int i=0;i<n;++i)
    {
         for (int j=0;j<n;++j)
            cout<<arr[i][j];
        cout<<endl;
    }
*/
    for (int i =0;i<e;i++)
    {
        cin >>a>>b;
       arr[a].push_back(b);
      // arr[b-1].push_back(a);
    }

    for (int i=1;i<=n;i++)
    {
        cout<<i<<" : ";
        for (int j=0;j<arr[i].size();j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    dfs (1);
    //cout<<"connected component : = "<<connected_component(n)<<endl;
    //dfs2 (1);

    return 0;
}
