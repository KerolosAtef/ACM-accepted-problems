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
    int x,y;
    cin >>x;
    int arr[4];
    int check =1;
    while (check)
    {
        x++;
        y=x;
        for(int j=0;j<4;j++)
        {
           arr[j]= y%10;
           y=y/10;
        }
        sort(arr,arr+4);
        if (arr[0]!=arr[1] &&arr[1]!=arr[2]&&arr[2]!=arr[3])
                check=0;
    }
    cout<<x;

    return 0;
}
