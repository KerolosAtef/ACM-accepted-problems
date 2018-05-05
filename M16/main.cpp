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
set <char>st ;
vector <char> v ;

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    string x,s="" ;
    getline(cin,x);
    int lx =x.length();
    for (int i=0;i<lx;i++)
    {
        s+=x[i];
        if (x[i]=='i' || x[i]=='a' ||x[i]=='u' ||x[i]=='o' ||x[i]=='e' )
            i+=2;
    }
    cout<<s;
    return 0;
}
