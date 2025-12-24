/*
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
*/
// step1: akta window r modha sab thaka basi kato 1 acha tar length bar korta hoba 
// step2: amar je k thakba tatogulo 0 k flip korta parbo 
// step3: 
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
int consecutive(vector<int>&v,int k){
    int n = v.size();
    int i=0,j=0;
    int max_len = INT_MIN;
    int len = INT_MIN;
    int flip=0;
    while(j<n){
        if(v[j]==1) j++; // 1 thala ntinue
        else{
            if(flip<k){ // 1 na thakla 0 hola flip count hoba ar k r thaka choto hola j++ hoba
                flip++;
                j++;
            }
            else{ 
                len  = j-i;
                max_len = max(len,max_len);  // length calculate kore nebo
                while(v[i]==1) i++; // k flip er saman hoye gacha , taii jatokhan na porer 0 asa tatokhan i++ korbo
                i++;
                j++;
            }
        }
    }
    len  = j-i;
    max_len = max(len,max_len);  // last abar dhakbo length . jodi max_len change na hoy
    return max_len;
}
int main(){
    vector<int>v = {1,0,1,1,0,0,1,1,1,1,0};
    int k =2;
    cout<<consecutive(v,k);
}