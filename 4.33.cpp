#include <iostream>

using namespace std;

int main()
{
    int a,b,c;


    cout<<"请依次输入直角三角形的两直角边和斜边";
    cin>>a>>b>>c;
    if((a*a)+(b*b)==(c*c))
    {
        cout<<"可以作为三角形三边";
    }
   else
   {cout << "不可以作为三角形三边" << endl;
   }
    return 0;
}
