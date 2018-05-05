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
set <int> st;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n ,m ;
    cin >>n>>m;
    int arr [n][m];
    string x;
    for (int i=0;i<n;i++)
    {
       cin >>x;
       for (int j=0;j<m;++j)
       {
           int a = x[j]-'0';
           arr[i][j]=a;
       }
    }
    for (int i=0;i<m;i++)
    {
       int maxi = 1;
       for (int j=0;j<n;++j)
       {
          if (arr[j][i]>=maxi)
          {
              maxi=arr[j][i];
          }
       }
       for (int j=0;j<n;++j)
       {
          if (arr[j][i]==maxi)
          {
             // cout<<j+1 << " ";
              st.insert(j+1);
          }
       }
    }
    cout<<st.size();

    return 0;
}
