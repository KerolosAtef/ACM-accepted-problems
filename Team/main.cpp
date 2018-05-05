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
    int n,x,y,z,count=0;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        if (x==0 && y==1&&z==1)
            count ++;
        else if (x==1 && y==0&&z==1)
            count ++;
        else if (x==1 && y==1&&z==0)
            count ++;
        else if (x==1 && y==1&&z==1)
            count ++;
    }
    cout<<count ;

    return 0;
}
