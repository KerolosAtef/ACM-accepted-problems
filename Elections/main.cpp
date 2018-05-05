#include <iostream>

using namespace std;
int maxiarr (int arr[],int x)
{
    int maxi=arr[0];
    int miniindex;
    for (int i=1;i<x;i++)
    {
        if (maxi <arr[i])
        {
            maxi =arr[i];
        }
    }
    for (int i=0;i<x;i++)
    {
        if (maxi ==arr[i])
        {
            miniindex =i+1;
            break;
        }
    }
    return miniindex;
}
int main()
{
    int n,m;
    cin >>n>>m;
    int arr [110]={};
    int f[110]={};
    for (int i=0; i <m ;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin >>arr[j];
        }
        f[maxiarr(arr,n)]++;
    }
   cout << maxiarr(f,110)-1;


    return 0;
}
