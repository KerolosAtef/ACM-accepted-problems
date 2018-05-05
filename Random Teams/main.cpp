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
    ll n ,m,mini1,mini2,maxi;
    cin >>n>>m ;
    mini1 = n/m +n%m ;
    mini2= n/m;
    maxi=n-(m-1);
    cout<<((m-(n%m))* (mini2 *(mini2 -1)/2)) + (n%m)*((mini2 *(mini2 +1)/2)) <<" ";
    cout<< maxi *(maxi -1)/2;
    return 0;
}
