# include<iostream>
# include<climits>
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
    //max
    int max= INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<=m-1;i++){ // for row
        for(int j=0;j<=n-1;j++){ // for column
           if(max<arr[i][j]) max=arr[i][j];
        }
        cout<<endl;

    }
    //secondMAX
    for(int i=0;i<=m-1;i++){ // for row
        for(int j=0;j<=n-1;j++){ // for column
           if(max!=arr[i][j] && second_max<arr[i][j]) second_max=arr[i][j];
        }
        cout<<endl;

    }
    cout<<max<<endl;
    cout<<second_max;
}
