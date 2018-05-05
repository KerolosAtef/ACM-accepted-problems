#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,count=1;
    cin>>t;
    while (t>0)
    {
        cin >>n;
        pair <int,int> arr[n];
        for (int i=0;i<n;i++)
            cin>>arr[i].second>>arr[i].first;
        sort (arr,arr+n);
        int u=0;
        for (int i=1;i<n;i++)
        {
            if (arr[i].second>=arr[u].first)
            {
                count++;
                u=i;
            }
        }
        cout<<count<<endl;
        count=1;
        t--;
    }
    return 0;
}
