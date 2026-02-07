/*
Given an integer array arr[]. Find the maximum value of the sum of i*arr[i] for all 0 ≤ i ≤ arr.size()-1. The only operation allowed is to rotate(clockwise or counterclockwise) the array any number of times.

Examples :

Input: arr[] = [3, 1, 2, 8]
Output: 29
Explanation: Out of all the possible configurations by rotating the elements: arr[] = [3, 1, 2, 8] here (3*0) + (1*1) + (2*2) + (8*3) = 29 is maximum.
Input: arr[] = [1, 2, 3]
Output: 8
Explanation: Out of all the possible configurations by rotating the elements: arr[] = [1, 2, 3] here (1*0) + (2*1) + (3*2) = 8 is maximum.
Input: arr[] = [4, 13]
Output: 13
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<climits>
using namespace std;
int configuration(vector<int>&v){
    int n = v.size();
    int curr_sum = 0;
    int arr_sum =0;
    for(int i=0;i<n;i++){
        arr_sum+=v[i];
        curr_sum+= (i*v[i]);
    }
    int max_sum = curr_sum;
    for(int i=1;i<n;i++){ // now checl every rotation
        curr_sum = curr_sum + arr_sum - n*v[n-i];
        max_sum = max(max_sum,curr_sum);
    }
    return max_sum;
}
int main(){
    vector<int>arr = {3,1,2,8};
    cout<<configuration(arr);
}