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
int n,l;
double arr[1005],en=0;
bool solve (double mid)
{
    en=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]-mid <= en)
            en=arr[i]+mid;
        else
            return false ;
    }
    if (en>=l)
        return true;
    else
        return false;
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    cin>>n>>l;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    double l=0 ,r=oo , mid ,t=1000;;
    while(t--)
    {
        mid=(l+r)/2;
        if (solve(mid))
            r=mid;
        else
            l=mid;
    }
    printf("%.10f\n",mid);
    return 0;
}
