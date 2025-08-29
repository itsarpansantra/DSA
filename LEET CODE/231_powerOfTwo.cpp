/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
*/
#include <iostream>
using namespace std;
bool isPowerOfTwo(int n) {
    bool flag = false;
    if(n==1) return true;
    while(n>1){
        if(n%2==0) flag=true;
            else{
                flag = false;
                break;
            }
            n/=2;
    }
    return flag;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<isPowerOfTwo(n);   
}