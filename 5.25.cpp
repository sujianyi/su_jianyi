#include <iostream>

using namespace std;

int a=0;

int main()
{
    cout<<"����һ������";
    cin>>a;
    for(int i=1;i<=30;++i)
    {
        cout<<'*';
       if(i==a)
        break;
    }

    return 0;
}
