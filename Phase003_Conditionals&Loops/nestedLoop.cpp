#include <iostream>
using namespace std;

int main()
{

    // simple stars:
    // ****
    // ****
    // ****
    // ****
    
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}