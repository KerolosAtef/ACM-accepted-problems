#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define mp make_pair
#define MOD 1000000007
#define oo  1000000000
#define N   1000000

using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
int n,m ,x,p=0,q,ans=0;
string y;
char arr[40][40];
pair<int,int> arr2[1000];
vi v,v2;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    cin>>n>>m>>x;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            v2.push_back((int)arr[i][j]);
            if (arr[i][j]=='S')
            {
                arr2[p]={i,j};
                p++;
                v2.pop_back();
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (arr[i][j]=='S')continue;
            for (int k=0;k<p;k++)
            {
                if (sqrt(((i-arr2[k].first)*(i-arr2[k].first))+((j-arr2[k].second)*(j-arr2[k].second)))<=x)
                {
                    if (arr[i][j]>=65 &&arr[i][j]<=90)
                        v.push_back(arr[i][j]+32);
                    else
                        v.push_back(arr[i][j]-32);
                    break;
                }
            }
        }
    }
    /*for (int i=0;i<v.size();i++)
    {
        cout<<(char)v[i]<<" ";
    }
    cout<<endl;*/
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    cin>>q>>y;
    for (int i=0;i<q;i++)
    {
        if (binary_search(v2.begin(),v2.end(),y[i]))
            continue;
        else if (p==0)
        {
            cout<<-1;
            return 0;
        }
        else if (y[i]>=65 &&y[i]<=90)
        {
            if (!binary_search(v2.begin(),v2.end(),(int)y[i]+32))
            {
                cout<<-1;
                return 0;
            }
        }
        else if (y[i]>=97 &&y[i]<=122)
        {
            if (!binary_search(v2.begin(),v2.end(),(int)y[i]-32))
            {
                cout<<-1;
                return 0;
            }
        }
        if (v.size()!=0 &&!binary_search(v.begin(),v.end(),(int)y[i])&&p!=0)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
