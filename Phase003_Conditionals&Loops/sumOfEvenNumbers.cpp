#include <iostream>
using namespace std;

int main (){

    int n = 12;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            sum += i;
        }
    }
     cout << "The sum of all even numbers are :" << sum;
        
    return 0;
}