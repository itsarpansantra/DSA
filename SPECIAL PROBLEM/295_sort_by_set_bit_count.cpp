/*
Given an array arr[] of integers, sort the array (in descending order) according to count of set bits in binary representation of array elements. 

Note: For integers having same number of set bits in their binary representation, sort according to their position in the original array i.e., a stable sort.

Examples:
Input: arr[] = [5, 2, 3, 9, 4, 6, 7, 15, 32]
Output: [15, 7, 5, 3, 9, 6, 2, 4, 32]
Explanation: The integers in their binary representation are:
15 - 1111
7  - 0111
5  - 0101
3  - 0011
9  - 1001
6  - 0110
2  - 0010
4  - 0100
32 - 10000
hence the non-increasing sorted order is: [15], [7], [5, 3, 9, 6], [2, 4, 32]
Input: arr[] = [1, 2, 3, 4, 5, 6]
Output: [3, 5, 6, 1, 2, 4]
Explanation: The integers in their binary representation are:
3  - 0011
5  - 0101
6  - 0110
1  - 0001
2  - 0010
4  - 0100
hence the non-increasing sorted order is: [3, 5, 6], [1, 2, 4]
*/
# include<bits/stdc++.h>
using namespace std;
vector<int>setbit(vector<int>&arr){
    vector<pair<int,int>> v;
    for(int i=0;i<arr.size();i++){
        int bit = __builtin_popcountll(arr[i]);
        v.push_back({arr[i],bit});
    }
    stable_sort(v.begin(), v.end(), [](auto &a, auto &b){
        return a.second > b.second;
    });
    vector<int>ans;
    for(auto &a:v){
        ans.push_back(a.first);
    }
    return ans;
}
int main(){
    vector<int>arr = {1, 2, 3, 4, 5, 6};
    vector<int>p = setbit(arr);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}