#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >>n;
    vector <int >v;
    for (int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    cout<< "Enter the number you want to search "<<endl;
    int x;
    cin>>x;
    int l=0,r=v.size()-1,mid;
    while (l<=r)
    {
        mid=(r+l)/2;
        if (x==v[mid])
        {
            cout<<"index of number "<<x<<" is "<<mid+1;
            break;
        }
        else if (x>v[mid])
        {
            l=mid+1;
        }

        else
        {
            r=mid-1;
        }
    }
    return 0;
}
