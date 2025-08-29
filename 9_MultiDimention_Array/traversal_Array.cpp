# include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {2,4,3,7,8,4,6,4,1};
    for(int i=0;i<=2;i++){ // for row
        for(int j=0;j<=2;j++){ // for column
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;

    }
}