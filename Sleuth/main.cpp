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
    string x ;
    getline(cin,x);
    char arr [12]={'A','E','I','O','U','Y','a','e','i','o','u','y'};
    int j ;
    for ( j=x.length()-1 ;j>0;j--)
    {
        if (x[j]!='?' && x[j]!=' ')
            break;
    }
    for (int i=0;i<12;i++)
    {
        if (x[j]==arr[i])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
