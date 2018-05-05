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

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n , x, sum=0,maxi,l,r,start=1;
    cin >>n>>x;
    for (int i=0;i<n;i++)
    {
        cin >>l>>r;
        sum +=(r-l)+1;
        sum+=((l-start)%x);
        start=r+1;
    }
    cout<<sum ;
    return 0;
}
