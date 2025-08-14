#include<iostream>
#include <climits>
using namespace std;

void minInArray(int arr[],int size,int index,int &mini){
//    base case
     if(index == size){
        return ;
     }

    //  one case mai solve karunga baaki recursion 

     mini = min(mini , arr[index]);
     minInArray(arr,size,index+1,mini);
}

int main(){

    int arr[] = {10,50,70,58,30,45};
    int size = 6;
    int index = 0;
    int mini = INT_MAX;

    minInArray(arr,size,index,mini);
    cout<< "minimum number is :"<< mini<<endl;



    return 0;
}