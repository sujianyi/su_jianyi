#include <iostream>

using namespace std;

int main()
{
    int i=0,x=0,n=0,total=0;
    cout<<"�����һ����������������ɺ�����0����";
    cin>>x;
    for(i=x;i!=0;cin>>i)
    {
        total+=i;

    }
    cout<<"��һ�������˼�����";
    cin>>n;
    cout << "ƽ��ֵ��" << total/n<<endl;
    return 0;
}
