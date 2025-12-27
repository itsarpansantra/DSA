/*
Given an array arr of integers, check if there exist two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
 

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: For i = 0 and j = 2, arr[i] == 10 == 2 * 5 == 2 * arr[j]
Example 2:

Input: arr = [3,1,7,11]
Output: false
Explanation: There is no i and j that satisfy the conditions.
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
bool check(vector<int>&v){
    int n = v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int target = v[i] * 2;
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(mid != i && v[mid] == target) return true;
            else if(v[mid] > target) high = mid - 1;
            else low = mid + 1;
        }

    }
    return false;
}

int main(){
    vector<int>v = {10,2,5,3};
    cout<<check(v);
}