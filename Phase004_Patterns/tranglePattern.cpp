#include <iostream>
using namespace std;

int main()
{

    // Traingle Pattern:
    // *
    // **
    // ***
    // ****

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)// formula : j<=i or j<i+1
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // for numbers:
    // 1 
    // 12 
    // 123 
    // 1234 
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;// or (i+1)
        }

        cout << endl;
    }

    return 0;
    
}