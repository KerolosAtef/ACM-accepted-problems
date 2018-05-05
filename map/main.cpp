#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map <string ,int >mp;
set <int>st;
int main()
{
    /*int n;
    string x,s;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        cin >>x;
        mp [x]++;
    }
    cout<<"Enter the word to tell you how many it is repeted"<<endl;
    cin >>s;
    if (mp.find(s)!=mp.end())
        cout<<mp [s];
    else
        cout<<"is not found";



*/
    for (int i=1;i<=10;i++)
        st.insert(i);
   /* auto x = st.begin();
    for (int i=1;i<=10;i++)
    {
        cout<<* advance(x,i);
    }
*/
for(set<int>::iterator it=st.begin(); it!=st.end(); ++it)
{
    int x=*it;
    cout << x<<" ";
}



    return 0;
}
