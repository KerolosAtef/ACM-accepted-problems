#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,x;
    cin >> n >> m >> k;
    int arr [n];
    for (int i=0;i<n;i++)
    {
        cin >> arr [i];
    }
    sort (arr,arr+n,greater <int> ());
    if (m<=k)
    {
        cout << 0;
        return 0;
    }
    else
    {
        x= m-(k-1);
        for (int i=0; i< n;i++)
        {
            if (x >=arr[i])
            {
                x=x-arr[i];
                if (x==0)
                {
                    cout << i+1;
                    return 0;
                }
                else
                {
                 x++;
                }
            }
            else
            {
                cout << i+1;
                return 0;
            }
        }

    }
    cout << -1;
    return 0;
}
