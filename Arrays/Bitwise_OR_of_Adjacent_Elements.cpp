//Given an array nums of length n, return an array answer of length n - 1 such that answer[i] = nums[i] | nums[i + 1] where | is the bitwise OR operation
// Example 1
// Input: nums = [1,3,7,15]
// Output: [3,7,15]


// Constraints
// 2 <= nums.length <= 100 
// 0 <= nums[i] <= 100

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> inputs(n);
    for(int i = 0; i<n;i++){
        cin>>inputs[i]; //Inputs of the Input vector
    }
    vector<int> output(n-1);
    for(int i = 0; i<6-1;i++){
        output[i] = (inputs[i] | inputs[i+1]);
    }
    for(auto it: output){
        cout<<it<<" "; //Solutions
    }
}