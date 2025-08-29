/*
Example 1:

Input: satisfaction = [-1,-8,0,5,-9]
Output: 14
Explanation: After Removing the second and last dish, the maximum total like-time coefficient will be equal to (-1*1 + 0*2 + 5*3 = 14).
Each dish is prepared in one unit of time.
Example 2:

Input: satisfaction = [4,3,2]
Output: 20
Explanation: Dishes can be prepared in any order, (2*1 + 3*2 + 4*3 = 20)
Example 3:

Input: satisfaction = [-1,-4,-5]
Output: 0
Explanation: People do not like the dishes. No dish is prepared.
*/

#include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int dishes(vector<int>&v){
    int n = v.size();
    sort(v.begin(),v.end()); // sort the array 
    int sufix[n];
    sufix[n-1] =v[n-1]; // ami last thaka dekhbo . last element as it is likhbo
    for(int i=n-2;i>=0;i--){
        sufix[i]=sufix[i+1]+v[i]; // then ak ak kore array ta vorbo
    }
    //find pivot idx
    int idx=-1;
    for(int i=0;i<n;i++){ // check korbo kon jaygay change hochha 
        if(sufix[i]>=0){
            idx=i;
            break;
        }      
    }
    //max sum
    if(idx==-1) return 0;
    int maxSum=0;
    int x=1;
    for(int i=idx;i<n;i++){
        maxSum+=(v[i]*x); // calculate the sum
        x++;
    }
    return maxSum;
}
int main(){
    int arr[]={-1,-8,0,5,-9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<dishes(v); 
    
}
