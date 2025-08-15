#include<iostream>
using namespace std;

// input - 412 
// output - four one two

void sayDigits(int n, string arr[]){
    // base case 
    if(n == 0)
    return ;

    // processing 
    int digit = n % 10;
    n = n / 10;

    // recursive call 
    sayDigits(n, arr);
    cout << arr[digit] << " ";


}
int main(){


   int n ;
   cout << "Enter the number : ";
   cin >> n;
   string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

   sayDigits(n, arr);

    
    return 0;
}