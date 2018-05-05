#include <iostream>

using namespace std;

int main()
{
    string str="fine";
    str.replace(3,1,"al");
    cout <<str<<endl;
    int arr[10]={12,5,1,26,52,34,2,10,75,93},*ptr;
    ptr=arr;
    cout <<*(ptr+3)+*(ptr+7)<<endl;
    for (int i=1;i<10;i++)
    {
        if (i%3)cout <<i<<endl;
    }
    int i=3;
    bool n=true;
    while (n==true)
    {
        if (i<0)n=false;
        cout <<n;
        i--;
    }
    cout <<endl;
    int k=0;
    if (k>0)cout << "positive";
    else cout << "negative";
    return 0;
}
