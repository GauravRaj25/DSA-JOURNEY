#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size ,int s,int e,  int target){
// base case
if(s > e){
    return -1;
}

// calculate mid 
 int mid  = s+(e-s)/2;
//  ek case ham solve krege baaki recursion
if(arr[mid] == target){
    return mid ;
}

// by recursion

if(target > arr[mid]){
    // right
     s = mid + 1;
     return BinarySearch(arr,size,s,e,target);
}
else{
    // left
    e = mid - 1;
    return BinarySearch(arr,size,s,e,target);
}


}

int main(){
    int arr[] = {10, 20, 30 ,40 ,50, 60};
    int size = 6;
    int target = 400;
    int s = 0;
    int e = size -1;

    int ans = BinarySearch(arr,size,s,e,target);
    cout << "answer index: " << ans << endl;
    
}