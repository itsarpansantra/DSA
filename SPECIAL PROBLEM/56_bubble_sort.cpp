// # include<iostream>
// using namespace std;
// int main(){
//  int arr[]={4,6,8,2,3,4,5,1,5,5};
//  int n = sizeof(arr)/sizeof(arr[0]);
//  for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-1-i;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }      
//     }
//  }
//  for(int i=0;i<n-1;i++){
//     cout<<arr[i]<<" ";
//  }
// }


//another type
# include<iostream>
using namespace std;
int main(){
 int arr[]={4,6,8,2,3,4,5,1,5,5};
 int n = sizeof(arr)/sizeof(arr[0]);

 for(int i=0;i<n-1;i++){
    bool flag =true;
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag =false;
          
           
        }      
    }
    if(flag==true)   break;
  
 }
 

 for(int i=0;i<n-1;i++){
    cout<<arr[i]<<" ";
 }
}
