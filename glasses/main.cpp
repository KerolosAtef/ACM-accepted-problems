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
int H,W,h,w;
char arr[100][100];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    cin>>H>>W>>h>>w;
    for (int i=0;i<H;i++)
    {
        for (int j=0;j<W;j++)
            cin>>arr[i][j];
        for (int k=0;k<h;k++)
        {
            for (int g=0;g<W;g++)
                for (int m=0;m<w;m++)
                cout<<arr[i][g];
            cout<<"\n";
        }
    }
    return 0;
}
