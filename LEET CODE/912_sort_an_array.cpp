/*
Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

 

Example 1:

Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
Example 2:

Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
Explanation: Note that the values of nums are not necessarily unique.
*/
# include<iostream>
# include<vector>
using namespace std;
void marge(vector<int>& a,vector<int>& b,vector<int>& nums){
    int p = a.size();
    int q = b.size();
    int n = nums.size();
    int i=0,j=0,k=0;
    while(i<p && j<q){
        if(a[i]<b[j]){
            nums[k] = a[i];
            k++;
            i++;
        }
        else {
            nums[k] = b[j];
            k++;
            j++;
        }
    }
    if(i==p){
        while(j<q){
            nums[k] = b[j];
            k++;
            j++;
        }
    }
    else{
        while(i<p){
            nums[k] = a[i];
            k++;
            i++;
        }
    }
}
vector<int> sortArray(vector<int>& nums) {
    int n  = nums.size();
    if(n==1) return nums;
    int n1 = n/2;
    int n2 = n-n1;
    vector<int>a(n1);
    for(int i=0;i<n1;i++){
        a[i] = nums[i];
    }
    vector<int>b(n2);
    for(int i=0;i<n2;i++){
        b[i] = nums[i+n1];
    }
    sortArray(a);
    sortArray(b);
    marge(a,b,nums);
    return nums;
}
int main(){
    vctor<int>num = {5,1,1,2,0,0};
    vector<int>v = sortArray(num);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}