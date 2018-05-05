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
    int n ,l,r;
    cin>>n ;
    ll arr [n]={0,};
    for (int i=0;i<n;i++)
    {
        cin >>l>>r;
        arr[l]++;
        arr[r-1]--;
    }
    vi v;
    partial_sum(arr,arr+n,back_inserter(v));
    sort(v.begin(),v.end());

    return 0;
}
