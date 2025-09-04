#include <iostream>
using namespace std;

int main()
{
    // Square Pattern:
    // 1234
    // 1234
    // 1234
    // 1234

    // int n = 4;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout << j;
    //     }

    //     cout << endl;
    // }


    // with characters:
    int n = 4;
    for(int i = 0; i<n; i++){
        char ch = 'A';
        for(int j = 0; j<n; j++){
            cout << ch;
            ch += 1; // A = 65  + 1 = 66 -> B
        }

        cout << endl;
    }
    return 0;
}