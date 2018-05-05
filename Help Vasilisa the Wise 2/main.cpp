#include <iostream>

using namespace std;

int main()
{
    int x;
    int arr[6];
    int arr2 [2][2];
    for (int i=0; i <6 ;i++)
    {
        cin>> arr [i];
    }
    for (int i=1; i <=arr[0] ;i++)
    {
        arr2 [0][0]=i;
        arr2 [0][1]=arr[0]-i;
        for (int k=1; k <arr[1] ;k++)
        {
            arr2 [1][0]=k;
            arr2 [1][1]=arr[1]-k;
            if ((arr2[0][0]+arr2 [1][0]==arr[2]) && (arr2[0][1]+arr2 [1][1]==arr[3]) && (arr2[0][0]+arr2 [1][1]==arr[4]) && (arr2[0][1]+arr2 [1][0]==arr[5]))
            {
                if (arr2[0][0]!= arr2[0][1] && arr2[1][0] != arr2 [1][1] && arr2[0][0] != arr2 [1][1]&&arr2[0][1] != arr2 [1][0]&&arr2[0][0] != arr2 [1][0]&&arr2[0][1] != arr2 [1][1])
                {
                    if (arr2[0][0]<10 && arr2[0][1]<10&&arr2[1][0]<10&&arr2[1][1]<10)
                    {
                        cout << arr2 [0][0]<< " "<< arr2 [0][1]<<endl ;
                        cout << arr2 [1][0]<< " "<< arr2 [1][1];
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1;


    return 0;
}
