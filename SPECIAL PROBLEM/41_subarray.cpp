// # include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }

// }


// using recursion
# include<iostream>
# include<vector>
using namespace std;
void subArray( vector<int>v,int arr[],int n , int index){
   if(index==n){
       for(int i=0;i<v.size();i++){
           cout<<v[i]<<" ";
       }
       cout<<endl;
       return ;
   }
   subArray(v,arr,n,index+1);
   if(v.size()==0){
       v.push_back(arr[index]);
       subArray(v,arr,n,index+1);
   }
   else if(arr[index]-1 == v[v.size()-1]){
       v.push_back(arr[index]);
       subArray(v,arr,n,index+1);
   }
   
}
int main(){
   int arr[]={1,2,3,4};
   int n=sizeof(arr)/sizeof(arr[0]);
   vector<int>v;
   subArray(v,arr,n,0);

}