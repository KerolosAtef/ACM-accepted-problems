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
    string x;
    getline(cin,x);
    char arr [3]={'H','Q','9'};
    for (int i=0;i<x.length();i++)
    {
        for (int j=0;j<3;j++)
        {
            if (x[i]==arr[j])
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";

    return 0;
}
