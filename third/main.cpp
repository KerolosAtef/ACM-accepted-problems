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
    double n ,l ,w,h,c , m ,a,b,area;
    while (cin>>n>>w>>l>>h>>c>>m)
    {
        area=0;
        if (!n&&!w&&!l&&!h&&!c&&!m)
            return 0 ;
        area = l*w+h*l*2+w*h*2 ;
        for (int i=0;i<m;i++)
        {
            cin>>a>>b;
            area-=(a*b);
        }
        area*=n;
        double x=area/c ;
        int i_area =x ;
        if (x>i_area)
            cout<<i_area +1<<endl;
        else
            cout<<i_area<<endl;
    }
    return 0;
}
