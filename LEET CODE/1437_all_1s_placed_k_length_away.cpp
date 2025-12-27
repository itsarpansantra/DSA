/*
Given an binary array nums and an integer k, return true if all 1's are at least k places away from each other, otherwise return false.
Example 1:

Input: nums = [1,0,0,0,1,0,0,1], k = 2
Output: true
Explanation: Each of the 1s are at least 2 places away from each other.
Example 2:

Input: nums = [1,0,0,1,0,1], k = 2
Output: false
Explanation: The second 1 and third 1 are only one apart from each other.
*/
# include<iostream>
# include<vector>
using namespace std;
bool present(vector<int>&p,int k){
    int last =-1; // last index of -1;
    for(int i=0;i<p.size();i++){
        if(p[i]==1){
            if(last!=-1 && i-last-1 <k) return false ;// last!=-1 . check first number
        // i-last-1 . is diff b/w two one 
            last=i; // update last
        }
    }
    return true;

}
int main(){
    vector<int> p= {1,0,0,0,1,0,0,1};
    int k = 2;
    cout<<present(p,k);
}