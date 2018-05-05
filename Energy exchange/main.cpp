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
double arr [10000];
int n , k ;
bool solve (double mid )
{
    double temp=0;
    int i ;
    for ( i=0;i<n;i++)
    {
        if (arr[i]>mid)
            temp+=((arr[i]-mid)-((arr[i]-mid)*k/100));
        else
            temp -=(mid-arr[i]);
    }
    if ( temp>=0)
        return true ;
    else
        return false ;
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    /*cin >>n >>k;
    for (int i=0;i<n ;i++)
        cin >>arr[i];
    sort(arr,arr+n,greater <double>());
    double l=0 , r=arr[0],mid;
    int count =0 ;
    while (count <1000)
    {
        mid =(l+r)/2 ;
        if (solve( mid))
            l=mid;
        else
            r=mid;
        count++;
    }
    printf("%.9f",mid);
    */

    return 0;
}
