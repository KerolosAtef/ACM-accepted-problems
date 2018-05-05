#include <iostream>

using namespace std;

int bubble (int arr [],int n)
{
   while (true)
   {
       int temp;
       bool check =false ;
       for ( int i=0; i<n-1;i++)
       {
           if (arr [i+1]>arr[i])
           {
               temp = arr [i+1];
               arr[i+1]=arr[i];
               arr [i]=temp;
               check =true ;
           }
       }
       if (check == false)
       {
           break;
       }
       check = false ;
   }
}
int main()
{
    int arr [5]={1,2,3,4,5};
    bubble(arr,5);
    for (int i=0;i < 5 ;i++)
    {
        cout << arr [i]<<" ";
    }


    return 0;
}
