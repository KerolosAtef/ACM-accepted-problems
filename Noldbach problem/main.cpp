#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector <int> v,v2;
vector <bool> isprime (1006,true);
void sieve (int n)
{
    isprime[0]=isprime[1]=0;
    for (int i=2;i*i<=n;i++)
        if (isprime[i])
            for (int j=i*i ;j<=n;j+=i)
                isprime[j]=0;
    for (int i=0;i<=n+1;i++)
        if (isprime[i])
            v.push_back(i);
}
int main()
{
    sieve(1005);
    int n ,k,x,z;
    for (int i=0;i<v.size()-1;i++)
    {
        z=v[i]+v[i+1]+1;
        if (isprime[z])
            v2.push_back(z);
    }
    sort(v2.begin(),v2.end());

    cin>>n>>k;
    x=lower_bound(v2.begin(),v2.end(),n)-v2.begin();
    if (binary_search(v2.begin(),v2.end(),n))
        x++;
    if (x>=k)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
