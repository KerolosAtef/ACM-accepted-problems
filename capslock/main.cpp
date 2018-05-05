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
    int count =0,c=0;
    string x;
    cin >>x;
    if (((int)x[0])>=65 &&((int)x[0])<=90)
        c++;
    for (int i=1;i<x.length();i++)
        if (((int)x[i])>=65 &&((int)x[i])<=90)
            count ++ ;
    if (count == x.length()-1 &&c==0 )
    {
        x[0]-=32;
        for (int i=1;i<x.length();i++)
            x[i]+=32;
    }
    else if (count+c == x.length())
        for (int i=0;i<x.length();i++)
            x[i]+=32;
    cout<<x;
    return 0;
}
