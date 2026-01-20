/*
Given an integer array arr[] and a number k. Find the count of distinct elements in every window of size k in the array.

Examples:

Input: arr[] = [1, 2, 1, 3, 4, 2, 3], k = 4
Output: [3, 4, 4, 3]
Explanation:
First window is [1, 2, 1, 3], count of distinct numbers is 3.
Second window is [2, 1, 3, 4] count of distinct numbers is 4.
Third window is [1, 3, 4, 2] count of distinct numbers is 4.
Fourth window is [3, 4, 2, 3] count of distinct numbers is 3.
Input: arr[] = [4, 1, 1], k = 2
Output: [2, 1]
Explanation:
First window is [4, 1], count of distinct numbers is 2.
Second window is [1, 1], count of distinct numbers is 1.
Input: arr[] = [1, 1, 1, 1, 1], k = 3
Output: [1, 1, 1]
Explanation: Every window of size 3 in the array [1, 1, 1, 1, 1], contains only the element 1, so the number of distinct elements in each window is 1.
*/
# include<iostream>
# include<vector>
# include<unordered_map>
# include<algorithm>
using namespace std;
vector<int> countDistinct(vector<int> &arr, int k) {
    vector<int> ans;
    unordered_map<int, int> mp;
    int n = arr.size();
    for (int i = 0; i < k; i++) {
        mp[arr[i]]++;
    }
    ans.push_back(mp.size());
    for (int i = k; i < n; i++) {
        mp[arr[i - k]]--;
        if (mp[arr[i - k]] == 0)
            mp.erase(arr[i - k]);
        mp[arr[i]]++;
        ans.push_back(mp.size());
    }
    return ans;
}
int main(){
    vector<int>v= {1, 2, 1, 3, 4, 2, 3};
    int k =4;
    vector<int>p = countDistinct(v,k);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}