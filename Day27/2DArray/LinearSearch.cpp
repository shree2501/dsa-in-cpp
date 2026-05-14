#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(key == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[2][3] = {{1,2,3},{3,4,5}};
    cout << linearSearch(matrix,2,3,4);
    return 0;
}