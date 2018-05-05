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
    int c,v0,v1,a,l ,sp;
    cin>>c>>v0>>v1>>a>>l;
    int pages=v0 ;
    int i=1;
    while (pages< c)
    {
        sp = v0 + a*i ;
        if (sp >v1)
            sp=v1 ;
        pages += (sp - l);
        i++;
    }
    cout<<i ;
    return 0;
}
