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
int frex[260];
int frey[260];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    string x,y ;
    cin>>x>>y;
    for (int i=0;i<x.length();i++)
        frex[x[i]]++;
    for (int i=0;i<y.length();i++)
        frey[y[i]]++;
    bool flag=true,flag2=true;
    for (int i=0;i<y.length();i++)
    {
        if (frex[y[i]]<frey[y[i]])
            flag=false;
    }
    for (int i=0;i<260;i++)
    {
        if (frex[i]!=frey[i])
            flag2=false;
    }
    if (x.length() ==y.length() && flag2)
        cout<<"array";
    else if (x.length()<y.length())
        cout<<"need tree";
    else if (flag){
        int j=0;
        for (int i=0;i<x.length();i++)
        {
            if (y[j]==x[i])
                j++;
        }
        if (j==y.length())
            cout<<"automaton";
        else
            cout<<"both";
    }
    else
        cout<<"need tree";

    return 0;
}
