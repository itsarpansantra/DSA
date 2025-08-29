//Calculate the product of all the elements in the given array.
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
   int product=1;
   for(int i=0;i<n;i++){
    product*=arr[i];
    }
    cout<<"product of array : "<<product;
}