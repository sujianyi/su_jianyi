#include <iostream>

using namespace std;

int a=0,b=0,c=0;
int main()
{
    cout<<"�����һ������.\n";
    cin>>a;
    cout<<"����ڶ�������.\n";
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

    cout << "��Сֵ��" << a<<endl;
    return 0;
}
