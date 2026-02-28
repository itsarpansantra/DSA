/*
Given two sorted arrays arr1[] and arr2[] of size n and m and a number x, find the pair whose sum is closest to x and the pair has an element from each array. In the case of multiple closest pairs return any one of them.

Note : In the driver code, the absolute difference between the sum of the closest pair and x is printed.

Examples:

Input : arr1[] = [1, 4, 5, 7], arr2[] = [10, 20, 30, 40], x = 32
Output : [1, 30]
Explanation:The closest pair whose sum is closest to 32 is [1, 30] = 31.
Input : arr1[] = [1, 4, 5, 7], arr2[] = [10, 20, 30, 40], x = 50 
Output : [7, 40] 
Explanation: The closest pair whose sum is closest to 50 is [7, 40] = 47.
*/
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
vector<int>closest(vector<int>&v,vector<int>&p,int x){
    int i=0;
    int j=p.size()-1;
    int diff = INT_MAX;
    vector<int>s(2);
    while(i<v.size() && j>=0){
        int sum = v[i]+p[j];
        int current_diff = abs(sum-x);
        if(current_diff<diff){
            diff = current_diff;
            s[0] = v[i];
            s[1] = v[j];
        }
        if(sum>x) j--; //dec sum
        else i++; // inc sum
    }
    return s;
}
int main(){
    vector<int>v = {1, 4, 5, 7};
    vector<int>p = {10, 20, 30, 40};
    int x = 32;
    vector<int>s = closest(v,p,x);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}
