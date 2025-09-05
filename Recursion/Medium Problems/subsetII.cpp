#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
  
    void getAllSubset(vector<int>nums, vector<int>& ans, int i, vector<vector<int>>& allSubset){
        // Base Case
        if(i >= nums.size()){
            allSubset.push_back(ans);
            return;
        }
        
        // Pick Condition
        ans.push_back(nums[i]);
        getAllSubset(nums, ans, i + 1, allSubset);
        
        // Backtracking
        ans.pop_back();
        
        // Handling Duplicate
        int idx = i + 1;
        while(idx < nums.size() && nums[idx] == nums[idx - 1]){
            idx++;
        }
        
        // Not Pick Condition
        getAllSubset(nums, ans, idx, allSubset);
        
    }
   

    int main(){
        vector<int>nums{1,2,2};
        sort(nums.begin(), nums.end());

        vector<int>ans;
        vector<vector<int>> allSubset;

        getAllSubset(nums, ans, 0, allSubset);

        cout << "Unique subsets are:\n";
        for (auto subset : allSubset) {
        cout << "{ ";
        for (auto num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }
       
      return 0;
    }