#include<iostream>
using namespace std;

int countStairs(int nStairs){

    // base case
    // if (nStairs < 0) return 0;
    // if (nStairs == 0) return 1;

    // both cases are true 
    if(nStairs==0 || nStairs==1) return 1;

    // recursive relation
    // in this question we climb one step or 2 step at each time to reach nth stairs
    int ans = countStairs(nStairs - 1) + countStairs(nStairs -2);
    return ans;
    

}

int main(){
    int nStairs;
    cout << " Enter the no of Stairs: " ;
    cin >> nStairs;

    int finalAns = countStairs(nStairs);
    cout << "Total ways to Reach nth stairs : " << finalAns;
    return 0;
}