#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int summ(int arr[], int size, int index, int sum , int k){
    // Base Case
    if(index == size){
        if(sum == k){
           return 1;
        }
        return 0;
    }

    // Pick Condition
    
    int left = summ(arr, size, index + 1, sum + arr[index], k);

    // Not Pick Condition
    int right = summ(arr, size, index + 1, sum, k);
    return left + right;
}

int main(){

    int arr[]= {1, 2, 1};
    int k = 2;

    cout << summ(arr, 3, 0, 0, k);
    return 0;
}