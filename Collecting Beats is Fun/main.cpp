#include <iostream>

using namespace std;

int main()
{
    string x;
    int k,count =0;
    int arr [4][4];
    cin >> k;
    k*=2;
    for (int i=0; i < 4;i++)
    {
        cin >> x;
        for (int j =0;j<4;j++)
        {
            if (x[j]!='.')
            {
            x[j]-='0';
            arr[i][j]=x[j];
            count ++;
            }
            else
            {
            arr[i][j]=-1;
            }
        }
    }
    int n;
    do
    {
        n=0;
        int m=0;
        for (int i=0; i<4;i++)
        {
            for (int j =0; j<4;j++)
            {
                if (arr [i][j]==1)
                {
                    m++;
                    arr[i][j]=-1;
                }
            }
        }
        if (m>k)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            for (int i=0; i<4;i++)
            {
                for (int j =0; j<4;j++)
                {
                    if (arr [i][j]!=-1)
                    {
                        arr[i][j]-=1;
                    }
                }
            }
        }
        for (int i=0; i<4;i++)
        {
            for (int j =0; j<4;j++)
            {
                if (arr [i][j]==-1)
                {
                   n++;
                }
            }
        }

  /*cout << n<<endl ;
    for(int i=0; i<4;i++)
    {
        for (int j=0; j<4;j++)
        {
            cout << arr [i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl<<endl;
    */
    }
    while (n!=16);
    cout << "YES";

    return 0;
}
