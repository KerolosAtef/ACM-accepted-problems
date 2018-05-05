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
int fre[260];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n ;
    cin>>n;
    string x ;
    cin>>x;

    for (int i=0;i<n;i++)
        fre[x[i]]++;
    if (fre[82]==1 && fre[76]==0){
        for (int i=0;i<n;i++)
            if (x[i]=='R')
                cout<<i+1<<" "<<i+2;
    }
    else if (fre[82]==0 && fre[76]==1){
        for (int i=0;i<n;i++)
            if (x[i]=='L')
                cout<<i+1<<" "<<i;
    }
    else
    {
        int s=0,t=0;
        for (int i=0;i<n;i++)
            if (x[i]=='R'){
                s=i+1;
                break;
            }
         for (int i=0;i<n;i++)
            if (x[i]=='L'){
                t=i;
                break;
            }
        if (fre[82] &&fre[76]==0)
            cout<<s<<" "<<s+fre[82];
        else if (fre[82]==0 && fre[76])
            cout<<t+1<<" "<<t;
        else
            cout<<s<<" "<<t;
    }

    return 0;
}
