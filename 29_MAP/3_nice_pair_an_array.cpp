/*
You are given an array nums that consists of non-negative integers. Let us define rev(x) as the reverse of the non-negative integer x. For example, rev(123) = 321, and rev(120) = 21. A pair of indices (i, j) is nice if it satisfies all of the following conditions:

0 <= i < j < nums.length
nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
Return the number of nice pairs of indices. Since that number can be too large, return it modulo 109 + 7.

 

Example 1:

Input: nums = [42,11,1,97]
Output: 2
Explanation: The two pairs are:
 - (0,3) : 42 + rev(97) = 42 + 79 = 121, 97 + rev(42) = 97 + 24 = 121.
 - (1,2) : 11 + rev(1) = 11 + 1 = 12, 1 + rev(11) = 1 + 11 = 12.
*/
# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;
int rev(int n){
    int r =0;
    while(n>0){
        r*=10;
        r+=(n%10);
        n/=10;
    }
    return r;
}
// methode 1 
// int nice_pair(vector<int>&v){
//     int n = v.size();
//     int count =0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if((v[i]+rev(v[j]))==(rev(v[i])+v[j])) count++;
//         }
//     }
//     return count;
// }

// method 2 
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// int combi(int n ,int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }
// int nice_pair(vector<int>&v){
//     int n = v.size();
//     int count =0;
//     for(int i=0;i<n;i++){
//         v[i]-=rev(v[i]); 
//     }
//     // map insert kore dabo pair gulo k
//     unordered_map<int,int>m;
//     for(int i=0;i<n;i++){
//         m[v[i]]++;
//     }

//     for(auto x:m){
//         int f =x.second;
//         count+=combi(f,2); 
//     }
//     return count;
// }

// method 3
int nice_pair(vector<int>&v){
    int n = v.size();
    int count =0;
    for(int i=0;i<n;i++){
        v[i]-=rev(v[i]); 
    }
    // map insert kore dabo pair gulo k
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        if(m.find(v[i])!=m.end()){
            count%1000000007;
            count+=m[v[i]];
        }
        m[v[i]]++;
    }
    return count%1000000007; // ai ta hochha anek baro count chola ala
}
int main(){
    int arr[]={42,11,1,97};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<nice_pair(v);
}