#include <iostream>
#include <array>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;

    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>g>>k>>l;
    const size_t monthlyTemperatures=12;
    array<double,monthlyTemperatures>n=
    {
        a,b,c,d,e,f,g,h,i,j,k,l
    };
    cout << n[3] << endl;
    return 0;
}
