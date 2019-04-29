#include <iostream>
#include <array>
using namespace std;

int main()
{
    const size_t  grades=1;
    array<int,grades>n={4};
    cout << n[0] << endl;
    return 0;
}
