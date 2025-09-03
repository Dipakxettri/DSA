
#include <iostream>
using namespace std;

int main (){

    //for loop:
    for(int i = 1; i<=10; i++){
        cout << i << endl;
    }

    //while loop:
    int j = 1;
    while(j <= 10){
        cout << j << endl;
        j++;
    }

    // do while loop: runs once even if condition is false
    int k = 10;
    do{
        cout << k;
        k++;
    }while(k == 2);

    return 0;
}