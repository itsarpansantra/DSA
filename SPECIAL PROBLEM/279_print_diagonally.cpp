/*
Give a n * n square matrix mat[][], return all the elements of its anti-diagonals from top to bottom.

Examples :

Input: n = 2, mat[][] = [[1, 2],
                        [3, 4]]
Output: [1, 2, 3, 4]
Explanation: 

Input: n = 3, mat[][] = [[1, 2, 3],
                       [4, 5, 6],
                       [7, 8, 9]]
Output: [1, 2, 4, 3, 5, 7, 6, 8, 9]
Explanation: 

*/
# include<bits/stdc++.h>
using namespace std;
vector<int>diagonal(vector<vector<int>>&v){
    int n = v.size();
    vector<int>ans;
    for(int i=0;i<2*n-1;++i){
        int row,col;
        if(i<n){
            row = 0;
            col = i;
        }
        else{
            row = i-(n-1);
            col = n-1;
        }
        while(row<n && col>=0){
            ans.push_back(v[row][col]);
            row++;
            col--;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>>v ={{1,2},{3,4}};
    vector<int>p = diagonal(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}