#include <iostream>
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
    ll n,x;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        if (binary_search(v.begin(),v.end(),x))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
