#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void solve(vector<int>& nums, vector<int>output, int index, int target, vector<vector<int>>& ans){
        // Base Case
        if(index == nums.size()){
            if(target == 0){
                ans.push_back(output);
            }
            return;
        }

        // Pick Condition
        if(nums[index] <= target){
            output.push_back(nums[index]);
            solve(nums, output, index, target - nums[index], ans);

            output.pop_back();
        }

        // Not Pick Condition
        solve(nums, output, index + 1, target, ans);
    }
   

    int main(){
    vector<int>nums = {2,3 ,6 ,7};
    vector<vector<int>>ans;
    vector<int>output;

    int target = 7;
    solve(nums, output, 0, target, ans);
    cout << "Combinations: \n";
    for (auto vec : ans) {
        cout << "[ ";
        for (int num : vec) cout << num << " ";
        cout << "]\n";
    }
    return 0;
}