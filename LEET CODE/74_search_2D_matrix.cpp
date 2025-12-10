/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 
*/
# include<iostream>
# include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>&v , int target){
    int row = v.size();
    int column = v[0].size();
    int i=0;
    int j= column-1;
    while(i<row && j>=0){
        if(v[i][j]==target) return true;
        else if(v[i][j]>target) j--;
        else i++;
    }
    return false;
}
int main(){
    vector<vector<int>>v={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    searchMatrix(v,3);
    
}