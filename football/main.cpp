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
    string x;
    int count,count2;
    cin>>x;
    for (int i=0;i+7<=x.length();i++)
    {
        count=0;count2=0;
        for (int j=0;j<7;j++)
        {
            if (x[i+j]=='1')
                count++;
            if (x[i+j]=='0')
                count2++;
        }
        if (count ==7 ||count2==7)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


    return 0;
}

