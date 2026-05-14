#include <iostream>
#include <algorithm>
using namespace std;

int maxColSum(int arr[][3], int rows, int cols){
    int maxSum = INT_MIN;
    for(int i=0; i<rows; i++){
        int ColSum = 0;
        for(int j=0; j<cols; j++){
            ColSum += arr[j][i];
        }
        maxSum = max(maxSum,ColSum);
    }
    return maxSum;
}

int main(){
    int matrix[3][3] = {{1,2,3},{3,4,5},{6,7,8}};
    cout << maxColSum(matrix,3,3);
    return 0;
}