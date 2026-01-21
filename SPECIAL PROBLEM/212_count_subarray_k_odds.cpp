/*
You are given an array arr[] of positive integers and an integer k. You have to count the number of subarrays that contain exactly k odd numbers.

Examples:

Input: arr[] = [2, 5, 6, 9], k = 2
Output: 2
Explanation: There are 2 subarrays with 2 odds: [2, 5, 6, 9] and [5, 6, 9].
Input: arr[] = [2, 2, 5, 6, 9, 2, 11], k = 2
Output: 8
Explanation: There are 8 subarrays with 2 odds: [2, 2, 5, 6, 9], [2, 5, 6, 9], [5, 6, 9], [2, 2, 5, 6, 9, 2], [2, 5, 6, 9, 2], [5, 6, 9, 2], [6, 9, 2, 11] and [9, 2, 11].
*/
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
int atMostK(vector<int>& arr, int k) {
    int left = 0, odd = 0, count = 0;
    for (int right = 0; right < arr.size(); right++) {
        if (arr[right] % 2 == 1) odd++;
    
        while (odd > k) {
            if (arr[left] % 2 == 1) odd--;
            left++;
        }
        count += (right - left + 1);
        }
    return count;
}
int count_subarray(vector<int>& arr, int k) {
return atMostK(arr, k) - atMostK(arr, k - 1);
}
int main(){
    vector<int>v = {2, 2, 5, 6, 9, 2, 11};
    int k=2;
    cout<<count_subarray(v,k);
}