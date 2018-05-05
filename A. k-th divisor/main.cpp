#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll > v;
void divisors (ll n)
{
    v.push_back(1);
    if (n!=1)
        v.push_back(n);
    ll i;
    for ( i=2;i*i<n;i++)
    {
        if (n%i==0)
        {
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    if (i*i==n)
        v.push_back(i);
}
int main()
{
    ll n ,k;
    cin>>n>>k;
    divisors(n);
    sort(v.begin(),v.end());
    if (v.size()<k)
        cout<<-1;
    else
        cout<<v[k-1];
    return 0;
}
