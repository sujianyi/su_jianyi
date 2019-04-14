#include <iostream>

using namespace std;

int a=0,n=1;

int main()
{
    for(int i=1;i<=1000;i=(i+2)*n)
    {



        a+=(4/i);
        n=n*(-1);

    }
    cout << "π的近似值是" <<a<< endl;
    return 0;
}
