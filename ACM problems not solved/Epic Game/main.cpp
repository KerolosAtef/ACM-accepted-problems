#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair <int,int>arr[n];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i].first >>arr [i].second;
    }
    sort (arr,arr+n);
    for(int i=1; i<n; i++)
    {
        if(arr[i].second < arr[i-1].second)
        {
          cout <<"Happy Alex";
          return 0;
        }
    }
        cout <<"Poor Alex";
    return 0;
}

