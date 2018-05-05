#include <iostream>

using namespace std;

int main()
{
    int n,count=0,a=0,b=0;
    cin >>n;
    int arr [n];
    for (int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]>0)
        {
           for (int j=1;j<=arr[i];j++)
           {
              if (arr[i+j]>0)
              {
                b=arr[i]-a;
                arr[i+j]=arr[i+j]+b;
                i=i+j;
                break;
              }
              else
                a++;
           }
           i=i+arr[i];
        }
        else
            count ++;
        a=0;
    }
    cout <<count;
    return 0;
}
