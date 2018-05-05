#include <iostream>

using namespace std;

int main()
{
    int n,count=0;
    cin >>n;
    pair <int,int>arr[n];
    for (int i=0;i<n;i++)
        cin >>arr[i].first >>arr[i].second;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
                continue;
            if (arr[i].first==arr[j].second)
                count ++;
        }
    }
    cout <<count ;
    return 0;
}
