#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr [n][m];
    bool check=false;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >>arr[i][j];
            if (i==0 || j==0 ||i==n-1 ||j==m-1)
                if (arr[i][j] ==1)
                   check=true;
        }
    }
    if (check ==false)
        cout<<"4";
    else
        cout<<"2";
    return 0;
}
