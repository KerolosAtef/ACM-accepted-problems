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
int m,n ;
vi v ,arr,memo,memo2;
int dpOnRows (int j=0)
{
    if (j>=n)return 0;
    int &ret =memo[j];
    if (~ret)return ret;
    return ret=max(dpOnRows(j+2)+arr[j],dpOnRows(j+1));
}
int dp (int j=0)
{
    if (j>=m)return 0;
    int &ret =memo2[j];
    if (~ret)return ret;
    return ret=max(dp(j+2)+v[j],dp(j+1));
}
int main()
{
    in ;
    while (1)
    {
        cin>>m>>n;
        if (!m&&!n)return 0;
        memo.resize(n+5);
        arr.resize(n+5);
        v.resize(m);
        for (int i=0;i<m;i++)
        {
            fill(memo.begin(),memo.end(),-1);
            for(int j=0;j<n;j++)
                cin>>arr[j];
        v[i]=dpOnRows();
        }
        memo2.resize(m);
        fill(memo2.begin(),memo2.end(),-1);
        cout<<dp()<<endl;
    }

    return 0;
}
