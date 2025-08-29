//WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
# include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
   for(int i=1;i<=n;i++){
   cin>>arr[i];
   }
   for(int i=1;i<=n;i++){
    if(i!=arr[i]){
        cout<<i<<" element is missing in array";
        break;
    }
    }
}