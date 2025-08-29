/*
You are given an array nums consisting of positive integers.

You have to take each integer in the array, reverse its digits, and add it to the end of the array. You should apply this operation to the original integers in nums.

Return the number of distinct integers in the final array.

 

Example 1:

Input: nums = [1,13,10,12,31]
Output: 6
Explanation: After including the reverse of each number, the resulting array is [1,13,10,12,31,1,31,1,21,13].
The reversed integers that were added to the end of the array are underlined. Note that for the integer 10, after reversing it, it becomes 01 which is just 1.
The number of distinct integers in this array is 6 (The numbers 1, 10, 12, 13, 21, and 31).
*/
# include<iostream>
# include<unordered_set>
# include<vector>
using namespace std;
int reverse(int n){
    int r =0;
    while(n>0){
        r*=10;
        r+=(n%10);
        n/=10;
    }
    return r;
}
int distinct_integers(vector<int>&v){
    unordered_set<int>s;
    int n = v.size();
    for(int i=0;i<n;i++){
        int rev = reverse(v[i]);
        v.push_back(rev);
    }
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
    return s.size();


    // ai ta korlao hoba

    /*
    unordered_set<int>s;
    int n = v.size();
    for(int i=0;i<n;i++){
        int rev = reverse(v[i]);
        s.insert(rev);
        s.insert(v[i]);
    }
    return s.size();
    */
}
int main(){
    int arr[]= {1,13,10,12,31};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<distinct_integers(v);
}