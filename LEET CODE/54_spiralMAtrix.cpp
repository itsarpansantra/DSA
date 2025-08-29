 // this is example
/* 
1 2 3 4
5 6 7 8 
9 10 11 12

output : 1 2 3 4 8 12 11 10 9 5 6 7
*/
 
 # include<iostream>
 # include<vector>
 using namespace std;
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(); // for row size 2d arr
        int n=matrix[0].size();// for column size for 2d array
        int min_row=0;
        int min_column=0;
        int max_row=m-1;
        int max_column=n-1;
        vector<int>v;
        while(min_row<=max_row && min_column<=max_column){
            for(int  j=min_column;j<=max_column;j++){
                v.push_back(matrix[min_row][j]);
            }
            min_row++;
            if(min_row > max_row || min_column > max_column) break;
            for(int i=min_row;i<=max_row;i++){
                v.push_back(matrix[i][max_column]);
            }
            max_column--;
            if(min_row > max_row || min_column > max_column) break;
            for(int k=max_column;k>=min_column;k--){
            v.push_back(matrix[max_row][k]); 
            }
            max_row--;
            if(min_row > max_row || min_column > max_column) break;
            for(int m=max_row;m>=min_row;m--){
            v.push_back(matrix[m][min_column]);
            }
            min_column++;
        }
        return v;
    }