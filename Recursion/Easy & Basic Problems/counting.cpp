#include<iostream>
using namespace std;

//  counting from n to 1

void printCounting(int n ){

    // base case 

    if (n == 0){
        return  ;
    }

    // processing
    cout << n << " ";

    // recursive call 
    printCounting(n-1);


}

int main(){

    int n ;
    cout << "Enter the value of n : ";
    cin >> n;

    printCounting(n); 
    
    return 0;
}