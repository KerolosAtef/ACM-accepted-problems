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
    int x1,y1,x2,y2 ;
    cin>>x1>>y1>>x2>>y2;
    if (abs(x1-x2)!=abs(y1-y2)&&(x1-x2)!=0 &&(y1-y2)!=0)
        cout<<-1;
    else
    {
        int side =max(abs(x1-x2),abs(y1-y2));
        if ((x1-x2)==0)
            cout<<x1+side<<" "<<y1<<" "<<x2+side<<" "<<y2;
        else if ((y1-y2)==0)
            cout<<x1<<" "<<y1+side<<" "<<x2<<" "<<y2+side;
        else
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }

    return 0;
}
