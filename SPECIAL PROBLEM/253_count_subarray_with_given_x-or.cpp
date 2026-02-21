/*
Given an array of integers arr[] and a number k, count the number of subarrays having XOR of their elements as k.

Note: It is guranteed that the total count will fit within a 32-bit integer.

Examples: 

Input: arr[] = [4, 2, 2, 6, 4], k = 6
Output: 4
Explanation: The subarrays having XOR of their elements as 6 are [4, 2], [4, 2, 2, 6, 4], [2, 2, 6], and [6]. Hence, the answer is 4.
Input: arr[] = [5, 6, 7, 8, 9], k = 5
Output: 2
Explanation: The subarrays having XOR of their elements as 5 are [5] and [5, 6, 7, 8, 9]. Hence, the answer is 2.
Input: arr[] = [1, 1, 1, 1], k = 0
Output: 4
Explanation: The subarrays are [1, 1], [1, 1], [1, 1] and [1, 1, 1, 1].
*/
# include<iostream>
# include<unordered_map>
# include<vector>
using namespace std;
int subarray(vector<int>&v,int k){
unordered_map<int,int> mp;
    int xr = 0;
    int count = 0;
    mp[0] = 1;
    for(int x : arr) {
        xr ^= x;
        int need = xr ^ k;
        if(mp.find(need) != mp.end()) count += mp[need];
        mp[xr]++;
    }
    return count;
}
int main(){
    vector<int>v = {5, 6, 7, 8, 9};
    int k = 5;
    cout<<subarry(v,k);
}