/* Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
*/


// using input  
# include<iostream>
# include<vector>
using namespace std;
void printSubset(int arr[],int n,int index,vector<int>ans){
    if(index==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
         return ;
    }
   
    printSubset(arr,n,index+1,ans);
    ans.push_back(arr[index]);
     printSubset(arr,n,index+1,ans);
}
int main(){
    int arr[] = {1,2,3};
    vector<int>v;
    int n = sizeof(arr)/sizeof(arr[0]);
    printSubset(arr,n,0,v);
}


// leet code solution

class Solution {
    public:
        void helper(vector<int>& nums , vector<int>ans , vector<vector<int>>& finalAns , int idx){
            // ans & na laganor karon . partek bar iteration akta nutun vector create hoba
            if(idx==nums.size()){ // array size ar index same hoye gala sob vector gulo k akta alada vector e store korba
                finalAns.push_back(ans);
                return ;
            }
            helper(nums,ans,finalAns,idx+1); // first call ta amni lagba
            ans.push_back(nums[idx]);// every time new vector crete korba . 
            helper(nums,ans,finalAns,idx+1); // ai call vector update hoba
        }
        vector<vector<int>> subsets(vector<int>& nums) { 
            // mums vector ta akta array pass korcha . ar ai puro array ta k akta vector store kore rhakta hoba
            vector<int>ans; // collect array (ata akta akta element dhukba)
            vector<vector<int>>finalAns; // store this array
            helper(nums,ans,finalAns,0); 
            return finalAns; 
        }
    };