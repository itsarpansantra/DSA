// Find the minimum value out of all elements in the array
# include<iostream>
# include<climits>
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
   int min_element = INT_MAX;
//    for(int i=0;i<n;i++){
//     if(min>arr[i]) min =arr[i];
//     }

// another processes
for(int i=0;i<n;i++){
    min_element= min(min_element,arr[i]);
    }
   
    cout<<"minimum element of array : "<<min_element;
}