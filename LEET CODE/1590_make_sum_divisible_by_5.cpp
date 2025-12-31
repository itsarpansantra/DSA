/*
Given an array of positive integers nums, remove the smallest subarray (possibly empty) such that the sum of the remaining elements is divisible by p. It is not allowed to remove the whole array.

Return the length of the smallest subarray that you need to remove, or -1 if it's impossible.

A subarray is defined as a contiguous block of elements in the array.

 

Example 1:

Input: nums = [3,1,4,2], p = 6
Output: 1
Explanation: The sum of the elements in nums is 10, which is not divisible by 6. We can remove the subarray [4], and the sum of the remaining elements is 6, which is divisible by 6.
Example 2:

Input: nums = [6,3,5,2], p = 9
Output: 2
Explanation: We cannot remove a single element to get a sum divisible by 9. The best way is to remove the subarray [5,2], leaving us with [6,3] with sum 9.
Example 3:

Input: nums = [1,2,3], p = 3
Output: 0
Explanation: Here the sum is 6. which is already divisible by 3. Thus we do not need to remove anything.
*/
# include<iostream>
# include<algorithm>
# include<vector>
# include<unordered_map>
using namespace std;
int minsubarray(vector<int>&v,int p){
    int n = v.size();
    long long total = 0;
        for(int x : v) total += x;
        
        int rem = total % p;
        if(rem == 0) return 0;  // Already divisible
        
        unordered_map<int, int> mp;
        mp[0] = -1;  // Prefix before the array starts
        
        long long prefix = 0;
        int ans = v.size();
        
        for(int i = 0; i < v.size(); i++) {
            prefix = (prefix + v[i]) % p;
            
            int need = (prefix - rem + p) % p;
            
            if(mp.count(need))
                ans = min(ans, i - mp[need]);
            
            mp[prefix] = i;
        }
        
        return ans == v.size() ? -1 : ans;
}
int main(){
    vector<int>v= {3,1,4,2};
    int p=6;
    cout<<minsubarray(v,p);
   
}