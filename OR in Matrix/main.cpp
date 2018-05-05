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
bool arr[100][100];
bool arr2[100][100];
set <int > zero_rows ;
set <int> zero_colums;
bool flag=true;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int m,n ;
    cin>>m>>n;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]==0)
            {
                zero_rows.insert(i);
                zero_colums.insert(j);
            }
        }
    }
    memset(arr2,1,sizeof arr2);
    for (int i :zero_rows )
    {
        for (int j=0;j<n;j++)
            arr2[i][j]=0;
    }
    for (int i :zero_colums )
    {
        for (int j=0;j<m;j++)
            arr2[j][i]=0;
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j]==1)
            {
                flag =true;
                for (int k=0;k<n;k++)
                    if (arr2[i][k]==1)flag=false;
                for (int k=0;k<m;k++)
                    if (arr2[k][j]==1)flag=false;
                if (flag)
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            cout<<arr2[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
