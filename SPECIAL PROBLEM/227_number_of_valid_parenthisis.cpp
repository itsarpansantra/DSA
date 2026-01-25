/*
You are given a number n, your task is to find the number of all the valid parentheses expressions of that length using only "(" and ")" brackets.

An input string of parentheses is valid if :

Open brackets must be closed in correct order.
Every close bracket has a corresponding open bracket.
For example - "()()" or "(())" are valid while ")()(" or "))((" are invalid parentheses expressions.

Examples:

Input: n = 2
Output: 1
Explanation: There is only one possibe valid expressions of length 2 i.e., "()".
Input: n = 4
Output: 2
Explanation: Possibe valid expressions of length 4 are "(())" and "()()".
Input: n = 6
Output: 5
Explanation: Possibe valid expressions of length 6 are "((()))", "(())()", "()(())", "()()()" and "(()())".
*/
# include<iostream>
using namespace std;
int catalan(int k) {
    int res = 1;
    for (int i = 0; i < k; i++) {
        res = res * 2 * (2*i + 1) / (i + 2);
    }
    return res;
}
int findWays(int n) {
    if (n % 2 != 0) return 0;
    return catalan(n / 2);
}
int main(){
    int n = 6;
    cout<<findWays(n);
}