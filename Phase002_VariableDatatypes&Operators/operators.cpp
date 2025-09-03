#include <iostream>
using namespace std;

int main()
{
    // Arithmetic Operators
    int a = 10, b = 3;
    cout << "a + b = " << a + b << endl; // addition
    cout << "a - b = " << a - b << endl; // subtraction
    cout << "a * b = " << a * b << endl; // multiplication
    cout << "a / b = " << a / b << endl; // division
    cout << "a % b = " << a % b << endl; // modulus
    cout << "++a = " << ++a << endl;     // pre-increment
    cout << "b-- = " << b-- << endl;     // post-decrement

    // Relational Operators
    cout << (a == b) << endl; // equal to
    cout << (a != b) << endl; // not equal to
    cout << (a > b) << endl;  // greater than
    cout << (a < b) << endl;  // less than
    cout << (a >= b) << endl; // greater than or equal
    cout << (a <= b) << endl; // less than or equal

    // Logical Operators
    cout << (a > 5 && b > 0) << endl; // logical AND
    cout << (a > 5 || b > 5) << endl; // logical OR
    cout << !(a > 5) << endl;         // logical NOT

    // Assignment Operators
    int c = 5;
    c += 3; // c = c + 3
    c -= 2; // c = c - 2
    c *= 2; // c = c * 2
    c /= 2; // c = c / 2
    c %= 2; // c = c % 2

    // Bitwise Operators
    int x = 5, y = 3;
    cout << (x & y) << endl;  // AND
    cout << (x | y) << endl;  // OR
    cout << (x ^ y) << endl;  // XOR
    cout << (~x) << endl;     // NOT
    cout << (x << 1) << endl; // left shift
    cout << (x >> 1) << endl; // right shift

    // Miscellaneous
    int *ptr = &a;
    cout << *ptr << endl; // dereference
    cout << &a << endl;   // address-of

    // Unary Operators in C++ (operate on a single operand)

    // Arithmetic Unary
    // + unary plus (rarely used)
    // - unary minus

    // Increment / Decrement
    // ++ pre/post increment
    // -- pre/post decrement

    // Logical
    // ! logical NOT

    // Bitwise
    // ~ bitwise NOT

    // Other
    // & address-of
    // * pointer dereference
    // sizeof() size of variable/type

    return 0;
}
