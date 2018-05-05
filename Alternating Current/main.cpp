#include <iostream>

using namespace std;

int main()
{
    string x;
    int A=0,B=0;
    cin>>x;
    for (int i=0;i<x.length();i++)
    {
        if (x[i]=='-'&& (i+1)%2==0)
            x[i]='A';
        else if (x[i]=='+'&& (i+1)%2==0)
            x[i]='B';
        else if (x[i]=='+'&& (i+1)%2==1)
            x[i]='A';
        else if (x[i]=='-'&& (i+1)%2==1)
            x[i]='B';
    }
    for (int i=0;i<x.length();i++)
    {
        if (x[i]=='A')
            A++;
        else
            B++;
    }
    if (A==B)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
