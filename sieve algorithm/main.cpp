#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll number_of_primes (ll n)
{
    vector <bool >isprime(n+1,true);
    int count=0;
    isprime [0]=isprime[1]=0;
    for (ll i=2;i*i<=n;i++)
        if (isprime[i])
            for (ll j=i*2;j<=n;j+=i)
                isprime[j]=0;

    for (ll i=0;i<n+1;i++)
        if (isprime[i])count++;
    return count;
}
vector <ll>v;
void sieve (ll n)
{
    vector <bool >isprime(n+1,true);
    int count=0;
    isprime [0]=isprime[1]=0;
    for (ll i=2;i*i<=n;i++)
        if (isprime[i])
            for (ll j=i*2;j<=n;j+=i)
                isprime[j]=0;
    for (ll i=0;i<n+1;i++)
        if (isprime[i])v.push_back(i);
}
int main()
{
    ll n ;
    cin>>n;
    ll temp=n;
    int f[n]={};
    cout<<"Number of primes = "<<number_of_primes(n)<<endl;
    sieve(n);
    for (int i=0;i<v.size();i++)
    {
        while (n%v[i]==0)
        {
            f[v[i]]++;
            n=n/v[i];
        }
    }
    for (int i=0;i<temp;i++)
        if (f[i]>0)
            cout<<i<<" power "<<f[i]<<endl;

    return 0;
}
