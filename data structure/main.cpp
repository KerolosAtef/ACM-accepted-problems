#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name ;
    int salary;
    int position;
};
bool cmp (const student &first,const student &second)
{
    if (first.salary !=second.salary)
        return first.salary>second.salary;
    if (first.name !=second.name)
        return first.name<second.name;

    return first.position<second.position ;
}
int main()
{
    int n;
    cin >>n;
    student arr [n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i].name>>arr[i].salary>>arr[i].position;
    }
    sort (arr,arr+n,cmp);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i].name<<" "<<arr[i].salary<<" "<<arr[i].position<<endl;
    }

    return 0;
}
