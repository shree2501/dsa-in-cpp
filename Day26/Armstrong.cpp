#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int sum = 0;
    int org = n;
    while(n!=0){
        int dig = n%10;
        sum = sum + (dig*dig*dig);
        n=n/10;
    }
    if(sum == org){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n = 153;
    if(isArmstrong(n)){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;
}

