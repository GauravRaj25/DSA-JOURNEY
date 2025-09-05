#include<iostream>
#include<vector>
using namespace std;

void printSubsets(int arr[], int size, int index, vector<int>& ans){
    // base case 
       if(index == size){
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl;
        return ;
    }

    // exclude case
    printSubsets(arr, size, index + 1, ans);

    // include case 
    ans.push_back(arr[index]);
    printSubsets(arr, size, index + 1, ans);
    ans.pop_back();
    
}

int main(){
    int size ;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements in an array: ";
    for(int i =0; i<size; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    printSubsets(arr,size,0,ans);
    return 0;
}