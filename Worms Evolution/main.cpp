#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum,y=-5;
    bool check=false;
    cin>>n;
    int arr[n];
    vector <int>v;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (j==i)
                continue;
           sum=arr[i]+arr[j];
            v.push_back(sum);
        }
    }
    for (int i=0;i<v.size();i++)
    {
        for(int j=0;j<n;j++)
        {
            if (v[i]==arr[j])
            {
                y=j;
                check=true;
                break;
            }
        }
        if (check==true)
            break;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (j==i)
                continue;
           sum=arr[i]+arr[j];
           if (sum==arr[y]&&y!=-5)
            {
                cout<<y+1<<" "<<j+1<< " "<<i+1;
                return 0;
            }
        }
    }
    cout<<"-1";
    return 0;
}
