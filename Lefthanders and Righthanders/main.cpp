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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n ;
    cin>>n;
    string x ;
    cin >>x ;
    for (int i=0;i<n/2;i++)
    {
        if ((x[i]=='R' &&x[i+(n/2)]=='R')||(x[i]=='L' &&x[i+(n/2)]=='L'))
            cout<<i+1<<" "<<i+(n/2)+1<<endl;
        else if (x[i]=='R' &&x[i+(n/2)]=='L')
            cout<<i+(n/2)+1<<" "<<i+1<<endl;
        else
            cout<<i+1<<" "<<i+(n/2)+1<<endl;
    }
    return 0;
}
