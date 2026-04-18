#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int MajElem(vector<int> nums){
//     int n = nums.size();
//     for(int val : nums){
//       int freq = 0;
//       for(int elem : nums){
//         if(val == elem)
//             freq++;
//       }
//       if(freq > n/2)
//         return val;
//    }
//    return -1;
// }

// int main(){
//     vector <int> nums = {1,2,1,1,2,2,2};
//     cout << MajElem(nums) << endl;
//     return 0;
// }

int MajElem(vector<int> nums){
    int ans = nums[0];
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int freq = 1;
    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
    }
    if(freq > n/2)
        return ans;
    return ans;
}

int main(){
    vector <int> nums = {1,2,1,1,2,2,2};
    cout << MajElem(nums) << endl;
    return 0;
}

