#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 3;

    // Arithmetic operators
    cout << (x + y) << "\n"; // 13
    cout << (x - y) << "\n"; // 7
    cout << (x * y) << "\n"; // 30
    cout << (x / y) << "\n"; // 3 
    cout << (x % y) << "\n"; // 1

    // Unary Operators
    int z = 5;
    ++z;
    cout << z << "\n"; // 6
    --z;
    cout << z << "\n"; // 5
    z++;
    cout << z << "\n"; // 6
    z--;
    cout << z << "\n"; // 5

    // Assignment Operators
    x += 5;  // same as x = x + 5
    cout << x << "\n";
    x *= 2;  // same as x = x * 2
    cout << x << "\n"; 
    x /= 5;  // same as x = x / 5
    cout << x << "\n";
    x %= 2;  // same as x = x % 2
    cout << x << "\n"; 

    // Comparison Operators
    int age = 18;
    cout << (age >= 18) << "\n"; // 1 (true)
    cout << (age < 18) << "\n";  // 0 (false)

    // Logical Operators
    cout << (x < 3 && x > 2) << "\n";  // 0 (false)
    cout << (x < 5 || x > 2) << "\n";  // 1 (true)
}