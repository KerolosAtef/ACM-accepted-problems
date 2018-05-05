#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define mp make_pair
#define MOD 1000000007
#define oo  1000000000
#define N   100000

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
    //memset(memo,-1,sizeof memo);
    int n,m ;
    bool flag =true ;
    cin>>n>>m ;
    string arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        for (int j=0;j<m-1;j++)
        {
            if (arr[i][j]!=arr[i][j+1])
            {
                flag=0;
                break;
            }
        }
    }
    if (flag)
    {
        for (int i=0;i<n-1;i++)
        {
            if (arr[i]==arr[i+1])
            {
                flag=0;
                break;
            }
        }
    }
    else
    {
        cout<<"NO";
        return 0;
    }
    if (flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
