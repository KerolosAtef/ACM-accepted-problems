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
int arr [20];
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int n,cnt,maxi,ans ;
    string x;
    while (1)
    {
        cin>>n;
        if (!n)break;
        cin.ignore();
        for (int i=0;i<n;i++)
        {
            getline(cin,x);
            cnt=0;
            for (int i=0;i<x.length();i++)
            {
                if (x[i]=='X')
                    cnt++;
            }
            arr[i]=cnt;
        }
        maxi=arr[0];
        for (int i=1;i<n;i++)
        {
            if (arr[i] > maxi)
                maxi=arr[i];
        }
        ans=0;
        for (int i=0;i<n;i++)
            ans+=(maxi-arr[i]);
        cout<<ans<<endl;
    }
    return 0;
}
