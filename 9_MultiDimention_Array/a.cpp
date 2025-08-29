# include<iostream>
# include<climits>
# include<cmath>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter row size: ";
    cin>>n;
    cout<<"Enter column size: ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter row and column element: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
   

}