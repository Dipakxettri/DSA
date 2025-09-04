#include <iostream>
using namespace std;

int main()
{

    // floyds Trangle:
    // 1
    // 23
    // 456
    // 78910

    // int n = 4;
    // int num = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    
    // Char Version:
    // A
    // BC
    // DEF
    // GHIJ
    int n = 4;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }

    return 0;
}