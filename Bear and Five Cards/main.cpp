#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr [5];
    int f [105]={};
    int sum =0,maxi =0;
    for (int i=0;i<5;i++)
    {
        cin >> arr [i];
        sum +=arr [i];
    }
    for (int i=0;i<5;i++)
    {
        f[arr[i]]++;
    }
    for (int i=0;i<=100;i++)
    {
        if (f [i]==2)
        {
            if (i*2>maxi)
            {
                maxi =i*2;
            }
        }

        else if (f [i]>=3)
        {
            if (i*3>maxi)
            {
                maxi =i*3;
            }
        }
    }
    if (maxi > 0)
    {
        cout << sum -maxi;
    }
    else
    {
        cout << sum;
    }


    return 0;
}
