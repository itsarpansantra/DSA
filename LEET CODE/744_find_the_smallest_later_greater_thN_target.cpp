/*
You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.

 

Example 1:

Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.
Example 2:

Input: letters = ["c","f","j"], target = "c"
Output: "f"
Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.
Example 3:

Input: letters = ["x","x","y","y"], target = "z"
Output: "x"
Explanation: There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
*/
# include<iostream>
# include<string>
# include<vector>
using namespace std;
char smallest_latter(vector<char>&v,char target){
    // linear search
    for(int i=0;i<v.size();i++){
        if(v[i]>target) return v[i];
    }
    return v[0];

    // binary serch
    // int low = 0, high = v.size()-1;
    // char ans = v[0];
    // while(low<=high){
    //     int mid = (low+high)/2;
    //     if(v[mid]>target){
    //         ans = v[mid];
    //         high = mid-1;
    //     }
    //     else low = mid+1;
    // }
    // return ans;
}
int main(){
    vector<char>v= {"x","x","y","y"};
    char target = "z";
    cout<<smallest_latter(v,target);
}