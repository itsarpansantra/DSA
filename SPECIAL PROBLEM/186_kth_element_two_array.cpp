/*
Given two sorted arrays a[] and b[] and an element k, the task is to find the element that would be at the kth position of the combined sorted array.

Examples :

Input: a[] = [2, 3, 6, 7, 9], b[] = [1, 4, 8, 10], k = 5
Output: 6
Explanation: The final combined sorted array would be [1, 2, 3, 4, 6, 7, 8, 9, 10]. The 5th element of this array is 6.
Input: a[] = [1, 4, 8, 10, 12], b[] = [5, 7, 11, 15, 17], k = 6
Output: 10
Explanation: Combined sorted array is [1, 4, 5, 7, 8, 10, 11, 12, 15, 17]. The 6th element of this array is 10.
*/
# include<iostream>
# include<vector>
# include<climits>
# include<algorithm>
using namespace std;
int element(vector<int>&arr,vector<int>&brr,int k){
    int n= arr.size();
    int m = brr.size();
    int i=0 , j=0 , ans=-1, count=0;
    while(i<n && j<m){
        if(arr[i]<=brr[j]){
            ans=arr[i++];
        }
        else{
            ans =brr[j++];
        }
        count++;
        if(count==k) return ans;
    }
    if(i==n){
        while(j<m){
            ans =brr[j++];
            count++;
            if(count==k) return ans;
        }
    }
    if(j==m){
        while(i<n){
            ans=arr[i++];
            count++;
            if(count==k) return ans;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {2, 3, 6, 7,9 };
    vector<int>brr = {1, 4, 8, 10};
    int k = 5;
    cout<<element(arr,brr,k);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    
}