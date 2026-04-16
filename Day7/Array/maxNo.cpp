#include <iostream>
using namespace std;

int main(){
    int nums[5] = {6,-2,8,4,1};
    int max = nums[0];
    for(int i=1; i<5; i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }
    cout<<max;
}