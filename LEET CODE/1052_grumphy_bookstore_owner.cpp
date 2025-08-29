/*
There is a bookstore owner that has a store open for n minutes. You are given an integer array customers of length n where customers[i] is the number of the customers that enter the store at the start of the ith minute and all those customers leave after the end of that minute.

During certain minutes, the bookstore owner is grumpy. You are given a binary array grumpy where grumpy[i] is 1 if the bookstore owner is grumpy during the ith minute, and is 0 otherwise.

When the bookstore owner is grumpy, the customers entering during that minute are not satisfied. Otherwise, they are satisfied.

The bookstore owner knows a secret technique to remain not grumpy for minutes consecutive minutes, but this technique can only be used once.

Return the maximum number of customers that can be satisfied throughout the day.

 

Example 1:

Input: customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3

Output: 16

Explanation:

The bookstore owner keeps themselves not grumpy for the last 3 minutes.

The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16.

Example 2:

Input: customers = [1], grumpy = [0], minutes = 1

Output: 1

 
*/

#include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int satisfaction(vector<int>&v,vector<int>&p,int time){
    int n = v.size();
    int m = p.size();
    int k = time; // duration  
    int prevLoss = 0; 
    for(int i=0;i<k;i++){
       if(p[i]==1) prevLoss+=v[i]; // calculate prevLoss
    }
    int maxloss = prevLoss; // insialize korlam
    int maxIdx=0;
    int i = 1;
    int j = k;
    while(j<n){
        // nicher 3 ta line  denoted
        // currentLoss= prevLoss+customer[j]-customer[i-1]
        int currentLoss = prevLoss;
        if(p[j]==1) currentLoss+=v[j];
        if(p[i-1]==1) currentLoss-=v[i-1];
        if(maxloss<currentLoss){
            maxloss=currentLoss; // calculate mas loss
            maxIdx=i; // katodur obdi max loss acha  . duration
        }
        prevLoss=currentLoss;
        i++;
        j++;
    }

    // filling 0 s in grumphy array . p array 
    // oi duration grumphy k 000 korbo
    for(int i=maxIdx;i<maxIdx+k;i++){
        p[i]=0;
    }
    //now calculate sum of satisfaction

    int sum =0;
    for(int i=0;i<n;i++){
        if(p[i]==0) sum+=v[i];
    }
    return sum;
}
int main(){
    int arr[]={1,0,1,2,1,1,7,5}; // costomer array 
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int brr[]={0,1,0,1,0,1,0,1}; // grumphy array
    int m = sizeof(arr)/sizeof(arr[0]);
    vector<int>p(m);
    for(int i=0;i<m;i++){
        p[i]=brr[i];
    }
    int minutes =3;
    cout<<satisfaction(v,p,minutes); 
    
}
