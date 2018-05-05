#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,count=0;
    string x;
    cin >> n;
    int arr[]={4,7,44,77,47,74,444,777,744,474,447,477,747,774};
    stringstream ss;
    ss<<n;
    x=ss.str();
    for (int i=0;i<x.length();i++)
    {
        if (x[i]=='4'||x[i]=='7')
            count ++;
    }
    for (int i=0;i<14;i++)
        if (count ==arr[i])
        {
            cout <<"YES";
            return 0;
        }
    cout <<"NO";
    return 0;
}
