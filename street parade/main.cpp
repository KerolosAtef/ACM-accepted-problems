#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
    int n,x;
    cin >>n;
    if (n==0)
        break;
    queue <int>q,q2;
    stack <int> s;
    for (int i=0;i<n;i++)
    {
        cin >>x;
        q.push(x);
        q2.push(i+1);
    }
    while (q.size()!=0)
    {
        if (q.size() !=0 &&q.front() ==q2.front())
        {
            q2.pop();
            q.pop();
        }
        else if (s.size()!=0 &&q.size()!=0&&s.top() ==q2.front())
        {
            s.pop();
            q2.pop();
        }
        else if (q.size()!=0)
        {
            s.push(q.front());
            q.pop();
        }
    }
    while (!s.empty())
    {
        if (s.top() ==q2.front())
        {
            s.pop();
            q2.pop();
        }
        else
            break;
    }
    if (q2.size()==0)
        cout<<"yes"<<endl;
    else
        cout <<"no"<<endl;


    }
    return 0;
}
