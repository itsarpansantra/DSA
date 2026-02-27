/*
Given a matrix mat[][] of size n × m and an integer x, find the number of square submatrices whose sum of elements is equal to x.

Examples:

Input: mat[][] = [[2, 4, 7, 8, 10], 
               [3, 1, 1, 1, 1], 
               [9, 11, 1, 2, 1], 
               [12, -17, 1, 1, 1]] , 
x = 10
Output: 3
Explanation: The sub-squares whose sum of elements = 10, are colored in the matrix.

Input: mat[][] = [[3, 3, 5, 3], 
               [2, 2, 2, 6], 
               [11, 2, 2, 4]] ,
x = 1
Output: 0
Explanation: There is no sub-squares whose sum of elements is 1
*/
#include <bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int>>& mat, int x) {
    int n = mat.size();
    int m = mat[0].size();

    // prefix sum matrix
    vector<vector<int>> pref(n + 1, vector<int>(m + 1, 0));

    // build prefix sum
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            pref[i][j] = mat[i-1][j-1]
                        + pref[i-1][j]
                        + pref[i][j-1]
                        - pref[i-1][j-1];
        }
    }

    int count = 0;

    // try every top-left corner
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {

            // square sizes
            for (int k = 1; r + k <= n && c + k <= m; k++) {

                int sum = pref[r+k][c+k]
                        - pref[r][c+k]
                        - pref[r+k][c]
                        + pref[r][c];

                if (sum == x)
                    count++;
            }
        }
    }

    return count;
}