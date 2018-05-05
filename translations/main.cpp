#include <iostream>

using namespace std;

int main()
{
    string x,y,temp="";
    cin>>x>>y;
    for(int i=x.length()-1;i>=0;i--)
    {
        temp.push_back(x[i]);
    }
    if (temp ==y)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;

}
