#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,mini;
    int count_stack=0,count_queue=0,count_priorityqueue=0,count=0;
    while (cin>>n)
    {
    stack <int >s;
    queue <int >q;
    priority_queue <int >pq;
    for (int i=0;i<n;i++)
    {
        cin>>a>>b;
        if (a==1)
        {
           s.push(b);
           q.push(b);
           pq.push(b);
        }
        else
        {
            count++;
            mini =min(q.size(),min(s.size(),pq.size()));
            if (s.size()!=0&&b==s.top() &&mini==s.size())
            {
                count_stack++;
                s.pop();
            }
            if (q.size()!=0&&b==q.front()&&mini==q.size())
            {
                count_queue++;
                q.pop();
            }
            if (pq.size()!=0&&b==pq.top()&&mini ==pq.size())
            {
                count_priorityqueue++;
                pq.pop();
            }
        }
    }
    if ((count ==count_stack &&count == count_priorityqueue)||(count==count_queue &&count==count_priorityqueue)||(count==count_queue &&count ==count_stack))
        cout <<"not sure"<<endl;
    else if (count ==count_stack)
        cout<<"stack"<<endl;
    else if (count ==count_queue)
        cout<< "queue"<<endl;
    else if (count ==count_priorityqueue)
        cout<<"priority queue"<<endl;
    else
        cout<<"impossible"<<endl;

    while (!q.empty())
        q.pop();
    while (!s.empty())
        s.pop();
    while (!pq.empty())
        pq.pop();

    count_stack=0,count_queue=0,count_priorityqueue=0,count=0;

    }
    return 0;
}

