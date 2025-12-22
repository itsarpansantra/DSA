/*
Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.

For example, flipping [1,1,0] horizontally results in [0,1,1].
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

For example, inverting [0,1,1] results in [1,0,0].
 

Example 1:

Input: image = [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
Example 2:

Input: image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
*/
# include<iostream>
# include<vector>
using namespace std;
vector<vector<int>>flip(vector<vector<int>>&v){
    int n = v.size();
    int m = v[0].size();

    for(int k=0;k<n;k++){
        int i=0;
        int j = m-1;
        while(i<j){
            int temp = v[k][i];
            v[k][i]=v[k][j];
            v[k][j]=temp;
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0) v[i][j]=1;
            else v[i][j]=0;
        }
    }
    return v;
}
int main(){
    vector<vector<int>>v={{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>>p = flip(v);
    for(int i=0;i<p.size();i++){
        for(int j=0;j<p.size();j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}