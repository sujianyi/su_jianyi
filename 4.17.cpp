#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,counter=1;

    cout << "Enter a number";
    cin>>a;
    while(counter<=9)
    {
        cout<<"Enter the next number";
        cin>>b;
        counter=counter+1;
        if(a>b)
        {a=a;}
        else
        {a=b;}
        }
        cout<<"The Largest is "<<a<< endl;
    return 0;
}
