#include<iostream>
using namespace std;

void printAllOdds(int arr[],int size , int index){
    // base case
    if(index == size){
        return;
    }

    // recursive realtion
    if(arr[index]&1){
        cout << arr[index]<< " ";
    }
    // baaaki recursion karega
    printAllOdds(arr,size,index+1);
}

int main(){
    int arr [] = {1,2,3,7,9,4,6};
    int size  = 7;
    int index = 0;

   printAllOdds(arr,size,index);
    return 0;
}