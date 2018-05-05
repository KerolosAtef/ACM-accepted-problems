#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double power (double x,long long y)
{
    double z;
    if (y==1)return x;
    else if(y==0)return 1;
    else if (y%2==0)
    {
        z=power(x,y/2);
        return z*z;

    }
    else
    {
        z=power(x,y/2);
        return x*z*z;
    }
}
int main()
{
    double ans;
    long long n,t;
    cin >> n >> t;
    ans = power(1.000000011, t);
    ans *= n;
    printf("%.30f", ans);
    return 0;
}

