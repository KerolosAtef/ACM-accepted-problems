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
struct node
{
    int r,g,b;
};
node arr [16];
void mini_distance (int a, int b , int c )
{
    double ans = (arr[0].r -a)*(arr[0].r -a) + (arr[0].g -b)*(arr[0].g -b)+ (arr[0].b -c)*(arr[0].b -c);
    for (int i=1;i<16;i++)
    {
        double d= (arr[i].r -a)*(arr[i].r -a) + (arr[i].g -b)*(arr[i].g -b)+ (arr[i].b -c)*(arr[i].b -c);
        ans = min (ans ,d);
    }
    for (int i=0;i<16;i++)
    {
        double d= (arr[i].r -a)*(arr[i].r -a) + (arr[i].g -b)*(arr[i].g -b)+ (arr[i].b -c)*(arr[i].b -c) ;
        if (ans == d)
        {
            cout<<"("<<arr[i].r<<","<<arr[i].g<<","<<arr[i].b<<")"<<endl;
        }
    }

}
int main()
{
    int r,g,b ;
    int i=0;
    while (true)
    {
        cin >>r>>g>>b;
        if (r==-1 && g==-1 &&b==-1)
            return 0;
        if (i > 15)
        {
           cout<<"("<<r<<","<<g<<","<<b<<") maps to ";
           mini_distance(r,g,b);
        }
        else
        {
           arr[i].r=r;
           arr[i].g=g;
           arr[i].b=b;
           i++;
        }
    }
    return 0;
}
