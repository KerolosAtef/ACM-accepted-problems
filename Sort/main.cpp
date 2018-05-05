/*#include <bits/stdc++.h>
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
***//*
using namespace std;
typedef long long ll ;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vector <int> v;

int main()
{
    in ;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    int n ;
    cin >>n ;
    int arr [n] ,arr2[n];
    for (int i=0;i<n;i++)
        cin >>arr [i];
    for (int i=0;i<n;i++)
        arr2[i]=arr[i];
    sort (arr2,arr2+n);
    for (int i=0;i<n;i++)
    {
        if (arr[i]!=arr2[i])
        {
            v.push_back(i+1);
        }
    }
    if (v.size()==0)
    {
        cout<<"yes"<<endl;
        cout<<"1 1";
        return 0;
    }
    reverse(arr+*v.begin()-1,arr+*(v.end()-1));
    /*for (int i=0;i<n;i++)
        cout<<arr[i];*/
   /* for (int i=0;i<n;i++)
    {
        if (arr[i]!=arr2[i])
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes" <<endl;
    cout<<*v.begin()<<" "<<*(v.end()-1);
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll>v;
void sieve (ll n)
{
    vector <bool>isprime(n+1,true);
    isprime[0]=isprime[1]=0;
    for (ll i=2;i*i<=n;i++)
        if (isprime[i])
            for (ll j=i*i;j<=n;j+=i)
                isprime[j]=0;
    for (ll i=0;i<n+1;i++)
        if (isprime[i])
            v.push_back(i*i);
}
int main()
{
    sieve(1e6+1);
    for (int i =0;i<v.size();i++)
        cout<<v[i]<<" ";
    ll n,x;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        if (binary_search(v.begin(),v.end(),x))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
