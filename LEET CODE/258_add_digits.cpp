/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
*/
# include<iostream>
using namespace std;
int addDigits(int num) {
    while (num >= 10) {   // While num has more than one digit
        int sum = 0;
        while (num > 0) {
            sum += num % 10;  // Add last digit
            num /= 10;        // Remove last digit
        }
        num = sum;  // Replace num with the sum
    }
    return num;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<addDigits(n);
}