#include <iostream>
using namespace std;

// Optimization : i * i <= n
// the factor of any numbers gets repet after square root so we don't need to check from 2 to n-1 insted we check from 2 to square root
int main()
{

    int n = 8;
    bool isPrime = true;
    for (int i = 0; i * i <= n; i++) // we apply i * i <= n insted of i < n
    {
        if (i % n != 0)
        {
            isPrime = false;
        }
    }

    if (isPrime)
    {
        cout << "Yes the number is prime";
    }
    else
    {
        cout << "NO the number is not prime";
    }
    return 0;
}