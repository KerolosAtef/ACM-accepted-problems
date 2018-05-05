#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll > v,almost;
vector<bool>isprime (1e6+2,true);
void sieve (ll n)
{
    isprime[0]=isprime[1]=0;
    for (ll i=2;i*i<=n;i++)
        if (isprime[i])
            for (ll j=i*i;j<=n;j+=i)
                isprime[j]=0;

    for (ll i=2;i<n+1;i++)
        if (isprime[i])v.push_back(i);
}
void almost_prime()
{
    for (ll i=0;i<v.size();i++)
    {
        ll z=v[i]*v[i];
        almost.push_back(z);
        while (z<1000000000000)
        {
            z=z*v[i];
            almost.push_back(z);
        }
    }
}
int main()
{
    sieve(1e6+1);
    almost_prime();
    sort(almost.begin(),almost.end());
    ll n,m,t,count=0;
    cin>>t;
    for (ll i=0;i<t;i++)
    {
        cin>>n>>m;
        ll s= lower_bound(almost.begin(),almost.end(),m)-lower_bound(almost.begin(),almost.end(),n);
        cout<<s<<endl;
    }
    return 0;
}
