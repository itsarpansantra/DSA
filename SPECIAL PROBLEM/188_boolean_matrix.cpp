/*
Given a boolean matrix mat[], where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

Examples:

Input: mat[][] = [[1, 0], [0, 0]]
Output: [[1, 1], [1, 0]] 
Explanation: Only cell that has 1 is at (0,0) so all cells in row 0 are modified to 1 and all cells in column 0 are modified to 1.
Input: mat[][] = [[1, 0, 0], [1, 0, 0], [1, 0, 0], [0, 0, 0]]
Output: [[1, 1, 1], [1, 1, 1], [1, 1, 1], [1, 0, 0]]
Explanation: The position of cells that have 1 in the original matrix are (0, 0), (1, 0) and (2, 0). Therefore, all cells in row 0, 1, 2 are and column 0 are modified to 1. 
Input: mat[][] = [[0, 0], [0, 0]]
Output: [[0, 0], [0, 0]] 
Explanation: There is no cell that contains 1, so mat[] will remain the same.
*/
# include<iostream>
# include<vector>
using namespace std;
void matrix(vector<vector<int>> &v){
    int n = v.size();
    int m = v[0].size();
    bool sr=false,sc=false;

    // check first row contain 1 or not 
    for(int i=0;i<m;i++){
        if(v[0][i]==1){
            sr=true;
            break;
        }
    }

    // check first column contain 1 or not
    for(int j=0;j<n;j++){
        if(v[j][0]==1){
            sc=true;
            break;
        }
    }

    // we see first row and column 
    // mark in matrix which v[i][j]==1 then mark row and column
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(v[i][j]==1){
                v[i][0]=1; // check mark on row
                v[0][j]=1; // check mark on column
            }
        }
    }
    // finded row and column make all one 

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(v[i][0]==1||v[0][j]==1) v[i][j]=1; // make this row nad column 1
        }
    }

    // if first row contain 1 . make all first row all element all one
    if(sr){
        for(int i=0;i<m;i++) v[0][i]=1;
    }
    // now first column 

    if(sc){
        for(int i=0;i<n;i++) v[i][0]=1;
    }

}
int main(){
    vector<vector<int>> v={{1, 0, 0}, {1, 0, 0}, {1, 0, 0}, {0, 0, 0}};
    matrix(v);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}