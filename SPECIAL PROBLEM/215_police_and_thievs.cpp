/*
Given an array arr[], where each element contains either a 'P' for policeman or a 'T' for thief. Find the maximum number of thieves that can be caught by the police. 
Keep in mind the following conditions :

Each policeman can catch only one thief.
A policeman cannot catch a thief who is more than k units away from him.
Examples:

Input: arr[] = ['P', 'T', 'T', 'P', 'T'], k = 1
Output: 2
Explanation: Maximum 2 thieves can be caught. First policeman catches first thief and second police man can catch either second or third thief.
Input: arr[] = ['T', 'T', 'P', 'P', 'T', 'P'], k = 2
Output: 3
Explanation: Maximum 3 thieves can be caught.
*/
# include<iostream>
# include<vector>
using namespace std;
int police_thiev(vector<char>&v,int k){
    int n = v.size();
    vector<int>p;
    vector<int>t;
    for(int i=0;i<n;i++){
        if(v[i]=='P')p.push_back(i); // police index
        else t.push_back(i); // thiev index
    }

    int i=0,j=0,count=0;
    while(i<p.size()&&j<t.size()){
        if(abs(p[i]-t[j])<=k){
            count++;
            i++;
            j++;
        }
        else if(p[i]>t[j]) j++;// thief is on the left → move thief
        else i++; // police is on the left → move police
    }
    return count;
}
int main(){
    vector<char>v = {'P', 'T', 'T', 'P', 'T'};
    int k =1;
    cout<<police_thiev(v,k);
}