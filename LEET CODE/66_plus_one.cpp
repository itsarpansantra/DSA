/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<int>add(vector<int>&v){
    // int n = v.size();
    // int sum =0;
    // for(int i=0;i<n;i++){
    //     sum= sum*10+v[i];
    // }
    // sum+=1;
    // vector<int>ans;
    // while(sum>0){
    //     int p = sum%10;
    //     ans.push_back(p);
    //     sum/=10;
    // }
    // reverse(ans.begin(),ans.end());
    // return ans;
    int n = v.size();
    int carry = 1;  // since we want to add 1
    for (int i = n - 1; i >= 0; i--) {
        int sum = v[i] + carry;
        v[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry) {
        v.insert(v.begin(), carry);
    }
    return v;
}
int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>p(n);
    for(int i=0;i<n;i++){
        p[i]=arr[i];
    }
    // for(int i=0;i<p.size();i++){
    //      cout<<p[i]<<" ";
    // }
    vector<int>v = add(p);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}