// store max value 


// # include<iostream>
// # include<climits>
// using namespace std;
// void printMax(int arr[],int n , int index , int max){
//     if(n==index){
//         cout<<max;
//         return ;
//     }
//     if(max<arr[index]) max=arr[index];
//     printMax(arr,n,index+1,max);
// }
// int main(){
//     int arr[]={4,5,3,7,8,9,6,78,4};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     printMax(arr,n,0,INT_MIN);
// }



// print max value
// # include<iostream>
// # include<climits>
// using namespace std;
// int printMax(int arr[],int n,int index){
//     if(n==index) return INT_MIN;
//     return max(arr[index],printMax(arr,n,index+1));
// }
//  int main(){
//     int arr[]={4,5,3,7,8,9,6,78,4};
//     int n =sizeof(arr)/sizeof(arr[0]);
//    cout<< printMax(arr,n,0);
// }


// using vector

# include<iostream>
# include<climits>
# include<vector>
using namespace std;
void display2(vector<int>&v,int idx,int max){
  if(v.size()==idx){  
   cout<<max;
    return ;
  }
  if(v[idx]>max)max=v[idx];
    
  display2(v,idx+1,max);
   

}
int main(){
int arr[]={2,4,6,8,1,0,5,3};
int n = sizeof(arr)/sizeof(arr[0]);
vector<int>v(n);
for(int i=0;i<n;i++){
  v[i]=arr[i];
}
int max=INT_MIN;
display2(v,0,max);
}