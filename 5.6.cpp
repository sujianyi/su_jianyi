#include <iostream>

using namespace std;

int main()
{
    int i=0,x=0,n=0,total=0;
    cout<<"输入第一个数，当你输入完成后，输入0结束";
    cin>>x;
    for(i=x;i!=0;cin>>i)
    {
        total+=i;

    }
    cout<<"你一共输入了几个数";
    cin>>n;
    cout << "平均值是" << total/n<<endl;
    return 0;
}
