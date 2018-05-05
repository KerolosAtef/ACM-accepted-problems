#include <iostream>

using namespace std;

int main()
{
    int n ,a,b,c,x;
    cin >> n;
    for (int i =0; i <n;i++)
    {
        cin >> a>>b>>c;
        x=a+b+c;
        if (x==180)
            cout <<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
