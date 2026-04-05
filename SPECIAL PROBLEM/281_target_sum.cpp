/*
Given an array of integers arr[] and an integer target. We need to build an expression out of arr[] by adding one of the symbols '+' or  '-' before each integer in arr[] and then concatenate all the integers. 
For example : if arr[] = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
Return the number of different expressions that can be built, which evaluates to target.

Note : An expression is considered different from another if the placement of '+' and '-' operators differs, even if the resulting value is the same. 

Examples :

Input: arr[] = [1, 1, 1, 1, 1], target = 3
Output: 5
Explanation: There are 5 ways to assign symbols to make the sum of nums be target 3.
-1 + 1 + 1 + 1 + 1 = 3
+1 - 1 + 1 + 1 + 1 = 3
+1 + 1 - 1 + 1 + 1 = 3
+1 + 1 + 1 - 1 + 1 = 3
+1 + 1 + 1 + 1 - 1 = 3
Input: arr[] = [1, 2, 3], target = 2
Output: 1
Explanation: There are 1 way to assign symbols to make the sum of nums be target 2(+1 -2 +3).
*/
# include<bits/stdc++.h>
using namespace std;
int target_sum(vector<int>&v,int target){
    int totalSum = 0;
    for(int x : arr) totalSum += x;
    
        // Edge cases
    if ((target + totalSum) % 2 != 0 || abs(target) > totalSum)
        return 0;
    
    int s1 = (target + totalSum) / 2;
    
    vector<int> dp(s1 + 1, 0);
    dp[0] = 1;
    
    for(int num : arr) {
        for(int j = s1; j >= num; j--) {
            dp[j] += dp[j - num];
        }
    }
    
    return dp[s1];
}
int main(){
    vector<int>v = {1,1,1,1,1};
    int target = 3;
    cout<<target_sum(v,target);
}