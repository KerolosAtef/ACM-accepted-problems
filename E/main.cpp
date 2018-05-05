#include <iostream>

using namespace std;

int main()
{
    long long a,b,a1,b1,a2,b2,m,n,s,k;
    cin >> a>>b;
    cin  >>a1>>b1;
    cin >>a2>>b2;
    m = a-a1;
    n =b-b1;
    if (m<0||n<0)
    {
        s=a-b1;
        k=b-a1;
    }
    if (m>=a2||s>=a2)
    {
        if (n>=b2||k>=b2)
        cout <<"YES";
    }
    else
        cout << "NO";
    return 0;
}
