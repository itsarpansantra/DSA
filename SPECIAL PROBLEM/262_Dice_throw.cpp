/*
Given n dice each with m faces. Find the number of ways to get sum x which is the summation of values on each face when all the dice are thrown.

Example:

Input: m = 6, n = 3, x = 12
Output: 25
Explanation: There are 25 total ways to get the Sum 12 using 3 dices with faces from 1 to 6.
Input: m = 2, n = 3, x = 6
Output: 1
Explanation: There is only 1 way to get the Sum 6 using 3 dices with faces from 1 to 2. All the dices will have to land on 2.
*/
# include<iostream>
# include<vector>
using namespace std;
int ways(int m, int n, int x) {

    vector<vector<int>> dp(n+1, vector<int>(x+1,0));

    dp[0][0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= x; j++){

            for(int k = 1; k <= m; k++){
                if(j - k >= 0){
                    dp[i][j] += dp[i-1][j-k];
                }
            }

        }
    }

    return dp[n][x];
}
int main(){
    int m=6;
    int n=3;
    int x = 12;
    cout<<ways(m,n,x);
}