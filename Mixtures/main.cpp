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
int memo [100][100];
int arr [100];
int n ;
int solve (int i=1,int ans=arr[0])
{
    if (i==n-1)return 0;
    int &ret =memo [i][ans];
    if (~ret)return ret ;
    return ret =solve(i+1,(ans+arr[i])%100)+ans*arr[i] ;
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    while (cin>>n)
    {
        memset(memo,-1,sizeof memo);
        for (int i=0;i<n;i++)
            cin>>arr[i];
        cout<<solve()<<endl;
    }
    return 0;
}
