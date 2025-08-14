#include<iostream>
using namespace std;


int getFactorial(int n){

    // Base Case 

    if(n == 0 || n == 1) return 1;

    // Recursive Call
    // fact(n) = n * fact(n-1)
    // recursive --> fact(n-1)

    int recursiveKaAns = getFactorial(n-1);
    int finalAns = n * recursiveKaAns;

    return finalAns;

}

int main(){

    int n ;

    cout << "Enter the value of n :";
    cin >> n;

    int ans = getFactorial(n);

    cout << "Factorial of " << n << " is : " << ans << endl;
    
    return 0;
}