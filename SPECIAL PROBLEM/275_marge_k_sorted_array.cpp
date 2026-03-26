/*
You are given a 2D matrix mat[][] of size n x m. Each row in the matrix is sorted in non-decreasing order. Your task is to merge all the rows and return a single sorted array that contains all the elements of the matrix.

Examples :

Input: mat[][] = [[1, 3, 5, 7],
                [2, 4, 6, 8], 
                [0, 9, 10, 11]]
Output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
Explanation: Merging all elements from the 3 sorted arrays and sorting them results in: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11].
Input: mat[][] = [[1, 2, 3, 4], 
                [2, 2, 3, 4],
                [5, 5, 6, 6],
                [7, 8, 9, 9]]
Output: [1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9] 
Explanation: Merging all elements from the 4 sorted arrays and sorting them results in:[1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9]
*/
# include<bits/stdc++.h>
using namespace std;
vector<int>single_array(vector<vector<int>>&v){
    priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> pq;
    int n  = mat.size();
    int m = mat[0].size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        pq.push({mat[i][0],i,0}); // 0 th column all element push
    }
    while(!pq.empty()){
        auto[val,r,c] = pq.top();
        pq.pop();
        ans.push_back(val);
            
        if(c+1<m){
            pq.push({mat[r][c+1],r,c+1}); // basiclly pq top in which row , this row column update then push elembnt in pq 
        }
    }
    return ans;
}
int main(){
    vector<vector<int>>v ={ {1, 3, 5, 7},{2, 4, 6, 8},{0, 9, 10, 11}};
    vector<int>p = single_array(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    } 
}