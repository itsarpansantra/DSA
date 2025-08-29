/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

// #include<iostream>
// # include<vector>
// using namespace std;
// vector<int>products(vector<int>&v){
//     int n = v.size();
//     int product =1; // first product
//     int product2=1; // second product
//     int noz=0; // count how many zero are
//     for(int i=0;i<n;i++){ 
//         if(v[i]==0) noz++;
//         product*=v[i]; // array product hoye jaba 
//         if(v[i]!=0) product2*=v[i]; // jodi arry te 0 thaka seta bad diya calculate hoba
//     }
//     if(noz>1) product2=0; // jodi zero ak er thaka basi hoy tahola product2 =0
//     for(int i=0;i<n;i++){
//         if(v[i]==0) v[i]=product2; // jay ta te 0 thakaba seta tay product bus ba , bake sob a 0 
//         else v[i]=product/v[i]; // normal calculate
//     }
//     return v;
// }
// int main(){
//     int arr[]={1,0,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     //prefix sum
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         v[i]=arr[i];
//     }
//     vector<int>ans =products(v); 
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

//another processes  . 3ta vector nia kaj korbo
// #include<iostream>
// # include<vector>
// using namespace std;
// vector<int>products(vector<int>&v){
//     int n = v.size();
//     vector<int>prefix(n);
//     vector<int>sufix(n);
//     vector<int>ans(n);

//     //prefix product array 

//     int p =v[0];// first index . p means product
//     prefix[0]=1;
//     for(int i=1;i<n;i++){
//         prefix[i]=p;
//         p*=v[i];
//     }
//     // suffix product arry

//     p=v[n-1];
//     sufix[n-1]=1;

//     for(int i=n-2;i>=0;i--){
//        sufix[i]=p;
//         p*=v[i];
//     }

//     //ans array
//     for(int i=0;i<n;i++){
//         ans[i]=prefix[i]*sufix[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[]={1,2,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     //prefix sum
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         v[i]=arr[i];
//     }
//     vector<int>ans =products(v); 
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// using 2 vector
// #include<iostream>
// # include<vector>
// using namespace std;
// vector<int>products(vector<int>&v){
//     int n = v.size();
//     vector<int>prefix(n);
//     vector<int>sufix(n);

//     //prefix product array 

//     int p =v[0];// first index . p means product
//     prefix[0]=1;
//     for(int i=1;i<n;i++){
//         prefix[i]=p;
//         p*=v[i];
//     }
//     // suffix product arry

//     p=v[n-1];
//     sufix[n-1]=1;

//     for(int i=n-2;i>=0;i--){
//        sufix[i]=p;
//         p*=v[i];
//     }

//     for(int i=0;i<n;i++){
//         prefix[i]=prefix[i]*sufix[i];
//      }
//     return prefix;
        
    
// }
// int main(){
//     int arr[]={1,2,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     //prefix sum
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         v[i]=arr[i];
//     }
//     vector<int>ans =products(v); 
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// only one vector
#include<iostream>
# include<vector>
using namespace std;
vector<int>products(vector<int>&v){
    int n = v.size();
    vector<int>prefix(n);

    //prefix product array 

    int p =v[0];// first index . p means product
    prefix[0]=1;
    for(int i=1;i<n;i++){
        prefix[i]=p;
        p*=v[i];
    }
    // suffix product arry (in prefix only)

    p=v[n-1];

    for(int i=n-2;i>=0;i--){
       prefix[i]*=p; // suffix of i barechha but prefix r satha calculate hochha
        p*=v[i]; // pore p update hochha
    }

    
    return prefix;
        
    
}
int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    //prefix sum
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    vector<int>ans =products(v); 
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}