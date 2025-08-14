#include<iostream>
using namespace std;

int power(int n){
    //  Base Case 
    if(n == 0){
        return 1;
    }

    //  recursive call
    int recursionKaAnswer  = power(n-1);
    int Finalans  =  2 * recursionKaAnswer;
    return Finalans;
}

int main(){
    int n ;
    cout << " enter the value of N :"<< endl;

    cin >> n;
    int ans = power(n);

    cout << "Power of " << n << " is : " << ans << endl;
    
    
    return 0;
}