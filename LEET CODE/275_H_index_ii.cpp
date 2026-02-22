/*
Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper and citations is sorted in non-descending order, return the researcher's h-index.

According to the definition of h-index on Wikipedia: The h-index is defined as the maximum value of h such that the given researcher has published at least h papers that have each been cited at least h times.

You must write an algorithm that runs in logarithmic time.

 

Example 1:

Input: citations = [0,1,3,5,6]
Output: 3
Explanation: [0,1,3,5,6] means the researcher has 5 papers in total and each of them had received 0, 1, 3, 5, 6 citations respectively.
Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.
Example 2:

Input: citations = [1,2,100]
Output: 2
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int h_index(vector<int>&v){
    int n = v.size();
    int count =0;
    for(int i=n-1;i>=0;i--){
        if(v[i]>=n-i) count++; // citations[i] greter equal to given n-i . so this citiation recived the paper 
        else break;
    }
    return count;
}
int main(){
    vector<int>v = {0,1,3,5,6};
    cout<<h_index(v);
}