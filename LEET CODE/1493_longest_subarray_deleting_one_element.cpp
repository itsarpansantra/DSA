/*
Given a binary array nums, you should delete one element from it.

Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

 

Example 1:

Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.
Example 2:

Input: nums = [0,1,1,1,0,1,1,0,1]
Output: 5
Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].
Example 3:

Input: nums = [1,1,1]
Output: 2
Explanation: You must delete one element.
// step1: hoy 0 ba 1 delete korta hoba , dia max 1 r length bolta hoba 
// step2: jodi array te 0 na thaka takhn e 1 delete korbo
// step3: jodi array te 0 thaka akta 0 delete korbo ar 1 r max length bar korbo
*/
// # include<iostream>
// # include<vector>
// # include<climits>
// # include<algorithm>
#include <bits/stdc++.h>
using namespace std;
// int consecutive(vector<int>&v){
//     int n = v.size();
//     int i=0,j=0;
//     int max_len = 0;
//     int len =0;
//     int flip=0; // akhna delete er jaygay flip kore dilam dia maxlen-1 kore debo 
//     int k =1; // always 1 akbar e delete korta hoba 
//     while(j<n){
//         if(v[j]==1) j++; // 1 thala continue
//         else{
//             if(flip<k){ // 1 na thakla 0 hola flip count hoba ar k r thaka choto hola j++ hoba
//                 flip++;
//                 j++;
//             }
//             else{ 
//                 len  = j-i;
//                 max_len = max(len,max_len);  // length calculate kore nebo
//                 while(v[i]==1) i++; // k flip er saman hoye gacha , taii jatokhan na porer 0 asa tatokhan i++ korbo
//                 i++;
//                 j++;
//             }
//         }
//     }
//     len  = j-i;
//     max_len = max(len,max_len);  // last abar dhakbo length . jodi max_len change na hoy
//     return max_len-1;
// }

// another approach

int consecutive(vector<int>&v){
    int n = v.size();
    int i=0,j=0,count=0,max_len=0;
    int zeropos=-1;
    while(j<n){
        int prev=zeropos;
        if(v[j]==0){
            zeropos=j;
            count++;
        }
        if(count<=1){
            j++;
        }
        else{
            int len =j-i;
            max_len = max(max_len,len);
            i = prev+1;
            j++;
            count--;
        }
    }
    int len =j-i;
    max_len = max(max_len,len);
    return max_len-1;
}
int main(){
    vector<int>v = {1,0,1,1,0,0,1,1,1,1,0};
    cout<<consecutive(v);
}