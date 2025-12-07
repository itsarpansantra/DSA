/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:

There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
Example 2:

Input: strs = [""]

Output: [[""]]

Example 3:

Input: strs = ["a"]

Output: [["a"]]
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<set>
# include<map>
# include<unordered_map>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>mp;
    for(string str : strs){
        string lexo = str;
        sort(lexo.begin(),lexo.end());
        if(mp.find(lexo)==mp.end()){
            vector<string>v;
            v.push_back(str);
            mp[lexo]=v;
        }
        else{
            mp[lexo].push_back(str);
        }
    }  
    for(auto x: mp){
        vector<string>v=x.second;
        ans.push_back(v);
    } 
    return ans;
}
int main(){
    vector<string>str = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>p = groupAnagrams(str);
    for(int i =0;i<p.size();i++){
        for(int j=0;j<p[i].size();j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}