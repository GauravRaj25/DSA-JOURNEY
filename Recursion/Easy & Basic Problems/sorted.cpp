#include<iostream>
using namespace std;

bool isSorted(int arr[], int size, int index){
    // base case
    if(index == size -1)
    return true;

    // processing part
    if(arr[index] > arr[index+1])
    return false;
    
    bool remianingPart = isSorted(arr, size, index + 1);
    return remianingPart;

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

    bool ans = isSorted(arr, size, index);
    if(ans){
        cout << "Array is sorted" << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }

    return 0;

    
 
}