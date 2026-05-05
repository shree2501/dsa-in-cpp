#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec = {5,3,1,2,3};
    sort(vec.begin(), vec.end());
    for(int v: vec){
        cout << v <<" ";
    }
    cout << endl;
    return 0;
}