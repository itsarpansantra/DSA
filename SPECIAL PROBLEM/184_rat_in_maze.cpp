/*
Consider a rat placed at position (0, 0) in an n x n square matrix maze[][]. The rat's goal is to reach the destination at position (n-1, n-1). The rat can move in four possible directions: 'U'(up), 'D'(down), 'L' (left), 'R' (right).

The matrix contains only two possible values:

0: A blocked cell through which the rat cannot travel.
1: A free cell that the rat can pass through.
Your task is to find all possible paths the rat can take to reach the destination, starting from (0, 0) and ending at (n-1, n-1), under the condition that the rat cannot revisit any cell along the same path. Furthermore, the rat can only move to adjacent cells that are within the bounds of the matrix and not blocked.
If no path exists, return an empty list.

Note: Return the final result vector in lexicographically smallest order.

Examples:

Input: maze[][] = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]
Output: ["DDRDRR", "DRDDRR"]
Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.
Input: maze[][] = [[1, 0], [1, 0]]
Output: []
Explanation: No path exists as the destination cell (1, 1) is blocked.
Input: maze[][] = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
Output: ["DDRR", "RRDD"]
Explanation: The rat has two possible paths to reach the destination: DDRR and RRDD.
*/
# include<iostream>
# include<string>
# include<vector>
using namespace std;
void maze2(int sr,int sc,vector<vector<int>>& maze, vector<string>&ans,string str){
    int n = maze.size();
    if(sr<0 || sr>=n || sc<0 || sc>=n || maze[sr][sc]==0) return; // uper,lower case .special not started 0
    if(sr==n-1 && sc==n-1){ // Destination reached
         ans.push_back(str);
         return ;
    }
    maze[sr][sc] = 0;   // Mark current cell as visited
     maze2(sr+1,sc,maze,ans,str+'D'); // down
     maze2(sr,sc-1,maze,ans,str+'L'); // left 
     maze2(sr,sc+1,maze,ans,str+'R'); // right
     maze2(sr-1,sc,maze,ans,str+'U'); // up
     maze[sr][sc]=1; // backtrack (unmark current cell)
    } 
vector<string> ratInMaze(vector<vector<int>>& maze) {
    vector<string>ans;
    if(maze[0][0]==0) return ans;
    maze2(0,0,maze,ans,"");
    return ans;
}
int main(){
    vector<vector<int>>v={{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string>p = ratInMaze(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}