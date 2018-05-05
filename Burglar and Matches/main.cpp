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
pair<int,int>arr[50];
ll ans ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n ,m ,a ,b ;
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        cin>>a>>b;
        arr[i]={-1*b,-1*a};
    }
    sort(arr,arr+m);
    for (int i=0;i<m;i++)
    {
        if (n>=-1*arr[i].second)
        {
            ans+=(arr[i].second*arr[i].first);
            n-=(-1*arr[i].second);
        }
        else
        {
            ans+=(n*arr[i].first*-1);
            break;
        }

    }
    cout<<ans;
    return 0;
}
