#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,k,q,x,y,z;
cin >> n >> k >> q;
vector <int>v;
vector <int >v1;
vector <string >v2;
for (int i=0;i<n;i++)
{
    cin >> z;
    v.push_back(z);
    v1.push_back(z);
}

sort (v.begin(),v.end(),greater <int>());
for (int j=0;j<q;j++)
{
    cin >>x>>y;;
    if (x=2&& v1[y-1]>=v[k-1])
    v2.push_back("Yes");
if (x=2&& v1[y-1]<v[k-1])
       v2.push_back("No");
       /*
if (x=1&& v1[y-1]>=v[k-1])
        v2.push_back("Yes");
if (x=1&& v1[y-1]<v[k-1])
        v2.push_back("No");
*/
}
for (int c =0;c<v2.size();c++)

{
    cout << v2[c]<<"\n";
}

    return 0;
}
