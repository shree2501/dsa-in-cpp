#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<pair<int, int>> vec = {{3,1},{2,1},{4,2},{5,3}};
    sort(vec.begin(), vec.end());
    for(auto v: vec){
        cout << v.first <<" " << v.second << endl;
    }
    cout << endl;
    return 0;
}