#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset <int > st ;
    vector <int > v,v1;
    st.insert(5);
    st.insert(5);
    st.insert(8);
    st.insert(60);
    st.insert(55);
    v.assign(st.begin() ,st.end());
    /*vector <int>::iterator it ;
    it =lower_bound(v.begin(),v.end(),55);
    cout<<*it ;*/
    partial_sum(v.begin(),v.end(),back_inserter(v1));
    for (int i=0;i<v.size();i++)
        cout<<v1[i]<<" ";
    return 0;
}
