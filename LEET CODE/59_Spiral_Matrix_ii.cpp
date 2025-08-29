 # include<iostream>
 # include<vector>
 using namespace std;
  vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>arr(n,vector<int>(n));// n row , n column
        int min_row=0 , min_column=0;
        int max_row=n-1 , max_column=n-1;
        int count=0;
        while(min_row<=max_row && min_column<=max_column){

            // right

            for(int j=min_column ; j<=max_column;j++){
            arr[min_row][j]=count+1;
            // cout<<count<<" ";
                count++;
            }
                min_row++;
            if(min_row>max_row ||  min_column>max_column) break;
            // down

            for(int i=min_row;i<=max_row;i++){
            arr[i][max_column]=count+1;
            //  cout<<count<<" ";
                count++;
            }
                max_column --;
            if(min_row>max_row ||  min_column>max_column) break;
            //left

            for(int j=max_column;j>=min_column;j--){
                 arr[max_row][j]=count+1;
                //cout<<count<<" ";
                count++;
            }
            max_row --;
            if(min_row>max_row ||  min_column>max_column) break;
            // up

            for(int i=max_row;i>=min_row;i--){
            arr[i][min_column]=count+1;
            // cout<<count<<" ";
                count++;
            }
            min_column ++;
        }
        return arr;
    }