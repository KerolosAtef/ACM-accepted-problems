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
    freopen("wall.in", "r", stdin);
    //freopen("out", "w", stdout);
    int n ,q ,l,r;
    cin >>n>>q;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >>arr[i];
    for (int i=0;i<q;i++)
    {
        cin >>l>>r;
        reverse(arr+l-1,arr+r);
    }
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
