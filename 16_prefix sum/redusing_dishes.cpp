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
