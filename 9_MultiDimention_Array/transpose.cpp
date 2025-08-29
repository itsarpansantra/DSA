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
    for(int i=0;i<=m-1;i++){ // for row
        for(int j=0;j<=n-1;j++){ // for column
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
    int trans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j] <<" ";
        }
        cout<<endl;
    }
}


// another processes
// # include<iostream>
// using namespace std;
// int main(){
//    int n,m;
//    cin>>n;
//    cin>>m;
//    int arr[n][m];
//    cout<<"Enter row and column elements: ";
   
//    for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cin>>arr[i][j];
//     }
//    }
//    cout<<endl;
//    for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<arr[i][j]<< " ";
//     }
//     cout<<endl;
//    }
//    cout<<endl;
//    for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<arr[j][i]<< " ";
//     }
//     cout<<endl;
//    }
// }