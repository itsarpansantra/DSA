// this is example
/* 
1 2 3 4
5 6 7 8 
9 10 11 12

output : 1 2 3 4 8 12 11 10 9 5 6 7
*/

# include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter row size: ";
    cin>>m;
    cout<<"Enter column size: ";
    cin>>n;

    //input

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // spiral

    int min_row=0 , min_column=0;
    int max_row=m-1 , max_column=n-1;
    while(min_row<=max_row && min_column<=max_column){

        // right

        for(int j=min_column ; j<=max_column;j++){
            cout<<arr[min_row][j]<< " ";
        }
            min_row++;
        if(min_row>max_row ||  min_column>max_column) break;
        // down

        for(int i=min_row;i<=max_row;i++){
            cout<<arr[i][max_column]<<" ";
        }
            max_column --;
        if(min_row>max_row ||  min_column>max_column) break;
        //left

        for(int j=max_column;j>=min_column;j--){
            cout<<arr[max_row][j]<<" ";
        }
        max_row --;
        if(min_row>max_row ||  min_column>max_column) break;
        // up

        for(int i=max_row;i>=min_row;i--){
            cout<<arr[i][min_column]<<" ";
        }
        min_column ++;
    }
}