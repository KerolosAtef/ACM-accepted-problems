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
ll n ,k ;
ll solve (ll mid )
{
   ll temp =mid;
   ll sum=0;
   int i=1;
   while (temp>0)
   {
       sum+=temp;
       temp = mid / (pow(k,i));
       i++;
   }
   return sum;
}
int main()
{
    in ;
    cin>>n>>k;
    ll l =1,r=1000000000000,mid;
    while (l<r)
    {
        mid =(l+r+1)/2;
        ll ch =solve(mid);
        if (ch > n)
            r=mid-1 ;
        else
            l= mid ;
    }
    for (int i=0;i<5;i++)
    {
        ll ch =solve(l+i);
        if (ch >= n)
        {
            cout<< l+ i ;
            break;
        }
    }
    return 0;
}

