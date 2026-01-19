/*
Given a matrix mat[][] of size n*n, where each row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.

Examples:
Input: mat[][] = [[16, 28, 60, 64], k = 3
                [22, 41, 63, 91],
                [27, 50, 87, 93],
                [36, 78, 87, 94]]
Output: 27
Explanation: 27 is the 3rd smallest element.
Input: mat[][] = [[10, 20, 30, 40], k = 7
                [15, 25, 35, 45],
                [24, 29, 37, 48],
                [32, 33, 39, 50]] 
Output: 30
Explanation: 30 is the 7th smallest element.
*/
# include<iostream>
# include<vector>
# include<climits>
# include<algorithm>
using namespace std;
int check(vector<vector<int>>&v,int mid){
    int n = v.size();
    int i=0,j=n-1,count=0;
    while(i<n&&j>=0){
        if(v[i][j]<=mid){
            count+=(j+1);
            i++;
        }
        else j--;
    }
    return count;
}
int smallest(vector<vector<int>>&v,int k){
    int n = v.size();
    int low=v[0][0],high=v[n-1][n-1];
    while(low<high){
        int mid = (low+high)/2;
        if(check(v,mid)<k) low = mid+1;
        else high = mid;
    }
    return low;
}
int main(){
    vector<vector<int>>v={{10, 20, 30, 40},{15, 25, 35, 45},{24, 29, 37, 48},{32, 33, 39, 50}};
    int k = 7;
    cout<<smallest(v,k);
}
    // int check(int mid,vector<vector<int>>&v){
    //     int n  = v.size();
    //     int i=0;
    //     int j=n-1;
    //     int count =0;
    //     while(i<n && j>=0){
    //         if(v[i][j]<=mid){
    //             count+=(j+1);
    //             i++;
    //         }   
    //         else j--;
    //     }
    //     return count;
    // }
    // int kthSmallest(vector<vector<int>> &mat, int k) {
    //     // code here
    //     int n = mat.size();
    //     int low =mat[0][0];
    //     int high = mat[n-1][n-1];
    //     while(low<high){
    //         int mid = (low+high)/2;
    //         if(check(mid,mat)<k) low = mid+1;
    //         else high = mid;
    //     }
    //     return low;
    // }