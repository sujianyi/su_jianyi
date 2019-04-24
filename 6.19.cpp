#include <iostream>
#include <math.h>
using namespace std;
int hypotenuse(double a,double b);
int main()
{
    int a,b;

    cout<<"第三边边长是"<<hypotenuse(a,b)<<endl;

}
int hypotenuse(double a,double b)
{
    double c=0,d=0;
    cout<<"请输入直角三角形的直角边.\n";
    cin>>a;
    cout<<"请输入直角三角形的直角边.\n";
    cin>>b;
    c=a*a+b*b;
    d=sqrt(c);
    return d;
}
