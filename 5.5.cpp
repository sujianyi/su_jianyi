#include <iostream>

using namespace std;

int main()
{
    int number=0,i=0,total=0;
    cout<<"������һ����";
    cin>>i;
    for (int number=i*100;number>=100;number-=100)
    {
        total=total+number;
    }
    cout<<total+i<<endl;
    return 0;
}
