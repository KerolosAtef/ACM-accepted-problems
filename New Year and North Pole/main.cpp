#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,south =0,north =0;
    cin >>n;
    pair <int ,string>arr[n];
    for (int i=0;i<n ;i++)
    {
        cin >> arr[i].first>>arr[i].second;
        if (arr[i].second=="South")
        {
            south+=arr[i].first;
        }
        else if (arr[i].second=="North")
        {
            north+=arr[i].first;
        }
    }
    if (north ==south)
        cout <<"YES";
    else
        cout << "NO";
    return 0;
}
