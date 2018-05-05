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
int H,W,h,w ;
vector <char> arr[50] ;
string x ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    cin >>H>>W>>h>>w ;
    for (int i=0;i<H;i++)
    {
        cin>>x;
        for (int j=0;j<W;j++)
        {
            for (int k=0;k<w;k++)
            {
                arr[i].push_back(x[j]);
            }
        }
    }
    while (h--)
    {

        for (int j=0;j<H;j++)
        {
            for (int k=0;k<w*W;k++)
            {
                cout<<arr[j][k];
            }
            cout<<endl;
        }
    }

    return 0;
}
