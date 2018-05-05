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
vi v ;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int t ,n ,gcd,teams=0,m;
    cin>>t;
    while (t--)
    {
        v.clear();
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int j=1001;
        while(--j)
        {
            m=0;
            for (int i=0;i<n;i++)
            {
                if (arr[i]%j==0)
                    m++;
            }
            if (m==n)
                v.push_back(j);
            //cout<<"kero";
        }
        sort(v.begin(),v.end(),greater<int> ());
        teams=0;
        for (int i=0;i<n;i++)
            teams+=arr[i]/v[0] ;
        cout<<v[0]<<" "<<teams<<endl;
    }
    return 0;
}
