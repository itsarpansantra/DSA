// find duplicate element in array
# include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter elements: ";
   cin>>n;
   int arr[n];
   cout<<"Enter array elements: ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int flag =false;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]) {
             flag =true;
             cout<<arr[i]<<"DUPLICATE";
             break;
    }
   }
   }
   if(flag==false) cout<<"NO DUPLICATE ELEMENT PRESENT IN ARRAY";
}