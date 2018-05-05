#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007

using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
ll n , k,ans;
ll arr[100005],prefix [100005];
bool solve (ll mid )
{
    ll l =1, r =mid  ,sum;
    for (int i=0;i+mid<=n ;i++)
    {
        sum =k * arr[r-1];
        if (sum -(prefix[r]-prefix[l-1])<=k )
        {
            ans =r;
            return true;
        }
        else
        {
            l++;
            r++;
        }
    }
   return 0;
}
int main()
{
    in ;
    cin>>n >>k;
    for (int i=0 ;i<n ;i++)
        cin>> arr [i];
    sort(arr,arr+n);
    for (int i=1 ;i<=n ;i++)
        prefix [i]=arr[i-1]+prefix[i-1];
    ll l =0 ,r =n, mid ;
    while (l<r)
    {
        mid =(l+r+1)/2;
        if (solve(mid))
            l=mid;
        else
            r=mid-1;
    }
    //cout<<l <<" "<<ans ;
    cout<<solve(8)<<ans;
    return 0;
}
