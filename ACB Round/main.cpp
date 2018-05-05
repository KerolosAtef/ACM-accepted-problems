#include <iostream>
#include <bits/stdc++.h>
#define in ios :: sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{
    in ;
    //freopen("name.in","r",stdin);
    int t ,n,m;
    cin>>t;
    while (t--)
    {
        cin>>n>>m ;
        int arr [n];
        for (int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,greater <int> ());
        if (m==0)
            cout<<0<<endl;
        else if (arr[m-1]==0)
        {
            for (int i=m-1;~i;i--)
            {
                if (arr[i]==0)
                    m--;
            }
            cout<<m<<endl;
        }
        else
        {
            for (int i=m;i<n;i++)
            {
                if (arr[i]==arr[m-1])
                    m++;
            }
            cout<<m<<endl;
        }
    }
    return 0;
}
