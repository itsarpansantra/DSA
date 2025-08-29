//q
//1 2 3
//4 5 6
//7 8 9
//sol
//7 8 9 
//6 5 4 
//1 2 3 
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
     for(int i=m-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}