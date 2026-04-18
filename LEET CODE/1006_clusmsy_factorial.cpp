/*
The factorial of a positive integer n is the product of all positive integers less than or equal to n.

For example, factorial(10) = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1.
We make a clumsy factorial using the integers in decreasing order by swapping out the multiply operations for a fixed rotation of operations with multiply '*', divide '/', add '+', and subtract '-' in this order.

For example, clumsy(10) = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1.
However, these operations are still applied using the usual order of operations of arithmetic. We do all multiplication and division steps before any addition or subtraction steps, and multiplication and division steps are processed left to right.

Additionally, the division that we use is floor division such that 10 * 9 / 8 = 90 / 8 = 11.

Given an integer n, return the clumsy factorial of n.

 

Example 1:

Input: n = 4
Output: 7
Explanation: 7 = 4 * 3 / 2 + 1
Example 2:

Input: n = 10
Output: 12
Explanation: 12 = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1
*/
# include<bits/stdc++.h>
using namespace std;
int clumsy_factorial(int n){
    stack<int>st;
    if(n<=0) return 0;
    st.push(n);
    int op=0;

    for(int i=n-1;i>0;i--){
        if(op==0){
            int val = st.top();
            st.pop();
            st.push(val*i);
        }
        else if(op==1){
            int val = st.top();
            st.pop();
            st.push(val/i);
        }
        else if(op==2){
            st.push(i);
        }
        else{
            st.push(-i);
        }
        op = (op+1)%4;
    }
    int result = 0;
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    return result;
}
int main(){
    int n = 10;
    cout<<clumsy_factorial(int n);
}