/*
1 2 3            7 4 1
4 5 6        ->  8 5 2   
7 8 9            9 6 3
*/
# include<iostream>
using namespace std;
int main(){
    int n; // this also square matrix
    cout<<"Enter row and column number : ";
    cin>>n;
    int arr[n][n];

    // input 

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // output

    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // transepose

     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           int temp = arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
     //90 Degree rotate

    for(int k=0;k<n;k++){
       int i=0;
       int j=n-1;
       while(i<j){
        int temp = arr[k][i]; // swaping k,i and k,j . beacause row number fix
        arr[k][i]=arr[k][j]; 
        arr[k][j]=temp;
        i++;
        j--;
       }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}