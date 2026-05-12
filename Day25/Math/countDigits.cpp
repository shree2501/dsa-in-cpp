#include <iostream>
using namespace std;

int main(){
    int n = 2345;
    int count = 0;
    while(n!=0){
        n%10;
        count++;
        n=n/10;
    }
    cout << "Count : " << count;
}