#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s , n,x,y ;
    cin >> s >> n;
    pair <int ,int > arr [n];
    for (int i =0; i <n; i++)
    {
        cin >>x>>y;
        arr [i]={x,y};
    }
    sort (arr, arr+n);

    for (int i =0; i <n; i++)
    {
       if (s> arr [i].first )
       {
           s= s+arr [i].second;
       }
       else
       {
           cout << "NO";
           return 0;
       }
    }
    cout << "YES";


    return 0;
}
