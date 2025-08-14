#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index){
    // Base Case 
    if(index == size)
    return;

    // printing first element present 
    cout << arr[index] << " ";

    // recursive call
    printArray(arr, size, index + 1 );
 
}

int main(){

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of an array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    // int index = 0;
    printArray(arr, size, 0);


    
    return 0;
}