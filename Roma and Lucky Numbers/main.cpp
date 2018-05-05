#include <iostream>

using namespace std;

int main()
{
    int n ,k,a=0,b=0 ;
    string x;
    cin >> n>>k;
    for (int i=0;i<n;i++)
    {
        cin >>x;
        int y= x.length();
        for (int j=0;j<y;j++)
        {
            if (x[j]=='4'|| x[j]=='7')
            {
                a++;
            }
        }
        if (a <= k)
        {
            b++;
        }
        a=0;
    }
    cout << b;

    return 0;
}
