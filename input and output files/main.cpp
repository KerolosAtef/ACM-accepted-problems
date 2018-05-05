#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream kero;
    kero.open("names.txt",ios::out);
    kero<<"kerolos\n";
    kero<<"atef\n";
    kero.close();
    kero.open("names.txt",ios::app|ios::out);
    kero<<"ibrahim\n";
    kero<<"kamel\n";
    kero <<"ataallh\n";
    kero.close();
    kero.open("names.txt",ios ::in);
    string x;
    while (kero>>x)
        cout<<x<<endl;
    return 0;
}
