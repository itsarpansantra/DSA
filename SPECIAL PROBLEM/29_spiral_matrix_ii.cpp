/*
matrix is -> 1 2 3    1 2 3
             4 5 6 -> 8 9 4 
             7 8 9    7 6 5
 first go 1 2 3 then come down then left then up then right . 
 increase the value 1 by 1
 my input is only number then print number* number matrix
*/
# include<iostream>
using namespace std;
int main(){
    int n,m;
    // cout<<"Enter row size: ";
    // cin>>m;
    cout<<"Enter column size: ";
    cin>>n;

    //input

    int arr[n][n];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<endl;

    // spiral

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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}