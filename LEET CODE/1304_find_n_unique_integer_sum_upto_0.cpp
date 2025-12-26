/*
Given an integer n, return any array containing n unique integers such that they add up to 0.

 

Example 1:

Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
Example 2:

Input: n = 3
Output: [-1,0,1]
Example 3:

Input: n = 1
Output: [0]
*/
# include<iostream>
# include<vector>
using namespace std;
vector<int>check(int n){
    // even hola number ar tar negative . ar odd hola akta extra 0 push korbo
    vector<int>ans;
    for(int i=1;i<=n/2;i++){
        ans.push_back(i);
        ans.push_back(-i);
    }
    if(n%2==1) ans.push_back(0);
    return ans;
}
int main(){
    int n ;
    cout<<"Enter aray size: ";
    cin>>n;
    vector<int>v=check(n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}