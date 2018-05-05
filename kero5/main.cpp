
#include <iostream>

using namespace std;

int main()
{
  int x1,y1,x2,y2;
  cin >> x1>>y1>>x2>>y2;
  if (y2>y1){
  
  
  cout << "("<< x1 << ","<<y2<<")";
   cout << "("<< x2 << ","<<y2<<")";
    cout << "("<< x2 << ","<<y1<<")";
     cout << "("<< x1 << ","<<y1<<")";
}
 else {
 	
  cout << "("<< x2 << ","<<y1<<")";
   cout << "("<< x1 << ","<<y1<<")";
    cout << "("<< x1 << ","<<y2<<")";
     cout << "("<< x2 << ","<<y2<<")";
 }
  
  
  
	return 0;
}
