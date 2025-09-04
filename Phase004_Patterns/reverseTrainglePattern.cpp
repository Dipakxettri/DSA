#include <iostream>
using namespace std;

int main()
{
    // Reverse Traingle Pattern:
    // 1 
    // 21 
    // 321 
    // 4321

    //     int n = 8;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }


    // Char Version:
     int n = 8;
     char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch;
            ch -= 1;
        }
        cout << endl;
    }
    return 0;
}