#include <iostream>

using namespace std;

int main()
{
    int i=1,n,result=1;
    cout<<"输入一个非负整数";
        cin>>n;

    while(i<=n)
    {
        result=result*i;
        i++;



    }
    cout<<"n的阶乘为"<<result<<endl;




    return 0;
}
