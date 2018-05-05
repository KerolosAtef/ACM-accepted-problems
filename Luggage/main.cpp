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
int arr [50];
int total , i;
int memo [50][2010];
int solve (int j=0,int sum =0)
{
    if (sum == total/2) return 1;
    if (j>=i) return 0;
    int &ret =memo [j][sum];
    if (~ret )return ret ;
    return ret = max(solve(j+1,sum), solve(j+1, sum+arr[j]));
}
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int m ;
    cin >> m ;

        cin.ignore();
    while (m--)
    {
        memset(memo , -1 ,sizeof memo);
        i=0 ;
        total =0;
        string line ;
        getline(cin,line);
        istringstream ss(line);
        int num;
        while (ss>>num)
        {
            arr[i]=num;
            total += arr[i];
            i++;
        }
        if (total &1)
            cout<<"NO"<<endl;

        else
            if (solve())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


   }


    return 0;
}
