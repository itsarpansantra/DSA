/*
Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.

 

Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"
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