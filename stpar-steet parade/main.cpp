#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,k,a;
    queue<int> q;
    stack <int> s;
    queue <int > v;

        cin >> n;
        while(n!=0)
        {
    for (int i= 0;i<n;i++)
    {
        cin >>k;
        q.push(k);
    }


    for (int j=0;j<n; j++)
{

    if (q.front()==1)
    {
        v.push(q.front());
        q.pop();
    break;
    }
    else
    {
        s.push(q.front());
    }
    q.pop();

}
while (q.size()>0||s.size()>0)
{
if (q.front()==(v.back()+1) ){
v.push(q.front());
q.pop();
}
else if (!s.empty()&&s.top()==(v.back()+1))
{
v.push(s.top());
s.pop();
}
else if (q.empty())
{
    v.push(s.top());
    s.pop();
}
else
{
 s.push(q.front());
 q.pop();
}
}
for (int d=0 ; d<n-1 ; d++)
{
    a=v.front();
    v.pop();
    if (a!=v.front()-1)
    {
           cout << "no";
        return 0;
    }
}
cout << "yes";
    cin >> n ;
        }

    return 0;
}
