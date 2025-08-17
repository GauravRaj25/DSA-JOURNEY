#include<iostream>
using namespace std;
#include<vector>

void solve(vector<int> nums, vector<int>output, int index,vector<vector<int>> &ans){
    // base case 
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

int main(){
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> nums(n);
    int index = 0;

    cout << "Enter the elments in vector: ";
    for(int i =0; i<n; i++){
        cin >> nums[i];
    }
    
    vector<int>output;
    vector<vector<int>> ans;  // ans should be 2D vector
    solve(nums, output, index, ans);
   
    // Print subsets
    cout << "Subsets are: " << endl;
    for(auto subset : ans){
        cout << "{ ";
        for(auto val : subset){
            cout << val << " ";
        }
        cout << "}" << endl;
    }

}