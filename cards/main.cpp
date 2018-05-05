#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,count=0;
    cin >>n;
    int arr [n];
    for (int i=0;i<n;i++)
    {
        cin >>arr[i];
        sum+=arr[i];
    }
    int x= sum /(n/2);
    for (int i=0;i<n;i++)
    {
        int y=x-arr[i];
        for (int j=i+1;j<n;j++)
        {
           if (arr[j]==y)
           {
                cout<<i+1 <<" " <<j+1<<endl;
                arr[i]=arr[j]=0;
                break;
           }
        }
    }

    return 0;
}
