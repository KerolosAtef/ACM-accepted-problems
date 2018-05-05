#include <iostream>

using namespace std;

int main()
{
    double x,y;
    char  o;
    double answar;

    cout << "enter the first number \n";
    cin >> x;

    cout << " enter the second number \n";
    cin >> y;

    cout << "which operation you want \n";
cin >> o;

    if (o == '+'){
        answar = x+y;
        cout<< answar;
    }

    else if(o=='-'){
        answar = x-y;
           cout<< answar;
    }
      else if (o=='*'){
        answar = x*y;
           cout<< answar;
      }
    else if (o=='/'){
        answar= x/y;
   cout<< answar;
    }
    return 0;
}
