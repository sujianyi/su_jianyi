#include <iostream>

using namespace std;

int main()
{
    int number=0,i=0,total=0;
    cout<<"请输入一个数";
    cin>>i;
    for (int number=i*100;number>=100;number-=100)
    {
        total=total+number;
    }
    cout<<total+i<<endl;
    return 0;
}
