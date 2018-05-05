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
    ll l =-1000000005, r = 1000000005 ;
    ll n ,a;
    cin >>n ;
    string x , y;
    for (int i=0;i<n ;i++)
    {
        cin>>x>>a>>y;
        if (y=="Y" &&x==">=" && a>=l)
            l=a;
        else if (y=="Y" &&x==">" &&a>=l)
            l=a+1;
        else if (y=="Y" &&x=="<" &&a<=r)
            r=a-1;
        else if (y=="Y" &&x=="<=" &&a<=r)
            r=a;
        else if (y=="N" &&x==">=" && a<=r)
            r=a-1;
        else if (y=="N" &&x==">" && a<=r)
            r=a;
        else if (y=="N" &&x=="<" &&a>=l)
            l=a;
        else if (y=="N" &&x=="<=" && a>=l)
            l=a+1;
    }
    if (l > r )
        cout<<"Impossible";
    else
        cout<< l;
    return 0;
}

