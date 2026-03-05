/*
Given a string s representing a valid expression, implement a basic calculator to evaluate it, and return the result of the evaluation.

Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().

 

Example 1:

Input: s = "1 + 1"
Output: 2
Example 2:

Input: s = " 2-1 + 2 "
Output: 3
Example 3:

Input: s = "(1+(4+5+2)-3)+(6+8)"
Output: 23
 

Constraints:

1 <= s.length <= 3 * 105
s consists of digits, '+', '-', '(', ')', and ' '.
s represents a valid expression.
'+' is not used as a unary operation (i.e., "+1" and "+(2 + 3)" is invalid).
'-' could be used as a unary operation (i.e., "-1" and "-(2 + 3)" is valid).
There will be no two consecutive operators in the input.
Every number and running calculation will fit in a signed 32-bit integer.
*/
# include<iostream>
# include<stack>
using namespace std;
int calculator(string s){
    stack<int> st;
        long result = 0;      // Stores the running total
        long current_num = 0; // To build multi-digit numbers
        int sign = 1;         // 1 for '+', -1 for '-'

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            if (isdigit(c)) {
                // Handle multi-digit numbers and prevent overflow
                current_num = 0;
                while (i < s.length() && isdigit(s[i])) {
                    current_num = current_num * 10 + (s[i] - '0');
                    i++;
                }
                // Add the full number to our result using the current sign
                result += sign * current_num;
                // Move index back because the outer loop will increment it
                i--; 

            } else if (c == '+') {
                sign = 1;

            } else if (c == '-') {
                sign = -1;

            } else if (c == '(') {
                // We've encountered a sub-expression. 
                // Save the current result and sign to the stack.
                st.push((int)result);
                st.push(sign);
                
                // Reset result and sign for the expression inside the parentheses
                result = 0;
                sign = 1;

            } else if (c == ')') {
                // Sub-expression ends. 
                // 1. Pop the sign that was applied to this parenthesis
                int prev_sign = st.top(); 
                st.pop();
                
                // 2. Pop the result calculated before this parenthesis started
                int prev_result = st.top(); 
                st.pop();

                // Finalize the value inside the parens and add it to the previous total
                result = prev_result + (prev_sign * result);
            }
            // Spaces ' ' are naturally ignored as they don't match any condition
        }

        return (int)result;
}
int main(){
    string str = " 2-1 + 2 ";
    cout<<calculator(str);
}