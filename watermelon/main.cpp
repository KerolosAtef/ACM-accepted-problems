#include <iostream>

using namespace std;

int main()
{
    int n,b;
    int a =0;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        a=a+i;
        b=n-a;
        if (a%2==0&&b%2==0&&n!=2)
        {
        cout <<"Yes";
        return 0;
        }
    }
    cout << "No";
    return 0;
}
