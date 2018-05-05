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
vi ones ,zeros ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n ,m ;
    cin >>n>>m ;
    int arr[n][m];
    for (int i=0;i<n;i++)
     {
        int one=0 ,zero=0;
        for (int j=0;j<m;j++)
        {
            cin >>arr[i][j];
            if (arr[i][j]==0)
                zero++;
            if (arr[i][j]==1)
                one++;
        }
        zeros.push_back(zero);
        ones.push_back(one);
     }
    for (int j=0;j<m;j++)
     {
        int one=0 ,zero=0;
        for (int i=0;i<n;i++)
        {
            if (arr[i][j]==0)
                zero++;
            if (arr[i][j]==1)
                one++;
        }
        zeros.push_back(zero);
        ones.push_back(one);
     }
     ll ans =0;
     for (int i=0;i<ones.size();i++)
     {
         ans+=(pow(2,ones[i])-1);
         //cout<< ones [i]<<" ";
     }
    for (int i=0;i<zeros.size();i++)
     {
         ans+=(pow(2,zeros[i])-1);
         //cout<<zeros[i]<<" ";
     }
     cout<<ans-(n*m) ;
    return 0;
}
