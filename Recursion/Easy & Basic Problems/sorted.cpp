#include<iostream>
using namespace std;

bool sorted(int arr[] , int size, int index ){
    // base case 
    if(index == size){
        return true ;
    }

    // one case ham solve krege 
    if (arr[index -1] > arr[index]){
        return false;
    }
   
    // baaki recursion karega
    return sorted(arr,size,index +1);
    
}



int main(){
    
    int arr [] = {10,20,30,40};
    int size = 4;
    int index = 1 ;
    
    cout << "Array is sorted or not : "<< sorted(arr,size,index);
 
    return 0;
}