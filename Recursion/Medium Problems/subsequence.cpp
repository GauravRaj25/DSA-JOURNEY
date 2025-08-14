#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(string str, int index, string output, vector<string> &ans){

    // base case 
    if (index == str.length()){
        // cout << output << endl;
        ans.push_back(output);
        return;
    }

    // 1 case khud solve krege
    char ch = str[index]; 
    // include ch
     printSubsequence(str, index + 1, output+ch, ans);
   
    // exclude ch 
     printSubsequence(str, index + 1, output, ans);

}

int main(){

    string str = "abc";
    string output = " ";
    int index = 0;
    vector<string> ans;

    printSubsequence(str, index, output, ans);
    cout << "Length of subsequence : " << ans.size() <<endl;

    for(auto i : ans){
        cout << "Subsequences are : " << i << endl;
    }

    return 0;
}