/*
No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.

Given an integer n, return a list of two integers [a, b] where:

a and b are No-Zero integers.
a + b = n
The test cases are generated so that there is at least one valid solution. If there are many valid solutions, you can return any of them.

 

Example 1:

Input: n = 2
Output: [1,1]
Explanation: Let a = 1 and b = 1.
Both a and b are no-zero integers, and a + b = 2 = n.
*/
# include<iostream>
# include<vector>
using namespace std;
bool check(int n){
    while(n>0){
        if(n%10==0) return false;
        n/=10;
    }
    return true;
}
vector<int>add(int n){
    for(int a=1;a<n;a++){
        int b = n-a;
        if(check(a)&&check(b)) return {a,b};
    }
    return {};
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>v=add(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}