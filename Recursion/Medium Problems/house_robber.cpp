#include<iostream>
using namespace std;

int solve(int arr[], int size, int index){
    // base case
    if(index >= size){
        return 0;
    }

    // include 
    int includeAns = arr[index] + solve(arr, size, index + 2);

    // exclude 
    int excludeAns = solve(arr, size, index + 1);

    return max(includeAns, excludeAns);
}

int main(){
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];
    int index;
    cout << "Enter the elements in an array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int finalAns = solve(arr, size, 0);
    cout << "Maximum Amount of Robbery : " << finalAns;


    return 0;
}