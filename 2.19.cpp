#include <iostream>

using namespace std;
int a,b,c;

int main()
{
    cout << "Input three different integers" ;
    cin>>a>>b>>c;
    cout<<"Sum is "<<a+b+c<<endl;
    cout<<"Average is "<<(a+b+c)/3<<endl;
    cout<<"Product is "<<a*b*c<<endl;
    if (a>b&&b>c)
       {cout<<"Smallest is "<<c<<endl;
        cout<<"Largest is "<<a<<endl;}
    else if(a>c&&c>b)
        {cout<<"Smallest is "<<b<<endl;
        cout<<"Largest is "<<a<<endl;}
    else if(b>c&&c>a)
       {
           cout<<"Smallest is "<<a<<endl;
           cout<<"Largest is "<<b<<endl;
       }
     else if (b>a&&a>c)
       {
           cout<<"Smallest is "<<c<<endl;
           cout<<"Largest is "<<b<<endl;
       }
    else if(c>a&&a>b)
        {
           cout<<"Smallest is "<<b<<endl;
           cout<<"Largest is "<<c<<endl;
       }
    else
       {
           cout<<"Smallest is "<<a<<endl;
           cout<<"Largest is "<<c<<endl;
       }
       return 0;
}
