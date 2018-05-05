#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <int > v;
long long power (int x,int y)
{
    long long z=1;
    if (y==1)return x;
    if (y==0)return 1;
    else if (y%2==0)
    {
        z=power(x,y/2);
        return (z*z);

    }
    else
    {
        z=power(x,y/2);
        return (x*z*z);
    }
}
void sieve (ll n)
{
    int reminder,temp;
    bool check=false;
    vector <bool> isprime(n+1,true);
    isprime[0]=0; isprime[1]=0;
    for (ll i=2;i*i<=n+1;i++)
       if (isprime [i])
           for (ll j=i*2;j<=n+1;j+=i)
               isprime[j]=0;

    for (ll i=2;i<=n+1;i++)
    {
        if (isprime [i])
        {
            temp=i;
            while (i!=0)
            {
                reminder= i%10;
                if (reminder==0)
                {
                    check=true;
                    break;
                }
                i=i/10;
            }
            i=temp;
            if (check==false)
            {
                int digits=2,power2;
                bool check2=true;
                while (digits >1)
                {
                    digits = log10(i);
                    power2=power(10,digits);
                    i = i %power2;
                    if (! isprime [i])
                    {
                        check2=false;
                        break;
                    }
                }
                i=temp;
                if (check2==true)
                    v.push_back(i);
                else
                    check2=true;
            }
            else
                check=false;
        }
    }
}
int main()
{
    v.push_back(2); v.push_back(3); v.push_back(5); v.push_back(7);
    sieve(1e6);
    int t,n,count=0;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        for (int j=0;j<v.size();j++)
        {
            if (v[j]<=n)count++;
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
