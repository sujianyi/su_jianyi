#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int b=0;
   int c=0;
   int d=0;
   int i=1;

   cout<<"Enter a number";
   cin>>a;
   cout<<"Enter a number";
   while(i<=8)
   {
       cout<<"Enter the next number";
       cin>>c;
       i=i+1;
       if(a>b)
        {if(a>c,b>c){a=a,b=b;}
        else{b=a,a=c;}
        }
        else
        {if(b>c,a>c){d=a,a=b,b=d;}
        else{a=c,b=b;}}

   }
   cout<<"The Largest is "<<a;
   cout<<"The Second is "<<b;
}
