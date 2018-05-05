#include <iostream>

using namespace std;

int main()
{
long long x,z ;
string s ;
cin>>x;
for (int i=0;i<=x;i++)
{
    cin>>s;
    z=s.size();
    if (z>=10)
    {
        cout<< s[0]<<z-2<<s[z-1] <<"\n";

    }
    else
    {
        cout<<s;
    }
}


    return 0;
}
