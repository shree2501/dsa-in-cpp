#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    bool sorted = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                sorted = true;
            }
        }
        if(!sorted){
            return;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[5] = {8,5,3,7,9};
    int n = 5;
    BubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}