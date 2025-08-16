#include<iostream>
using namespace std;


int sumOfArray(int arr[], int size, int index){
    // base case 
    if(index == size){
        return 0;
    }

    // recursive case
    int remainingPart = sumOfArray(arr, size, index + 1);
    return arr[index] + remainingPart;
}

int main(){
    int size;
    cout << "Enter the size of an array: " ;
    cin >> size;
    int arr[size];

    int index = 0;
    cout << "Enter the elemnts in an array: ";

    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }

    int sum = sumOfArray(arr, size, index);
    cout << "Sum of an Array: " << sum;
    return 0;
}