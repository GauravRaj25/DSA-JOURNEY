#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void summ(int arr[], int size, int index, vector<int>& ans, int sum , int k){
    // Base Case
    if(index == size){
        if(sum == k){
           for(auto it: ans){
            cout << it << " ";
           }
           cout << endl;
        }
        return;
    }

    // Pick Condition
    ans.push_back(arr[index]);
    summ(arr, size, index + 1, ans, sum + arr[index], k);

    ans.pop_back();

    // Not Pick Condition
    summ(arr, size, index + 1, ans, sum, k);
}

int main(){

    int arr[]= {1, 2, 1};
    int k = 2;

    vector<int>ans;

    summ(arr, 3, 0, ans, 0, k);
    return 0;
}