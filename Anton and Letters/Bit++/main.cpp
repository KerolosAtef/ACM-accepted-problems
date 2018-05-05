#include <iostream>

using namespace std;

int main()
{
    int x=0,n;
    string y;
    cin >> n;
    for (int i=0;i<n;i++)
    {
     cin >> y;
     if (y[0]=='X'&&y[1]=='+' || y[0]=='+')
     {
        x=x+1;
     }
     else if (y[0]=='X'&&y[1]=='-'||y[0]=='-')
     {
        x=x-1;
     }
    }
    cout << x;
    return 0;
}
