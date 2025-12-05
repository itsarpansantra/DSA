/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
*/
#include <bits/stdc++.h>
using namespace std;

int findFirst(vector<int>& v, int target) {
    int low = 0, high = v.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == target) {
            ans = mid;
            high = mid - 1; // keep searching left
        } else if (v[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int findLast(vector<int>& v, int target) {
    int low = 0, high = v.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == target) {
            ans = mid;
            low = mid + 1; // keep searching right
        } else if (v[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& v, int target) {
    vector<int> ans(2, -1);
    if (v.empty()) return ans;
    ans[0] = findFirst(v, target);
    ans[1] = findLast(v, target);
    return ans;
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> res = searchRange(nums, target);
    cout << "[" << res[0] << "," << res[1] << "]" << endl; 
    return 0;
}
