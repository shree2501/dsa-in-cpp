#include <iostream>
using namespace std;
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main(){
    int a=28;
    int b=20;
    cout << "LCM : "<< lcm(a,b);
    return 0;
}