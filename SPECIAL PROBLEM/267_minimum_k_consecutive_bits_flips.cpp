/*
You are given a binary array arr[] (containing only 0's and 1's) and an integer k. In one operation, you can select a contiguous subarray of length k and flip all its bits (i.e., change every 0 to 1 and every 1 to 0).

Your task is to find the minimum number of such operations required to make the entire array consist of only 1's. If it is not possible, return -1.

Examples:

Input: arr = [1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1], k = 2
Output: 4 
Explanation: 4 operations are required to convert all 0's to 1's.
Select subarray [2, 3] and flip all bits resulting array will be [1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1]
Select subarray [4, 5] and flip all bits resulting array will be [1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1]
Select subarray [5, 6] and flip all bits resulting array will be [1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1]
Select subarray [6, 7] and flip all bits resulting array will be [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
Input: arr = [0, 0, 1, 1, 1, 0, 0], k = 3
Output: -1
Explanation: It is not possible to convert all elements to 1's by performing any number of operations.
*/
# include<iostream>
# include<vector>
using namespace std;
int consecutive(vector<int>&v,int k){
    int n = arr.size();
    vector<int> isFlipped(n, 0);
    int flip = 0;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(i >= k)
            flip ^= isFlipped[i-k];
            if((arr[i] ^ flip) == 0) {
            if(i + k > n)return -1;
            ans++;
            flip ^= 1;
            isFlipped[i] = 1;
        }
    }
    return ans;
}
int main(){
    vector<int>v={1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1};
    int k = 2;
    cout<<consecutive(v,k);
}