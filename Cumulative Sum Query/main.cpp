#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        arr[i]=sum;
    }
    int q,m,j;
    cin>>q;
    for (int i=0;i<q;i++)
    {
        cin >>m>>j;
        if (m==0)
            cout<<arr[j]<<endl;
        else
            cout<<arr[j]-arr[m-1]<<endl;
    }

    return 0;
}
