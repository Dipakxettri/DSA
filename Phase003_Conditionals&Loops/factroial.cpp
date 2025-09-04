#include <iostream>
using namespace std;

int main()
{
    int n = 12;
    int f = n;
    for(int i = n-1; i>0; i--){
        f *= i;
    }

    cout << "The factroial of " << n  << " is " << f;

    return 0;
}