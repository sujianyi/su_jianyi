#include <iostream>

using namespace std;

int a=0,b=0,c=0;
int main()
{
    cout<<"输入第一个数字.\n";
    cin>>a;
    cout<<"输入第二个数字.\n";
    cin>>b;
    for(int i=a;i<=a;++i)
    {
        cin>>c;
        if(b>c)
        {
            b=c;
        }
        else{b=b;}


    }
    if(a>b)
    {
        a=b;
    }
    else
    {
        a=a;
    }

    cout << "最小值是" << a<<endl;
    return 0;
}
