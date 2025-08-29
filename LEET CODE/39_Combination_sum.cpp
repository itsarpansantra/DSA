/*Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
frequency
 of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

 

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
Example 3:

Input: candidates = [2], target = 1
Output: []
 */

 // normal processes
 // combination of element and if element sum is target value then print
# include<iostream>
# include<vector>
using namespace std;
void combination(int arr[],int n,vector<int>v,int target,int index){
    if(target==0){ // if target = 0 so, my code also done and print the element
        for(int i=0;i<v.size();i++){// every time my new vector creat
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    if(target<0)return ; // target = -1 . so code finish nothing to print
    for(int i=index;i<n;i++){ 
        // ami bolta chachhi 2 jadi nay tar thaka choto kouka nabo na baro nabo sabsamoy
        // jadi 3 nay 2 ar nabo na 3 r baro nabo
        v.push_back(arr[i]); 
        combination(arr,n,v,target-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[]={2,3,5}; // i take array
    int n = sizeof(arr)/sizeof(arr[0]); // array size
    vector<int>v; // my vector
    int target =8; // sum target value
    combination(arr,n,v,target,0); 
}

class Solution {
    public:
        void combination(vector<vector<int>>&ans ,vector<int>v , vector<int>& candidates , int target , int idx ){
            // candidates means oi khana akta array pass korecha basiclly . ex: input 2,3,5
            if(target==0){ // target jodi fulfill hoye jay to baro vector e choto vector push_back karo dia return 
                ans.push_back(v);
                return ;
            }
            if(target<0) return; // jodi target r thaka choto hoye jay tyo return
    
            for(int i=idx;i<candidates.size();i++){ // ami oi idx thaka puro aray travel korbo . arr[]={2,3,5}
                v.push_back(candidates[i]); // choto vector a array eleement vorti korbo
                combination(ans,v,candidates,target-candidates[i],i); // ai khana i mona current index send korbo
                // dhore 2,3,5 to  ami jodi 3 a dhuka jay ami kakhno ar 2 k asbo na 
                // target-candidates[i] ar  mana pratek bar loop cholla target r value ta kom ta thakba
                v.pop_back(); // dhore ami first iteration 2 dilam . second 2 thaka continue hoba  pratek loop . ai ta na korer janno pop korla 2 baria jaba 3 thaka start hoba
            }
            
        }
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>>ans; // akta khali vector baniachi // ai khana puro vector ta k push_back korbo
            vector<int>v; // ai vector tay value gulo add hoba . target k jeta hala element gulo
            combination(ans,v,candidates,target,0); // function run korlam 0 denote index
            return ans; // last ami baro vector ta k return kore debo
        }
    };