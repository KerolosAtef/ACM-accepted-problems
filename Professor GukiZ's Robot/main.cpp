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
    ll x1,y1,x2,y2,ans;
    cin>>x1>>y1>>x2>>y2;
    if (x2>=x1&&y2<=y1)
    {
        ans =min ((x2-x1),(y1-y2));
        x1+=ans;y1-=ans;
        if (x2>x1)
            ans+=(x2-x1);
        else
            ans +=(y1-y2);
    }
    else if (x2<=x1&&y2>=y1)
    {
        ans =min ((x1-x2),(y2-y1));
        x2+=ans;y2-=ans;
        if (x1>x2)
            ans+=(x1-x2);
        else
            ans +=(y2-y1);
    }
    else if (x2>=x1 &&y2>=y1)
    {
        ans =min ((x2-x1),(y2-y1));
        x1+=ans;y1+=ans;
        if (x2>x1)
            ans+=(x2-x1);
        else
            ans +=(y2-y1);
    }
    else if (x1>=x2 &&y1>=y2)
    {
        ans =min ((x1-x2),(y1-y2));
        x2+=ans;y2+=ans;
        if (x1>x2)
            ans+=(x1-x2);
        else
            ans +=(y1-y2);
    }
    cout<<ans;

    return 0;
}
