#include <iostream>

using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin >> x1>>y1>>x2>>y2;
    // rook
    if (x1==x2 || y1==y2)
    {
        cout <<"1 ";
    }
    else
        cout <<"2 ";

    //bishop
    if (x1+y1==x2+y2 || (x1==y1 &&x2==y2)||(x2-x1)==(y2-y1))
    {
        cout <<"1 ";
    }
    else if ((x1+y1) %2 ==1 && (x2+y2 )%2 ==1)
    {
        cout <<"2 ";
    }
    else if ((x1+y1) %2 ==0 && (x2+y2) %2 ==0)
    {
        cout <<"2 ";
    }
    else
        cout << "0 ";

        //king
    if (x1>=x2&&y2>=y1)
    {
        int count =0;
        while (x1!=x2&&y1!=y2)
        {
            x1--;
            y1++;
            count ++;
        }
         if (x1==x2)
        count =count+(y2-y1);
        else
          count =count +(x1-x2);
        cout << count;
    }
    else if (x1>=x2&&y1>=y2)
    {
        int count2 =0;
        while (x1!=x2&&y1!=y2)
        {
            x1--;
            y1--;
            count2 ++;
        }
         if (x1==x2)
        count2 =count2 +(y1-y2);
        else
          count2 =count2 +(x1-x2);
        cout << count2;
    }

    else if (x1<=x2&&y2>=y1)
    {
        int count3 =0;
        while (x1!=x2&&y1!=y2)
        {
            x1++;
            y1++;
            count3 ++;
        }
         if (x1==x2)
        count3 =count3 +(y2-y1);
        else
          count3 =count3 +(x2-x1);
        cout << count3;
    }
    else if (x1<=x2&&y2<=y1)
    {
        int count4 =0;
        while (x1!=x2&&y1!=y2)
        {
            x1++;
            y1--;
            count4 ++;
        }
        if (x1==x2)
        count4 =count4 +(y1-y2);
        else
          count4 =count4 +(x2-x1);
        cout << count4;
    }



    return 0;
}
