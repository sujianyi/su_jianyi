#include <iostream>
#include <math.h>
using namespace std;
int hypotenuse(double a,double b);
int main()
{
    int a,b;

    cout<<"�����߱߳���"<<hypotenuse(a,b)<<endl;

}
int hypotenuse(double a,double b)
{
    double c=0,d=0;
    cout<<"������ֱ�������ε�ֱ�Ǳ�.\n";
    cin>>a;
    cout<<"������ֱ�������ε�ֱ�Ǳ�.\n";
    cin>>b;
    c=a*a+b*b;
    d=sqrt(c);
    return d;
}
