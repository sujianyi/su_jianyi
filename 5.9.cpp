#include <iostream>

using namespace std;

int a=0,total=1;

int main()
{
    for(int i=1;i<=15;++i)
    {
        if(i%2!=0)
        {
            a=i;
        }
        else
        {
            a=1;
        }
        total=total*a;

    }
    cout << "从1到15中奇数的乘积是" <<total<< endl;
    return 0;
}
