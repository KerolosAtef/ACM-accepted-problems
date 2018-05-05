#include <iostream>

using namespace std;

int main()
{/*
        int n,x=0;
        cin >> n;
        int arr [n];
            for (int i=0; i<n;i++)
            {
                cin >> arr [i];
            }
            for (int i=2;i<n-1;i++)
            {
                if (arr[i]<arr[i+1])
                {
                    for (int j=0; j<i;j++)
                    {
                        if (j==i-1&&arr[i]-arr[i]!=1)
                        {
                            continue;
                        }
                        if (min(arr[j],arr[j+1]) <=arr[i]&& max(arr[j],arr[j+1])<arr[i+1]&& max(arr[j],arr[j+1])>arr[i])
                        {
                            x++;
                            break;
                        }
                    }
                    if (x==1)
                    {
                    cout << "yes";
                    return 0;
                    }
                }
                else
                {
                    for (int j=0; j<i;j++)
                    {
                        if (j==i-1&&arr[i-1]-arr[i]!=1)
                        {
                            continue;
                        }
                        if (min(arr[j],arr[j+1]) <arr[i+1]&& max(arr[j],arr[j+1])>arr[i+1]&& max(arr[j],arr[j+1])<arr[i])
                        {
                            x++;
                            break;
                        }
                    }
                    if (x==1)
                    {
                        cout << "yes";
                        return 0;
                    }
                }
            }
            cout << "no";
*/
    int n,a,b,x,y;
    cin >> n;
    int arr [n];
    for (int i=0;i<n;i++)
    {
        cin>> arr [i];
    }
    for (int i=0; i <n-1;i++)
    {
        a= min (arr[i],arr[i+1]);
        b= max (arr[i],arr[i+1]);
        for (int j=0; j <n-1;j++)
        {
            x= min (arr[j],arr[j+1]);
            y= max (arr[j],arr[j+1]);
            if (x>a &&x<b&&b<y )
            {
                cout << "yes";
                return 0;
            }
        }
    }
    cout << "no";

    return 0;
}
