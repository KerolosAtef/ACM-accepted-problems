#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sorting (int arr [],int n,int x)
{
    while (true)
    {
        bool check =false;
        if (n>1)
        {
            if (arr [n-1]>arr[n-2])
            {
                swap(arr[n-1],arr[n-2]);
                check =true;
                sorting(arr,n-1,x);
            }
            else
            {
                sorting (arr,n-1,x);
            }
        }
        n=x;
        if (check == false)
        {
            break;
        }
    }
}
int main()
{
    int n; cin >> n;
    int arr [n];
     for (int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    // bool o=binary_search (arr ,arr+n,5);
    sorting(arr,n,n);
    // sort (arr,arr+n);
    // sort (arr,arr+n,greater <int>());
    // cout << o<<endl;
    for (int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}
