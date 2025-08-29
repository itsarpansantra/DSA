/*
You are given an integer array digits, where each element is a digit. The array may contain duplicates.

You need to find all the unique integers that follow the given requirements:

The integer consists of the concatenation of three elements from digits in any arbitrary order.
The integer does not have leading zeros.
The integer is even.
For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

Return a sorted array of the unique integers.

 

Example 1:

Input: digits = [2,1,3,0]
Output: [102,120,130,132,210,230,302,310,312,320]
Explanation: All the possible integers that follow the requirements are in the output array. 
Notice that there are no odd integers or integers with leading zeros.
*/
# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;
vector<int>evenNumber(vector<int>&v){
    int n =v.size();
    vector<int>ans;
    unordered_map<int,int>m; // key and frequency . key mana vector element . freq mana kato bar acha oi value ta
    for(int ele:v){
        m[ele]++;
    }
    for(int i=100;i<=999;i+=2){ // we want even number 
        int x =i;
        int a = x%10; // one place digit
        x /=10;
        int b = x%10; // 10th place digit
        x/=10;
        int c = x; // 100th place digit . last akta element poree thakba
        if(m.find(a)!=m.end()){ // jodi a exist kora 
            m[a]--; // tahola map thaka akbar komia dabo
            if(m[a]==0) m.erase(a); // jodi a 0 hoye jay map thaka uria debo
            if(m.find(b)!=m.end()){ // jodi b exist kora 
                m[b]--; // tahola map thaka akbar komia dabo
                if(m[b]==0) m.erase(b); // jodi b 0 hoye jay map thaka uria debo
                if(m.find(c)!=m.end()) ans.push_back(i) ; // vector oi element ta puch kore dao
                m[b]++; // b k push korbo
            }
            m[a]++; // a ta k abar puch kore debo
        }
    }
    return ans;
}
int main(){
    int arr[] = {2,1,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    vector<int>p = evenNumber(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }

}