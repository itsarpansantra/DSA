/*
You are given two integers m and n representing a 0-indexed m x n grid. You are also given two 2D integer arrays guards and walls where guards[i] = [rowi, coli] and walls[j] = [rowj, colj] represent the positions of the ith guard and jth wall respectively.

A guard can see every cell in the four cardinal directions (north, east, south, or west) starting from their position unless obstructed by a wall or another guard. A cell is guarded if there is at least one guard that can see it.

Return the number of unoccupied cells that are not guarded.

 

Example 1:


Input: m = 4, n = 6, guards = [[0,0],[1,1],[2,3]], walls = [[0,1],[2,2],[1,4]]
Output: 7
Explanation: The guarded and unguarded cells are shown in red and green respectively in the above diagram.
There are a total of 7 unguarded cells, so we return 7.
Example 2:


Input: m = 3, n = 3, guards = [[1,1]], walls = [[0,1],[1,0],[2,1],[1,2]]
Output: 4
Explanation: The unguarded cells are shown in green in the above diagram.
There are a total of 4 unguarded cells, so we return 4.
 
*/

// akta gurd ar wals 2d array acha . ar akta grid r 2d array acha
// gurd 4 dika move korta pare . ar wall dekhla oi khana stop hoye jaba 
// ai bar grid o sob dika move korba . tarpoe dekhbo oi grid kato gulo place khali acha . tato gulo count korbo dia return korbo

#include<iostream>
# include<vector>
using namespace std;
int unguarded(int m ,int n ,vector<vector<int>>&guards,vector<vector<int>>&walls){
    vector<vector<int>> grid(m,vector<int>(n,0)); // grid er pratek ta cell k 0 kore dilam

    // jekhana jekhana wall thakba sai gulo te grid 1 put korbo
    for(int i=0;i<walls.size();i++){
        int r = walls[i][0];
        int c = walls[i][1];
        if(r>=0  && r<m && c>=0 && c<n) grid[r][c] =1; // walls gulo place kore dilam grid e
    }

    // ai bar guard k place korbo . oi jaygay 2 put korbo
    for(int i=0;i<guards.size();i++){
        int r = guards[i][0];
        int c = guards[i][1];
        if(r>=0  && r<m && c>=0 && c<n) grid[r][c] =2; // guards gulo place kore dilam grid e
    }

    // ai bar guard k ami up,down ,left , right ghurabo . jekhana wall dekhbo stop korbo ar grid last dekhla
    // jekhana jekhana jabo sekhana 3 put korbo

    for(int i=0;i<guards.size();i++){
        int row = guards[i][0];
        int col = guards[i][1];
        
        //up
        for(int i=row-1;i>=0;i--){
            if(grid[i][col]==1 || grid[i][col]==2) break;
            if(grid[i][col]==0) grid[i][col]=3;
        }

        // down
        for(int i=row+1;i<m;i++){
            if(grid[i][col]==1 || grid[i][col]==2) break;
            if(grid[i][col]==0) grid[i][col]=3;
        }

        // right

        for(int i=col+1;i<n;i++){
            if(grid[row][i]==1 || grid[row][i]==2) break;
            if(grid[row][i]==0) grid[row][i]=3;
        }

        // left
        for(int i=col-1;i>=0;i--){
            if(grid[row][i]==1 || grid[row][i]==2) break;
            if(grid[row][i]==0) grid[row][i]=3;
        }
    }
    int ungurdes = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==0) ungurdes++; 
        }
    }
    return ungurdes;
}
int main(){
    vector<vector<int>>guards= {{0,0},{1,1},{2,3}};
    vector<vector<int>>walls= {{0,1},{2,2},{1,4}};
    int m = 4;
    int n =6;
    cout<<unguarded(m,n,guards,walls);
}