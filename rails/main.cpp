#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int n,x,y;
        cin >>n;
        if (n==0)
            return 0;
        while (true)
        {
            queue <int>q,q2;
            stack <int> s;
            for (int i=0;i<n;i++)
            {
                cin >>x;
                if (x==0)
                {
                   y=0;
                   break;
                }
                q2.push(x);
                q.push(i+1);
            }
            if (y==0)
            {
                y=1;
                cout<<endl;
                break;
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
                cout<<"Yes"<<endl;
            else
                cout <<"No"<<endl;
            while (!q.empty())
            {
                q.pop();
            }
            while (!q2.empty())
            {
                q2.pop();
            }
            while (!s.empty())
            {
                s.pop();
            }
        }
    }
    return 0;
}
