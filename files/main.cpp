#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream kero;
    ifstream kero2;
    kero.open("writing.txt");
    kero <<"i love youstina boshra awe \n";
    kero <<"i can't imagine that my god is very beautiful thanks god ";
    kero.close();
    kero2.open("writing.txt");
    string s;
     while (getline(kero2,s))
     {
        cout << s << endl;
     }
    return 0;
}
