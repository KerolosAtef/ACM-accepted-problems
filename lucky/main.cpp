#include <iostream>

using namespace std;

int main()
{
   string n;
   cin >>n;
   int x=0,y,sum=0,s=1;
   y=n.length();
   int arr [y];
    for (int i =0; i<y ;i++)
   {
      if ( (n[i]-'0')==4||(n[i]-'0')==7)
      {
        x+=1;
      }
      arr [i]=(n[i]-'0');
   }
   for (int j=y-1;j>=0;j--)
   {
     sum =sum +arr[j]*s ;
     s=s*10;
   }
   if (x==y)
    cout << "YES";

  else if (sum %4==0||sum %7==0||sum %47==0||sum %74==0)
   {
       cout << "YES";
   }

else {
    cout <<"NO";
}
    return 0;
}
