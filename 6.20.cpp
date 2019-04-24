#include <iostream>

using namespace std;
int multiple(int a,int b);
int main()
{

    int a,b;

    cout<<"please enter a number.\n";
    cin>>a;
    cout<<"please enter a number.\n";
    cin>>b;

        if(b%a==0)
        {
            cout<<"true.\n";
        }
        else
        {
            cout<<"false.\n";
        }


    return 0;
}
