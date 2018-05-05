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
double a ,b, c ,x;
int h,m,s;
vi v ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    while (cin >>a>>b>>c)
    {
        if (!a&&!b&&!c)
            return 0;
        x=abs((a/b) -(a/c)) ;
        x*=3600;
        h=x/3600;
        x=round(x);
        m=(x-(3600*h))/60;
        s=(x-((3600*h)+(60*m)));
        printf("%.1d:%.2d:%.2d\n",h,m,s) ;
    }
    return 0;
}
