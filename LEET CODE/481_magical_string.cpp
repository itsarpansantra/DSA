/*
A magical string s consists of only '1' and '2' and obeys the following rule:

Concatenating the sequence of lengths of its consecutive groups of identical characters '1' and '2' generates the string s itself.
The first few elements of s is s = "1221121221221121122……". If we group the consecutive 1's and 2's in s, it will be "1 22 11 2 1 22 1 22 11 2 11 22 ......" and counting the occurrences of 1's or 2's in each group yields the sequence "1 2 2 1 1 2 1 2 2 1 2 2 ......".

You can see that concatenating the occurrence sequence gives us s itself.

Given an integer n, return the number of 1's in the first n number in the magical string s.

 

Example 1:

Input: n = 6
Output: 3
Explanation: The first 6 elements of magical string s is "122112" and it contains three 1's, so return 3.
Example 2:

Input: n = 1
Output: 1
*/
# include<iostream>
# include<vector>
using namespace std;
int magical(int n){
    if(n<=0) return 0;
    if(n<=3) return 1;

    vector<int>v(n+2);
    // first 3 element in vector
    v[0] = 1;
    v[1] = 2;
    v[2] = 2;

    int head = 2; // starting 
    int tail = 3; // in this index we push the element 
    int count1 = 1; // how many one comes 
    int num =1; // current element come in next

    while(tail<n){
        for(int i=0;i<s[head];i++){
            s[tail] = num; // create magical vector
            if(num==1 && tail<n) count1++; // count 1
            tail++; // update last index
        }
        if(num==1) num =2;
        else num =1;
        head++;
    }
    return count1;
}
int main(){
    int n = 6;
    cout<<magical(n);
}