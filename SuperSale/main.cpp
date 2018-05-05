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
vi v ;
int price [1000] , weight [1000] , max_weight [100];
int memo [1000][35] ;
int n ,t ,g;
int solve (int i , int maxi )
{
    if (i==n)return price [i];
    int op1=-1 ,op2 , &ret = memo [i][maxi];
    if (~ret )return ret ;
    if (weight [i]<= maxi) op1 = solve(i+1 , maxi-weight [i])+price [i];
    op2= solve(i+1,maxi);
    return ret = max (op1,op2);
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);

    cin >>t;
    while (t--)
    {
        cin >>n;
        memset(memo , -1 , sizeof memo);
        memset(price,0,sizeof price);
        memset(weight ,0 ,sizeof weight);
        for (int i=0;i<n;i++)
        {
           cin >>price [i]>>weight [i] ;
        }
        cin >>g ;
        int sum =0 ;
        for (int i=0;i<g;i++)
        {
            cin >>max_weight [i];
            sum+=solve (0,max_weight [i]);
        }
        //v.push_back(sum);

        cout<<sum<<endl;
    }
    /*
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl ;
    }
*/
    return 0;
}
