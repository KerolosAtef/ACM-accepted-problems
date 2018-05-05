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

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n,m;
    cin>>n>>m ;
    int arr[m];
    int mini = oo;
    for (int i=0;i<m;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+m);
    for (int i=0;i+n<=m;i++)
    {
        mini= min(mini,arr[i+n-1]-arr[i]);
    }
    cout<<mini;
    return 0;
}
