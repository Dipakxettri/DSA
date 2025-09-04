#include <iostream>
using namespace std;

int main()
{
    int n = 80;
    int a = 8,sum = 0;

    for(int i = 1; i<=n; i++ ){
        if(i % a == 0){
            sum += i; 
        }
    }

    cout << "The sum is :" << sum;

    return 0;
}