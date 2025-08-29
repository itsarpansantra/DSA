//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
// Input: nums = [9,6,4,2,3,5,7,0,1]

// Output: 8

// Explanation:

// n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
 
# include<iostream>
# include<vector>
using namespace std;
// int main(){
//     int arr[]={4,5,1,0,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int>(arr,arr+n);

//     vector<bool>check(n+1,false);
//     for(int i=0;i<n;i++){
//         int element = arr[i];
//         check[element]=true;
//     }
//     for(int i=0;i<=n;i++){
//         if(check[i]==false ) cout<<i;
//     }
// }

// // another processes cycle sort

// int main(){
//     int arr[]={5,9,6,3,2,1,4,7,0};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     vector<int>(arr,arr+n);
//     int i=0;

//     while(i<n){
//         int correctIdx=arr[i]; // first element
//         if(correctIdx==i || arr[i]==n) i++; // jodi correctIdx element tar nijer position thaka || ar first element jadi n hoy
//         else (swap(arr[i],arr[correctIdx])); // aki index same element na thakla swap hoba
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]!=i) cout<<i; // ja element correct index thakba na seta show hoba 
        
//     }
//      cout<< n;
// }


int main(){
    int arr[]={5,9,6,3,2,1,4,7,0};
    int n =sizeof(arr)/sizeof(arr[0]);
   // vector<int>(arr,arr+n);

    int actualsum= n*(n+1)/2;
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<actualsum-sum;
}
