#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr1 = &a;
    int* ptr2;

    cout << ptr1 <<endl;
    cout << ptr2 <<endl;

    // Operations
    ptr1++;
    cout << ptr1 <<endl;

    ptr1 = ptr1-1;
    cout << ptr1 <<endl;

    cout << (ptr1 > ptr2) <<endl;
    cout << (ptr1 != ptr2);
    return 0;
}
