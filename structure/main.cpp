#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Employee
{
    string name;
    int salary;
    int position;
};
bool cmp (const Employee &first,const Employee &second )
{
    if (first.salary != second .salary)
        return first.salary > second.salary;
    if (first.name !=second.name)
        return second.name>first.name;
    return second.position >first.position;
}
int main()
{
    Employee emps [5]={{"ali",70,2},{"baher",70,5},{"baher",70,5},{"baher",70,3},{"zyad",99,10}};
    sort (emps ,emps+5,cmp);
    for (int i=0;i<5;i++)
        cout <<emps[i].name<<" "<<emps[i].salary<<" "<<emps[i].position<<endl;
    return 0;
}
