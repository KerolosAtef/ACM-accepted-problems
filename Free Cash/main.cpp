#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    int arr2[3000];

int main()
{
    int n;
    cin >>n;
    pair <int ,int> arr [n];
    for (int i=0;i<n;i++)
    {
        cin >>arr[i].first;
        cin >> arr[i].second;
    }
    sort (arr,arr+n);
    for (int i=0;i<n;i++)
    {
        if ((arr[i].second )==(arr[i+1].second)&&arr[i].first ==arr[i+1].first)
        {
            arr[i].first *=60;
            arr2[arr[i].second+arr[i].first ]++;
        }
    }
    sort (arr2,arr2+3000,greater <int>());
    cout << arr2[0]+1;
    return 0;
}
