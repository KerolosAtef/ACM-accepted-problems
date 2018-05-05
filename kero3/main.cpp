
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    char a;
    cin >> x>>a>>y;
    if (a=='+'){
    	z=x+y;
    	cout << z;
	}else if (a=='-'){
    	z=x-y;
    	cout << z;
}
else if (a=='*'){
    	z=x*y;
    	cout << z;
    	
		}
		else if (a=='/'){
    	z=x/y;
    	cout << z;
    }
	return 0;
}
