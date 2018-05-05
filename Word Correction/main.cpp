#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define mp make_pair
#define MOD 1000000007
#define oo  1000000000
#define N   1000000

using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
char arr[6]={'a','e','i','o','u','y'};
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n ;
    cin >>n ;
    string x ;
    cin>>x;
    char curr =x[0];
    cout<<curr;
    bool flag,flag2;
    for (int i=1;i<n;i++)
    {
        flag=true;flag2=true;
        for (int j=0;j<6;j++)
        {
            if (x[i]==arr[j])
                flag=false;
            if (curr ==arr[j])
                flag2=false;
        }
        if (!flag &&!flag2 )
            continue ;
        curr=x[i];
        cout<<x[i];
    }
    return 0;
}
