#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    string arr[11]={"ABSINTH", "BEER","BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    string x;
    for (int i=0;i<n;i++)
    {
        cin >>x;
        if (x=="0")count ++;
        for (int j=0;j<11;j++)
        {
            if (x==arr[j])
                count ++;
        }
        int g =atoi(x.c_str());
        if (g<18&&g!=0)
            count++;
    }
    cout<<count ;
    return 0;
}
