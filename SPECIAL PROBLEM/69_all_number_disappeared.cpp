/*
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
*/
# include<iostream>
# include<vector>
using namespace std;
vector<int>ans (vector<int>&arr){
    int n = arr.size();
    int i=0;
    while(i<n){
        int correctIdx = arr[i]-1;
        if(arr[correctIdx]==arr[i])i++;
        else swap(arr[i],arr[correctIdx]);
    }
    vector<int>s;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1) s.push_back(i+1);
    }
    return s;
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int arr[]={4,3,2,7,8,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>p(n);
    for(int i=0;i<n;i++){
        p[i]=arr[i];
    }
    display(p);
    vector<int>v = ans(p);
    cout<<endl;
    cout<<"My missing element: ";
    display(v);
    
}