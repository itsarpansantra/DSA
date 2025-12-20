/*
We have two special characters:

The first character can be represented by one bit 0.
The second character can be represented by two bits (10 or 11).
Given a binary array bits that ends with 0, return true if the last character must be a one-bit character.

 

Example 1:

Input: bits = [1,0,0]
Output: true
Explanation: The only way to decode it is two-bit character and one-bit character.
So the last character is one-bit character.
Example 2:

Input: bits = [1,1,1,0]
Output: false
Explanation: The only way to decode it is two-bit character and two-bit character.
So the last character is not one-bit character.
*/

# include<iostream>
# include<vector>
using namespace std;

bool check(vector<int>&v){
    int n = v.size();
    int i=0;
    while(i<n-1){
        if(v[i]==1) i+=2;
        else i++;
    }
    return (i==n-1); // i last bit hola true nahola false
}
int main(){
    vector<int>v = {1,0,0};
    cout<<check(v);
}