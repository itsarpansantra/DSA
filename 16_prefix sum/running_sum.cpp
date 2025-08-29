// prefix sum 
/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]*/

#include<iostream>
# include<vector>
using namespace std;
// vector<int>runingSum(vector<int>&v){
//     int n = v.size();
//     vector<int> run(n);
//     run[0]=v[0];
//     for(int i=1;i<n;i++){
//         run[i]=v[i]+run[i-1];
//     }
//     return run;
// }
// int main(){
//     int arr[]={2,1,4,5,3,2,7,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(arr,arr+n);

//     vector<int>ans = runingSum(v);
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

//another method

// vector<int>runingSum(vector<int>&v){
//     int n = v.size();
//     vector<int> run(n);
//     run[0]=v[0];
//     for(int i=1;i<n;i++){
//         run[i]=v[i]+run[i-1];
//     }
//     return run;
// }
int main(){
    int arr[]={2,1,4,5,3,2,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);

    // vector<int>ans = runingSum(v);
    // for(int i=0;i<n;i++){
    //     cout<<ans[i]<<" ";
    // }

    for(int i=1;i<n;i++){
        v[i]=v[i]+v[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
