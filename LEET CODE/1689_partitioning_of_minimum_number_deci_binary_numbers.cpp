/*
A decimal number is called deci-binary if each of its digits is either 0 or 1 without any leading zeros. For example, 101 and 1100 are deci-binary, while 112 and 3001 are not.

Given a string n that represents a positive decimal integer, return the minimum number of positive deci-binary numbers needed so that they sum up to n.

 

Example 1:

Input: n = "32"
Output: 3
Explanation: 10 + 11 + 11 = 32
Example 2:

Input: n = "82734"
Output: 8
Example 3:

Input: n = "27346209830709182346"
Output: 9
 
*/
// find max element thats many steps are possible to number
# include<iostream>
using namespace std;
int deci_binary(string n){
    int num = 0;
    for(int i=0;i<n.size();i++){
        num = max(num,n[i]-'0');
    }
    return num;
}
int main(){
    string n = "8274";
    cout<<deci_binary(n);
}