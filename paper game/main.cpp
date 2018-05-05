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
    int t ;
    cin >>t;
    while(t>0)
    {
        int a,b;
        cin >>a>>b;
        if (a%2==0 || b%2==0)
            cout<<"Hasan"<<endl;
        else
            cout<<"Hussain"<<endl;
        t--;
    }

    return 0;
}
