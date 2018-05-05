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
int arr[5000];
int d [5000];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n;
    while (scanf("%d",&n)){
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for (int i=0;i<n-1;i++)
        d[i]=abs(arr[i]-arr[i+1]);
    sort(d,d+n-1);
    bool flag =true;
    for (int i=1;i<n;i++)
    {
        if (d[i-1]!=i)
            flag=false;
    }
    if (flag)
        printf("Jolly\n");
    else
        puts("Not jolly");
    }
    return 0;
}
