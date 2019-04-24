#include <iostream>

using namespace std;
int intergerPower(int base,int exponent);
int main()
{
    int base=0,exponent=0;

    cout << "the sum is "<<intergerPower( base, exponent)<<endl;
}
int intergerPower(int base,int exponent)
{
    int sum=1;
    cout<<"Please enter the base.\n";
    cin>>base;
    cout<<"Please enter the exponent.\n";
    cin>>exponent;

    for(int i=1; i<=exponent; ++i)
    {
        sum=sum*base;
    }

    return sum;
}




