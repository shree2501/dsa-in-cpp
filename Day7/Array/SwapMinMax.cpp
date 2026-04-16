#include <iostream>
using namespace std;

int main(){
    int nums[5] = {6,-2,8,4,1};
    int min = nums[0];
    for(int i=1; i<5; i++){
        if(min > nums[i]){
            min = nums[i];
        }
    }
    int max = nums[0];
    for(int i=1; i<5; i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }
    swap(min,max);
    cout<<"Minimum number: "<<min<<endl;
    cout<<"Maximum number: "<<max;
}