#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=0,c=0 ;
    cin >> n;
    int arr [3*n];
    for (int i=0; i <3*n; i+=3)
    {
        cin >>arr[i]>>arr[i+1]>>arr[i+2];

    }
    for (int j=0;j<3*n;j+=3)
    {
        a =a + arr[j];
        b = b +arr[j+1];
        c= c + arr[j+2];
    }
    if (a==0&&b ==0&&c==0)
    {
        cout << "YES";
    }
    else
    {
        cout <<"NO";
    }

    return 0;
}
