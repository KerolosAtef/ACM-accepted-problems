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
    int r ,c ;
    cin >>r>>c;
    string x;
    set <int> s1,s2;
    for (int i=0;i<r;i++)
    {
        cin >>x;
        for (int j=0;j<c;j++)
        {
            if (x[j]=='S')
            {
                s1.insert(i);
                s2.insert(j);
            }
        }
    }
    int row =r-s1.size();
    int col =c-s2.size();
    int ans =row*c +col*r;
    ans -= (row*col);
    if (ans<0)
        ans=0;
    cout<<ans;
    return 0;
}
