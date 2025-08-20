#include<iostream>
#include<vector>
using namespace std;

void solve(int nums[], int size, vector<int>& output, int index, vector<vector<int>>& ans) {
    // base case
    if(index >= size){
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, size, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, size, output, index + 1, ans);

    // backtrack (important to remove last pushed element)
    output.pop_back();
}

int main(){
    vector<int> output; 
    vector<vector<int>> ans;

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int nums[size];

    cout << "Enter the elements in an array: ";
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }

    int index = 0; // initialize properly
    solve(nums, size, output, index, ans);

    // Print subsets
    cout << "All subsets are:\n";
    for(auto subset : ans){
        cout << "[";
        for(int i = 0; i < subset.size(); i++){
            cout << subset[i];
            if(i < subset.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}
