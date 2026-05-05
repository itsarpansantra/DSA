/*
Given an integer array arr[] of size n, compute the sum of the bitwise XOR for all distinct pairs of elements. That is, consider every pair of indices (i, j) such that 0 ≤ i < j < n, and calculate the total sum of (arr[i] XOR arr[j]) over all such pairs.

Examples :

Input : arr[] = [7, 3, 5]
Output : 12
Explanation: 
All pairs (i, j) such that i < j and their XOR values are:
7 ^ 3 = 4
7 ^ 5 = 2
3 ^ 5 = 6
Sum of all XOR values = 4 + 2 + 6 = 12.
Input : arr[] = [5, 9, 7, 6] 
Output : 47
Explanation:
All pairs (i, j) such that i < j and their XOR values are:
5 ^ 9 = 12
5 ^ 7 = 2
5 ^ 6 = 3
9 ^ 7 = 14
9 ^ 6 = 15
7 ^ 6 = 1
Sum of all XOR values = 12 + 2 + 3 + 14 + 15 + 1 = 47.
Input : arr[] = [10] 
Output : 0
Explanation: Since there are no pairs, sum is 0.
*/
# include<bits/stdc++.h>
using namespace std;
it sum_all_pair(vector<int>&arr){
    int n = arr.size();
    long long total = 0;
    
    for (int i = 0; i < 32; i++) {
        long long count1 = 0;
    
        for (int num : arr) {
            if (num & (1 << i)) {
                count1++;
            }
        }
    
        long long count0 = n - count1;
        total += count1 * count0 * (1LL << i);
    }
    
    return total;
}
int main(){
    vector<int>arr = {5,9,7,6};
    cout<<sum_all_pair(arr);
}