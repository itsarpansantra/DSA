# include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,6,7,2};
    int *ptr = arr;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
}