#include <iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=num; i>0; i--){
        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
 
    return fact_n / (fact_r * fact_nmr);
}
int main(){
    int n=8,r=2;
    int res = ncr(n,r);
    cout<<res;
    return 0;
}