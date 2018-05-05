#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,k,m,n,a,y;
    long long sum =0,ans=0;

    cin >>t;
    for (int i =0;i<t;i++)
    {
        cin >> k>>m>>n;
        long long arr[n];
        for (int j=0;j<n;j++)
        {
            cin >> arr[j];
            sum+=arr[j];
        }
        sort (arr,arr+n,greater<int>());
            a=k-sum;
            if (a==m)
                cout <<0;
            else {
                    y=m-a;
                    for (int e=0;e<n;e++)
                    {
                        if ( y>=arr[e])
                        {
                            ans =ans+1;
                        a= a+arr[e];
                          if (a==m)
                          {
                           cout <<ans<<endl;
                            break;
                          }
                           y=m-a;

                        }
                    }
            }

                        sum =0;
                        ans =0;
    }
    return 0;
}
