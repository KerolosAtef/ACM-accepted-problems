#include <iostream>

using namespace std;
void bubble_sort (int arr[],int n)
{
    bool check =false;
    while (true)
    {
        for (int i=0;i<n-1;i++)
        {
          if (arr[i]>arr[i+1])
          {
             swap (arr[i],arr[i+1]);
             check=true;
          }
        }
        if (check==false)
            return;
        else
            check=false;
    }

}
int main()
{
    int n;
    cin >>n;
    int arr [n];
    for (int i=0;i<n;i++)
        cin >>arr[i];
    bubble_sort(arr,n);
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
