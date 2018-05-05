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
vector <ll> v;
int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    //memset(memo,-1,sizeof memo);
    int t,n ;
    cin>>t ;
    while (t--)
    {
        v.clear();
        cin>>n;
        ll arr [n];
        for (int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for (int i=0;i<n-1;i++)
           if (arr[i]==arr[i+1])
               v.push_back(arr[i]);

        sort(v.begin(),v.end());
        ll cnt=0;
        if (v.size()!=0 &&v.size()!=1)
        {
            for (int i=0;i<v.size()-1;i++)
            {
                if (v[i]==v[i+1])
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
