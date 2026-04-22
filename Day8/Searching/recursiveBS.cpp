#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar,int st,int end){
    
    if(st <= end){
        int mid = st + (end-st)/2;
        if(tar < arr[mid]){
            return binarySearch(arr, tar, st, mid-1);
        }
        else if(tar > arr[mid]){
            return binarySearch(arr, tar, mid+1, end);
        }
        else
            return mid;
    }
    return -1;
}
int main(){
    vector<int> arr = {0,3,5,6,8,9,12};
    int tar = 12;
    int st = 0;
    int end  = arr.size()-1;

    cout << binarySearch(arr,tar,st,end) <<endl;
    return 0;
}