#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
#define oo  1000000000
#define N   100000
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
int n ,arr[3*N];
bool solve (double mid )
{
    double test = arr[0]+mid ;
    for(int i=0;i<3;i++)
    {
        if (!*upper_bound(arr,arr+n,test))
            return 1;
        test = *upper_bound(arr,arr+n,test)+mid;
    }
    return 0;
}

void ans (double mid )
{
    double test = arr[0]+mid ;
    for(int i=0;i<3;i++)
    {
        printf("%.6f ",test);
        test = *upper_bound(arr,arr+n,test+mid)+mid;
    }
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    cin >>n ;
    for (int i=0;i<n;i++)
        cin >>arr[i];
    sort(arr,arr+n);
    double l=0, r=oo,mid ;
    for (int i=0;i<1000;i++)
    {
        mid=(l+r)/2.0;
        if (solve(mid))
            r=mid ;
        else
            l=mid ;
    }
    mid/=2.0;
    printf("%.6f\n", mid);
    ans(mid);
    return 0;
}
