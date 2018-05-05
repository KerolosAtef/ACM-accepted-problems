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
ll n ,arr [2*100005];
bool solve (double mid )
{
    double ans = arr[0]+mid ;
    for (int i=0;i<3;i++)
    {
        if (ans ==0 || ans >arr[n-1])
            return false;
        ans = *upper_bound(arr,arr+n,ans)+mid ;
    }
    return true ;
}

void answer (double l )
{
    cout<<arr[0]+l/2 << " ";
    double ans = arr[0]+l;
    for (int i=0;i<2;i++)
    {
        ans = *upper_bound(arr,arr+n,ans);
        if (ans !=0)
            cout<<ans+(l/2)<<" " ;
        else
        {
            cout.precision(6);
            cout<<fixed <<(double)arr [n-1]<<" ";
        }
        ans+=l;
    }
}

int main()
{
    in ;
    cin >>n ;
    for (int i=0;i<n;i++)
        cin >>arr [i];
    sort(arr,arr+n);
    double l=0 ,r= 1000000000 , mid ;
    for (int i=0;i<1000;i++)
    {
        mid =(l+r)/2;
        if (solve (mid))
            l=mid;
        else
            r=mid;
    }
    cout.precision(6);
    cout<<fixed<<l/2<<endl;
    answer(l);
    return 0;
}
