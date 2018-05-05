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
    int n ,k ;
    cin >>n>>k ;
    for (int i=0;i<n;i++)
    {
         for (int j=0;j<n;j++)
            if (i==j)
                cout << k<<" ";
            else
                cout<<0<<" ";

        cout<<endl;
    }
    return 0;
}

