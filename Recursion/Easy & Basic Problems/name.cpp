#include<iostream>
using namespace std;

void printName(string str , int n){
    // base case 
    if(n == 0)
    return ;

    // processing
    cout << str<< endl;

    // recursive call
    printName(str,n - 1);

}

int main(){
    string str;
    cout << "Enter the name : " << endl;
   getline(cin, str);

    int n ;
    cout << "Enter the value of N : " ;
    cin >> n;

    printName(str,n);
    
    return 0;
}