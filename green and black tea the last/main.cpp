#include <iostream>

using namespace std;

int main()
{
    int n ,k,G,B,G_original,B_original;
    cin >>n>>k>>G>>B;
    G_original=G;
    B_original=B;
    char arr [n];
    int i=0,count =0,black=0,green=0;
    while (max (G,B)>0)
    {
        while (B>G && count <k)
        {
            arr[i]='B';
            count ++;
            B--;
            i++;
            if (count ==k)
            {
                arr[i]='G';
                i++;
                G--;
            }
        }
        count =0;
        while (B<G && count <k)
        {
            arr[i]='G';
            count ++;
            G--;
            i++;
            if (count ==k)
            {
                arr[i]='B';
                i++;
                B--;
            }
        }
        while (B==G &&i<n)
        {
            if (i==0)
            {
                arr[i]='B';
                i++;
            }
            else
            {
                if (arr[i-1]=='G')
                {
                    arr[i]='B';
                    i++;
                }
                else
                {
                    arr[i]='G';
                    i++;
                }

            }
            if (i==n)
            {
                B=-1;
                G=-1;
            }

        }
    }
    for (int j=0;j<n;j++)
    {
        if (arr[j]=='B') black++;
        else if (arr[j]=='G') green++;
    }
    if (black ==B_original && green ==G_original)
        for (int j=0;j<n;j++)
            cout<<arr[j];
    else
        cout << "NO";
    return 0;
}
