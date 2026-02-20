/*
Given an array of integers arr[] representing non-negative integers, arrange them so that after concatenating all of them in order, it results in the largest possible number. Since the result may be very large, return it as a string.

Examples:

Input: arr[] = [3, 30, 34, 5, 9]
Output: 9534330
Explanation: Given numbers are [3, 30, 34, 5, 9], the arrangement [9, 5, 34, 3, 30] gives the largest value.
Input: arr[] = [54, 546, 548, 60]
Output: 6054854654
Explanation: Given numbers are [54, 546, 548, 60], the arrangement [60, 548, 546, 54] gives the largest value.
Input: arr[] = [3, 4, 6, 5, 9]
Output: 96543
Explanation: Given numbers are [3, 4, 6, 5, 9], the arrangement [9, 6, 5, 4, 3] gives the largest value.
*/
# include<iostream>
# include<vector>
# include<string>
# include<algorithm>
using namespace std;
static bool cmp(string a , string b){ // this is for sort 
    return a+b>b+a; 
}
string largest_number(vector<int>&v){
    vector<string>str;
    for(int i=0;i<v.size();i++){
        str.push_back(to_string(v[i])); // vector array to string array
    }
    sort(str.begin(),str.end(),cmp); // this is sort ab>ba then a goes left . ab<ba then b goes left
    if(str[0]=="0") return "0"; // if all element 0 then  
    string ans="";
    for(int i=0;i<str.size();i++){
        ans+=str[i];
    }
    return ans;
}   
int main(){
    vector<int>v = {3, 30, 34, 5, 9};
    cout<<largest_number(v);
}