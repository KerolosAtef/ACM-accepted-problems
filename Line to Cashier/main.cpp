#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum,total;
    cin >> n;
    int arr [n];
    int arr2 [n];
    for (int i=0;i <n;i++)
    {
        cin >> arr [i];
    }
    for (int i=0;i <n;i++)
    {
        sum=0;
        for (int j=0;j <arr [i];j++)
        {
            cin >> a;
            sum+=a;
        }
        total =(sum *5)+(arr[i]*15);
        arr2 [i]=total;
    }
    sort (arr2,arr2+n);
    cout << arr2[0];
    return 0;
}
