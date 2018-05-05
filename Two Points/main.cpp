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

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int x1,y1 ,x2,y2 ,vx1,vy1,vx2,vy2 ;
    cin>> x1>>y1>>x2>>y2 >>vx1>>vy1>>vx2>>vy2 ;
    double mini =sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    double distance ;
    int i=1;
    while (true && i<1000000)
    {
        distance =sqrt((x2+vx2*i-x1+vx1*i)*(x2+vx2*i-x1+vx1*i) + (y2+vy2*i-y1+vy1*i)*(y2+vy2*i-y1+vy1*i));
        i++;
        if (distance >mini)
            break;
        else
            mini=distance;
    }
    printf("%.15f",mini);
    return 0;
}
