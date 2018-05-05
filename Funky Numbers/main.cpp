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
ll n ;
vi v;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    cin >> n;
    for (int i=1;i*(i+1)/2<n;i++)
        v.push_back(i*(i+1)/2);
    for (int i=0;i<(int)v.size();i++)
        if (binary_search(v.begin(),v.end(),n-v[i]))
        {
            cout<<"YES";
            return 0;
        }
    cout<<"NO";

    return 0;
}
