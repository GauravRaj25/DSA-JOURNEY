#include<iostream>
#include <climits>
using namespace std;

void maxInArray(int arr[],int size,int index,int &maxi){
//    base case
     if(index == size){
        return ;
     }

    //  one case mai solve karunga baaki recursion 

     maxi = max(maxi , arr[index]);
     maxInArray(arr,size,index+1,maxi);
}

int main(){

    int arr[] = {10,50,70,58,30,45};
    int size = 6;
    int index = 0;
    int maxi = INT_MIN;

    maxInArray(arr,size,index,maxi);
    cout<< " maximum number is : "<< maxi <<endl;



    return 0;
}