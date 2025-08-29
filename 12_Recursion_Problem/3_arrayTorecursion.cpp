# include<iostream>
using namespace std;
  void display(int arr[],int n,int index){
       if(index==n) return ;
       cout<<arr[index]<<" ";
       display(arr,n,index+1); 
    }
int main(){
    int arr[]={4,5,8,6,2,3,5,56,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
}