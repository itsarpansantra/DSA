//Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
// mana array te sab element duplicate akta element unique
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
    bool flag=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<arr[i] <<" : is unique element";
            break;
        } 
    }
    
}
