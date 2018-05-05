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
    int a,b,c,x,y,z;
    cin >>a>>b>>c;
    z=sqrt((c*b)/a);
    y=c/z;
    x=b/z;
    cout<<x*4+y*4+z*4;
    return 0;
}
