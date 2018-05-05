#include <iostream>

using namespace std;

int main()
{
    int n,m,k,count =1,a,d;
    cin >>n>>m>>k;
    for (int i=0,j=2;i<n;i++,j+=2)
    {
        d=m*j;
        if (k<=d)
        {
           cout <<count<<" ";
           if (count ==1)
           {
               a=k;
               break;
           }
            d=d-(2*m);
            a=k-d;
            break;
        }
        else
            count++;
    }
    int odd_arr[a+2],even_arr[a+2];
    for (int i=1,j=0;j<a+2;i+=2,j++)
    {
        odd_arr[j]=i;
        even_arr[j]=i+1;
    }
    if (a%2==1)
    {
        for (int i=0;i<(a+2);i++)
        {
            if (a==odd_arr[i])
                cout <<i+1<<" ";
        }
        cout<<"L";
    }
    else
    {
        for (int i=0;i<(a+2);i++)
        {
            if (a==even_arr[i])
                cout <<i+1<<" ";
        }
        cout <<"R"<<endl;
    }

    return 0;
}
