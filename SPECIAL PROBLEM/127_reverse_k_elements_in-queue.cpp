// reverse k elements 
# include<iostream>
# include<stack>
# include<queue>
using namespace std;
void reverse(queue<int>&q,int k){
    stack<int>st;
    int n =q.size();
    for(int i=0;i<k;i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
    for(int i=0;i<n-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
void display(queue<int>&q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverse(q,3);
    display(q);
}