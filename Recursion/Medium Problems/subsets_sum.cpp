#include<iostream>
#include<vector>
#include<algorithm> // for sort
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans){
    // base case 
    if(index == nums.size()){
        ans.push_back(output);  // we store the answer here
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

    cout << "Enter the elements in vector: ";
    for(int i =0; i<n; i++){
        cin >> nums[i];
    }
    
    vector<int> output;
    vector<vector<int>> ans;  // ans should be 2D vector
    solve(nums, output, index, ans);
   
    // store sums of subsets
    vector<int> subsetSums;
    for(auto subset : ans){
        int sum = 0;
        for(auto val : subset){
            sum += val;
        }
        subsetSums.push_back(sum);
    }

    // sort sums
    sort(subsetSums.begin(), subsetSums.end());

    // print in increasing order
    cout << "Subsets Sum in increasing order: ";
    for(auto s : subsetSums){
        cout << s << " ";
    }

    return 0;
}
