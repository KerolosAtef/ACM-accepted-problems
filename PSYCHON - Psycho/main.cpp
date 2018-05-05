#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int even=0,odd=0,power=0;
vector <ll>v;
void sieve (ll n) {
    vector <bool> isprime(n + 1, true);
    int count=0;
    isprime [0]=isprime[1]=0;
    for (ll i=2; i*i <= n; i++)
    {
        if (isprime[i])
        {
            for (ll j=i*2;j<=n;j+=i)
            {
                isprime[j]=0;
            }
        }
    }

    for (ll i=0;i<n+1;i++) {
        if (isprime[i]) v.push_back(i);
    }
}

void num_of_power (ll n)
{
    odd=0;even=0;
    for (int i=0;i < v.size()&&n!=1; i++)
    {
        if(v[i] * v[i] > n)
        {
            if(n != 1) odd++;
            break;
        }
        while (n % v[i] == 0)
        {
            power++;
            n = n / v[i];
        }
        if (power!=0)
        {
            if (power%2==0)even++;
            else odd++;
        }
        power =0;
    }
}
int main() {
    int t,x;
    cin>>t;
    sieve(1e7);
    for (int i = 0; i < t; i++)
    {
        cin>>x;
        if (x==1 ||x==0)
            cout<<"Ordinary Number"<<endl;
        else
        {
            num_of_power(x);
            if (even > odd)
            {
                cout<<"Psycho Number"<<endl;
            }
            else
            {
                cout<<"Ordinary Number"<<endl;
            }
        }
    }
    return 0;
}
