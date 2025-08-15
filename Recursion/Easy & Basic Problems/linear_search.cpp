#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int index , int target){
    // base case
     if(index >= size){
        return -1; // Element not found

     }
    // check if the current element matches the target
    if(arr[index] == target){
        return index; // Element found at index
    }
    // recursive call to search in the next index
     // pass the array, size, and incremented index
     // store the result of the recursive call

    int ans = LinearSearch(arr,size, index + 1, target);
    // return the result of the search
    return ans;

}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    int index = 0;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int result = LinearSearch(arr, size, index, target);
    if(result != 0){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;

    }



   
    
    return 0;
}