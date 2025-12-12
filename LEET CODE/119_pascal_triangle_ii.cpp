/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]
Example 2:

Input: rowIndex = 0
Output: [1]
Example 3:

Input: rowIndex = 1
Output: [1,1]
*/
# include<iostream>
# include<vector>
using namespace std;
vector<int>pascal(int numRows){
         int m=numRows+1;
         vector<vector<int>>v;
         for(int i=0;i<m;i++){
            vector<int> a(i+1);
            v.push_back(a);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) v[i][j]=1;
                else{
                    v[i][j]=v[i-1][j]+v[i-1][j-1];
                }
            }
        }
    return v[m-1];
}
int main(){
    vector<int>v =pascal(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
}