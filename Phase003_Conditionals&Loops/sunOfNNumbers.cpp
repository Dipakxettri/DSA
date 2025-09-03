#include <iostream>
using namespace std;
int main()
{

    int n = 12;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "The sum of n numbers is :" << sum;
    return 0;
}
