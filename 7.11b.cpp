#include <iostream>
#include <array>
using namespace std;
int main()
{
    const size_t bonus=15;
    array<int,bonus>n={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    for(int i=0;i<n.size();++i)
    {
        cout<<n[i]+1<<endl;
    }
    return 0;
}
