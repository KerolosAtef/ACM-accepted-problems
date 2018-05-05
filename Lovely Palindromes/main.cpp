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
int n,m ,x,q;
char arr[40][40];
string y ;
pair <int,int> pairs [50];

vi v ,valid;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    scanf("%d%d%d",&n,&m,&x);
    int p=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            v.push_back(arr[i][j]);
            valid.push_back(arr[i][j]);
            if (arr[i][j]>=65 &&arr[i][j]<=90)
                valid.push_back(arr[i][j]+32);
            else
                valid.push_back(arr[i][j]-32);
            if (arr[i][j]=='S')
            {
                pairs[p].first=i;
                pairs[p].second=j;
                p++;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
           for (int k=0;k<p;k++)
           {
               if (sqrt(((i-pairs[k].first)*(i-pairs[k].first))+((j-pairs[k].second)*(j-pairs[k].second)))<=x)
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
    /*
    for (int i=0;i<v.size();i++)
    {
        cout<<(char)v[i]<<" ";
    }
    cout<<endl;
*/
    sort(v.begin(),v.end());
    sort(valid.begin(),valid.end());
    scanf("%d",&q);
    cin>>y;
    int ans=0;
    for (int i=0;i<q;i++)
    {
        if(!binary_search(valid.begin(),valid.end(),(int)y[i]) ||p==0)
        {
            cout<<-1;
            return 0 ;
        }
        if(!binary_search(v.begin(),v.end(),(int)y[i])&&p!=0)

             ans++;

    }
    printf("%d",ans);
    return 0;
}
