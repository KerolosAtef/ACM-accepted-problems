#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j=1;
    while (true)
    {
    int mini_of_exchage=0;
    string x;
    cin >>x;
    if (x[0]=='-')
        break;
    stack <char> s;
    if (x[0]=='}')
    {
       x[0]='{';
       mini_of_exchage++;
       s.push(x[0]);
    }
    else
        s.push(x[0]);
    for (int i=1;i<x.length();i++)
    {
        if (s.size()!=0&&s.top() !=x[i])
        {
            s.pop();
        }
        else
        {
            if (x[i]=='}'&&s.size()==0)
            {
                x[i]='{';
                mini_of_exchage++;
                s.push(x[i]);
            }
            else
            {
                s.push(x[i]);
            }
        }
    }
    mini_of_exchage=mini_of_exchage+(s.size()/2);
    cout <<j<<". "<<mini_of_exchage<<endl;
    j++;
    }
    return 0;
}
