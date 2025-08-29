// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
// mana odd index r element k 2 dia gun ar even index r element k 10 dia jog
# include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
   for(int i=0;i<n;i++){
   cin>>arr[i];
   }
   for(int i=0;i<n;i++){
    if(i%2==0) arr[i]+=10;
    else arr[i]*=2;
    }
    for(int i=0;i<n;i++){
     cout<<arr[i]<< " ";
    }
}
// 0 1 2 3 4 
// 2 4 7 9 6
