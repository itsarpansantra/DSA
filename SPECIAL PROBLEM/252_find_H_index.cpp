/*
You are given an array citations[], where each element citations[i] represents the number of citations received by the ith paper of a researcher. You have to calculate the researcher’s H-index.
The H-index is defined as the maximum value H, such that the researcher has published at least H papers, and all those papers have citation value greater than or equal to H.

Examples:

Input: citations[] = [3, 0, 5, 3, 0]
Output: 3
Explanation: There are at least 3 papers with citation counts of 3, 5, and 3, all having citations greater than or equal to 3.
Input: citations[] = [5, 1, 2, 4, 1]
Output: 2
Explanation: There are 3 papers (with citation counts of 5, 2, and 4) that have 2 or more citations. However, the H-Index cannot be 3 because there aren't 3 papers with 3 or more citations.
Input: citations[] = [0, 0]
Output: 0
Explanation: The H-index is 0 because there are no papers with at least 1 citation.
*/
// have to find citations[i] must be equal with index 
/*
sort desending order 
ex-2
5,4,2,1,1
5 and 4 are less or equal to their index , but 2 cannot equal -> because my previous count =2 , if i count count =3
// citations[i] = 2 , and counnt 3 . count greater for the reason it not possible 
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int h_index(vector<int>&v){
    // sort desending order 
    sort(v.begin(),v.end(),greater<int>());
    int count =0;
    for(int i=0;i<v.size();i++){
        if(v[i]>i) count++;
        else break;
    }
    return count;
}
int main(){
    vector<int>v = {5, 1, 2, 4, 1};
    cout<<h_index(v);
}