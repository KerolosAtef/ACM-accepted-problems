#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    bool check=false;
    string x;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin >>x>>a>>b;
        if (a>=2400 &&b >a)
          check =true;
    }
    if (check ==true)
        cout <<"YES";
    else
        cout << "NO";
    return 0;
}
