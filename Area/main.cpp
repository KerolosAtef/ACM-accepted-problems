#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A,B,C,M,D,S,Q,R;
    double pi=3.14159;
    cin>>A;
    cin>>B;
    cin>>C;
    M=(0.5*A)*C;
    D=pi*(C*C);
    S=(A+B)*(0.5*C);
    Q=(B*B);
    R=(A*B);
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<M<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<D<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<S<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<Q<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<R<<endl;
    return 0;
}
