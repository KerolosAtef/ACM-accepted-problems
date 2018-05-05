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

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    double x=0,y=0,z=0,h=0,a=0,b=0,c=0,d=0,m=0,n=0,o=0,p=0 ;
    cin >>x>>y>>z>>h>>a>>b>>c>>d>>m>>n>>o>>p ;
    double prevX=0,prevY=0,prevZ=0,X=0,Y=0,Z=0;
    for (int i=0; i<1000; i++)
    {
        prevZ=Z;
        prevY=Y;
        prevX=X;
        X=(1/x)*(h-y*prevY-z*prevZ);
        Y=(1/b)*(d-a*prevX-c*prevZ);
        Z=(1/o)*(p-m*prevX-n*prevY);
    }
    cout<<X<<endl;
    cout<<Y<<endl;
    cout<<Z<<endl;
    return 0;
}
