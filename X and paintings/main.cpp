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
    int t,r,c,ins ,r1,c1,r2,c2;
    cin>>t;
    while (t--)
    {
        cin>>r>>c>>ins ;
        char arr [r+5][c+5],a;
        memset(arr,'.',sizeof arr);
        for (int i=0;i<ins;i++)
        {
            cin>>r1>>c1>>r2>>c2>>a;
            for (int j=r1-1;j<r2;j++)
                for(int k=c1-1;k<c2;k++)
                    arr[j][k]=a;
        }
        for (int j=0;j<r;j++){
            for(int k=0;k<c;k++)
                cout<<arr[j][k];
            cout<<endl;
        }
    }
    return 0;
}
