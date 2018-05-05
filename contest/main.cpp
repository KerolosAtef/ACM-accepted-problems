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
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    int cost1 = max (3*a /10,(a-(a/250)*c));
    int cost2 = max (3*b /10,(b-(b/250)*d));
    if (cost1>cost2 )
        cout<<"Misha";
    else if (cost1<cost2)
        cout<<"Vasya";
    else
        cout<<"Tie";

    return 0;
}
