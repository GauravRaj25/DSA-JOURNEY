#include<iostream>
using namespace std;

int sum(int n){

    // base case
    if(n == 1){
        return 1;
    }

    // recursive relation
    int ans = sum(n-1) + n;
    return ans;
}

int main(){
    cout << sum(3);
    return 0;
}