#include <iostream>

using namespace std;

double a,b,c;

int main()
{
    cout<<"输入三角形三边";
    cin>>a>>b>>c;
    if(a+b>c)
    {
        cout<<"可以作为三角形三边";
    }
   else
   {cout << "不可以作为三角形三边" << endl;
   }
    return 0;
}
