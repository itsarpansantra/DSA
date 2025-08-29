// # include<iostream>
// using namespace std;
// int main(){
//   int arr[2][3] ={{1,2,3},{4,5,6}};
//   int brr[2][3]={{7,8,9},{10,11,12}};
//   int res[2][3] ;
//   for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//       res[i][j] = arr[i][j]+ brr[i][j];
//     }
//   }
//   for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//       cout<<res[i][j] <<" ";
//     }
//     cout<<endl;
//   }
// }
// another processes
//  # include<iostream>
// using namespace std;
// int main(){
//   int arr[2][3] ={{1,2,3},{4,5,6}};
//   int brr[2][3]={{7,8,9},{10,11,12}};
//   for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//       cout<<arr[i][j]+brr[i][j] <<" ";
//     }
//     cout<<endl;
//   }
// }
// another processe
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
    cout<<endl;
   int x,y;
   cout<<"Enter row size: ";
   cin>>x;
   cout<<"Enter column size: ";
   cin>>y;
   int brr[x][y];
   // input
   for(int i=0;i<=x-1;i++){ // for row
        for(int j=0;j<=y-1;j++){ // for column
          cin>> brr[i][j];
        }
    }
    //output
    cout<<endl;
    for(int i=0;i<=m-1;i++){
      for(int j=0;j<=n-1;j++){
        brr[i][j]+=arr[i][j];
      }
    }
    cout<<endl;
    for(int i=0;i<=m-1;i++){
      for(int j=0;j<=n-1;j++){
       cout<< brr[i][j]<<" ";
      }
      cout<<endl;
    }
}