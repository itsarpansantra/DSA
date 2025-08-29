# include<iostream>
using namespace std;
int main(){
   int m,n;
   cout<<"Enter row size: ";
   cin>>m;
   cout<<"Enter column size: ";
   cin>>n;
   int arr[m][n];
   // input
   for(int i=0;i<=m-1;i++){ // for row
        for(int j=0;j<=n-1;j++){ // for column
          cin>> arr[i][j];
        }
    }
    //output
    int sum=0;
    for(int i=0;i<=m-1;i++){ // for row
        for(int j=0;j<=n-1;j++){ // for column
           sum+=arr[i][j];
        }
        cout<<endl;

    }
    cout<<sum;
}