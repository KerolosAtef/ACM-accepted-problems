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
char arr [105][105];
int dx []={1,0,-1,0};
int dy []={0,1,0,-1};
bool flag =true;
int n ,sum;
bool notvalid (int i , int j)
{
    int count=0;
    for (int m=0;m<4;m++)
    {
        if ((i+dx[m])>=0 &&(i+dx[m])<n && (j+dy[m])>=0 &&(j+dy[m])<n && arr [i+dx[m]] [j+dy[m]] =='o' )
            count++;
    }
    return (count & 1);
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    cin >>n ;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin >>arr[i][j];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (notvalid(i,j))
                flag=false;
        }
    }
    if (flag )
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
