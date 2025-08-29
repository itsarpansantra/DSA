//print this
//   1 2 3          1 4 7
//   4 5 6    ->    8 5 2
//   7 8 9          3 6 9
# include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter row element: ";
    cin>>m;
    cout<<"Enter column element: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter matrix element: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
     for(int j=0;j<n;j++){
        if(j%2==0){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        }
        else {
            for(int i=m-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
        }
        cout<<endl;
     }
}
// another processes
// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n];
//     cout<<"Enter element: ";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//   // transpose
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         int temp=arr[i][j];
//         arr[i][j]=arr[j][i];
//         arr[j][i]=temp;
//     }
//   }
//   for(int k=0;k<n;k++){
//     if(k%2!=0){
//         int i=0;
//         int j=n-1;
//         while(i<=j){
//             int temp=arr[k][i];
//             arr[k][i]=arr[k][j];
//             arr[k][j]=temp;
//             i++;
//             j--;
//         }
//     }
//   }
//      for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }