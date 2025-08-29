/*
There are n people standing in a queue, and they numbered from 0 to n - 1 in left to right order. You are given an array heights of distinct integers where heights[i] represents the height of the ith person.

A person can see another person to their right in the queue if everybody in between is shorter than both of them. More formally, the ith person can see the jth person if i < j and min(heights[i], heights[j]) > max(heights[i+1], heights[i+2], ..., heights[j-1]).

Return an array answer of length n where answer[i] is the number of people the ith person can see to their right in the queue.
Input: heights = [10,6,8,5,11,9]
Output: [3,1,2,1,1,0]
Explanation:
Person 0 can see person 1, 2, and 4.
Person 1 can see person 2.
Person 2 can see person 3 and 4.
Person 3 can see person 4.
Person 4 can see person 5.
Person 5 can see no one since nobody is to the right of them.
*/
# include<iostream>
# include<vector>
# include<stack>
using namespace std;
vector<int>visible_people(vector<int>&v){
    int n =v.size();
    vector<int>ans(n);
    stack<int>st;
    st.push(v[n-1]);
    ans[n-1]=0;
    for(int i=n-2;i>=0;i--){
        int count =0;
        // pop with count
        while(st.size()>0 && v[i]>st.top()){
            st.pop();
            count++;
        }
        // not empty stack
        if(st.size()!=0) count++;
        ans[i]=count;
        //push 
        st.push(v[i]);
    }
    return ans;
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={10,6,8,5,11,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display(v);
    vector<int>p = visible_people(v);
    display(p);
}