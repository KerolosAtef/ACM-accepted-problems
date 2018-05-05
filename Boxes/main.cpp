#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
#define oo  1000000000
#define N   1000000
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
int n ,weight[N],max_load[N];
int memo [1005][6005];
vi v ;
int boxes (int i=n-1,int remain=0)
{
    if (i==-1) return 0;
    int &ret=memo[i][remain] ;
    if (~ret)return ret ;
    int op1=-10,op2;
    if (max_load[i]>=remain)
        op1= boxes(i-1,weight[i]+remain)+1;
    op2= boxes(i-1,remain);
    return ret =max(op1,op2);
}

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    while (1)
    {
        cin>>n ;
        memset(memo,-1,sizeof memo);
        if (n==0)
            break;
        for (int i=0;i<n;i++)
            cin >>weight[i]>>max_load[i];
        cout<<boxes()<<endl;
        //v.push_back(boxes());
    }
    /*for (int i=0;i<v.size();i++)
        cout<<v[i]<<endl;*/
    return 0;
}
