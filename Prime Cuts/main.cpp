#include <bits/stdc++.h>
#define in ios::sync_with_stdio(0);cin.tie(0);
#define PI 3.14159265358979323846
#define all(v) v.begin(),v.end()
#define EPS 1e-15
#define MOD 1000000007
/***
.
.
.
.
kerolos atef
.
.
.
.
***/
using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vi v;
void sieve ( ll n)
{
    vector <bool > isprime (n+1,true);
    isprime [0]=0 ;
    for (int i =2;i*i<=n;i++)
        if (isprime [i])
            for (int j=i*i;j<=n;j+=i)
                isprime [j]=0;

    for (int i=0;i<n+1;i++)
        if (isprime[i])v.push_back(i);
}
int main()
{
    in ;
    sieve(1005);
    int n ,c;
   while(cin >> n>>c)
   {
        int num = upper_bound(v.begin(),v.end(),n) - v.begin();
        cout<<n<<" "<<c<<":" ;
        if (n== 1)
            num =1;
        if (num % 2==0)
            c=2*c;
        else
            c=2*c-1;
        if (c >= num)
        {
            for (int i=0;i<num;i++)
                cout<<" "<<v[i];
        }
        else
        {
            int j=(num - c)/2;
            for (int i=j;i< num -j;i++)
                cout<<" "<<v[i];
        }
        cout<<endl<<endl;
   }
    return 0;
}
