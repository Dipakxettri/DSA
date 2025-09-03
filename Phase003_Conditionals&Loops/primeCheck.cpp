#include <iostream>
using namespace std;
int main()
{

    int n = 7;
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }



    if (isPrime)
        {
            cout << "The number is prime";
        }
        else{
            cout << "The number is not prime";
        }
    return 0;
}