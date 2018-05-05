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
int fre [255];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    string x;
    for(int i=0;i<3;i++)
    {
        cin>>x;
        if (x[1]=='>')
            fre[x[0]]++;
        else
            fre[x[2]]++;
    }
    if (fre['A'] !=2 &&fre['B'] !=2 &&fre['C'] !=2 )
    {
        cout<<"Impossible";
        return 0;
    }
    if (fre['A']==2 )
    {
        if (fre['B']==1)
            cout<<"CBA";
        else
            cout<<"BCA";
    }
    else if (fre['B']==2 )
    {
        if (fre['A']==1)
            cout<<"CAB";
        else
            cout<<"ACB";
    }
    else if (fre['C']==2 )
    {
        if (fre['B']==1)
            cout<<"ABC";
        else
            cout<<"BAC";
    }
    return 0;
}
