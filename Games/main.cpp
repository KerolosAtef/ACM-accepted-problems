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
ii arr [105];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n,a,b,count =0 ;
    cin >>n;
    for (int i=0;i<n ;i++)
    {
        cin>>a>>b ;
        arr[i]= make_pair(a,b);
    }
    for (int i=0;i<n ;i++)
    {
        for (int j=0;j<n ;j++)
        {
            if( arr[i].second ==arr[j].first)
                count++;
        }
    }
    cout<<count ;
    return 0;
}
