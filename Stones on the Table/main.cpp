#include <iostream>

using namespace std;

int main()
{
    int n,count =0;
    cin >> n;
    string x;
    cin >>x;
    for (int i=0;i<n-1 ;i++)
    {
       if (x[i]==x[i+1])
            count ++;
    }
    cout << count;
    return 0;
}
