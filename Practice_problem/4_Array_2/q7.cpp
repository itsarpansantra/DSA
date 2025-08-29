// If an array arr contains n elements, then check if the given array is a palindrome or not .
# include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter array size: ";
    cin>>n;
    //int arr[n];
//     cout<<"Enter array element: ";
//    for(int i=0;i<n;i++){
//    cin>>arr[i];
//    }
    int temp =0; int s=n;int a=0;
   for(int i=0;n!=0;i++){ //141
     temp = n%10;
     n/=10;
    a=temp+a*10;

   if(s==a) cout<<"number is palindrome";
    }
   
   // cout<<"number not palindrome";
}