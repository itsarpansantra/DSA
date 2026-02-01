/*
Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.

 

Example 1:

Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
Output: [2,2,2,1,4,3,3,9,6,7,19]
Example 2:

Input: arr1 = [28,6,22,8,44,17], arr2 = [22,28,8,6]
Output: [22,28,8,6,17,44]
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<unordered_map>
using namespace std;
vector<int>relative(vector<int>&a,vector<int>&b){
    unordered_map<int,int>mp; 
    for(int x:a) mp[x]++; // array1 elemnt store in map with frequeny 

    vector<int>ans;

    for(int x: b){ // access on array2 element 
        while(mp[x]>0){ // then check how many ele present in array1 
            ans.push_back(x); // then store in a vector
            mp[x]--; // decrese array element with frequency
        }
    }

    // remaining elemnt in array 1 
    vector<int>rem;
    for(auto &p: mp){
        while(p.second>0){
            rem.push_back(p.first); // element push on rem array 
            p.second--; // and frequency --
        }
    }

    // then say rem ele in assending order
    sort(rem.begin(),rem.end());

    // then rem array join with result array 
    ans.insert(ans.end(),rem.begin(),rem.end());

    return ans;
}
int main(){
    vector<int>a = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int>b = {2,1,4,3,9,6};
    vector<int>c = relative(a,b);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
}