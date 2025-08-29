# include<iostream>
using namespace std;
int main(){
   int m,n;
   cout<<"Enter row size first matrix: ";
   cin>>m;
   cout<<"Enter column size first matrix: ";
   cin>>n;
   int x,y;
   cout<<"Enter row size 2nd matrix: ";
   cin>>x;
   cout<<"Enter column size 2nd matrix: ";
   cin>>y;
  

     if(n==x){

        int arr[m][n];
        cout<<"Enter element first matrix: ";
        for(int i=0;i<m;i++){ // for row
        for(int j=0;j<n;j++){ // for column
          cin>> arr[i][j];
        }
        }

        int brr[x][y];
        cout<<"Enter element second matrix: ";
        for(int i=0;i<x;i++){ // for row
            for(int j=0;j<y;j++){ // for column
          cin>> brr[i][j];
          }
        }
        cout<<endl;
        int result[m][y];
        for(int i=0;i<m;i++){
            for(int j=0;j<y;j++){
// result[i][j]= arr[i][0]*brr[0][j]+arr[i][1]*brr[1][j]+arr[i][2]*brr[2][j]
                result[i][j]=0;
                for(int k=0;k<x;k++){ // n r jaygay x o likhta partam
                        result[i][j]+=arr[i][k]*brr[k][j];
                }
        }
    }
    
    cout<<endl;
     for(int i=0;i<m;i++){ // for row
            for(int j=0;j<y;j++){ // for column
             cout<< result[i][j]<<" ";
          }
          cout<<endl;

        }

    
     }
     else {
        cout<<"Multiplication not possible";
     }
   
}