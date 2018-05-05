#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    scanf("%lld",&x);
    long long arr [x];
    for (int i=0;i<x;i++)
        scanf("%lld",&arr[i]);

    for (int i=0;i<x;i++)
        printf("%lld ",arr[i]);
    return 0;
}
