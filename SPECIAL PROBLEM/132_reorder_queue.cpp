// akta queue thakab aeven length 
// 1 2 3 4 5 6 7 8 
// op 1 5 2 6 3 7 4 8
# include<iostream>
# include<stack>
# include<queue>
using namespace std;
void reverse(queue<int>&q){
    stack<int>st;
    while(q.size()>0){
        int x = q.front();
        q.pop();
        st.push(x);
    }
   while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
   }
}
void reorder(queue<int>&q){
    int n = q.size();
    stack<int>st;
    for(int i=0;i<n/2;i++){ // revrsse first half of queue 
        st.push(q.front()); // 5 6 7 8 4 3 2 1 o/p
        q.pop();
    }
    while(st.size()>0){ 
        q.push(st.top());
        st.pop();
    }

    // again push on stack second half means now first half of queue
    //5 6 7 8

    for(int i=0;i<n/2;i++){ 
        st.push(q.front()); 
        q.pop();
    }
    // akhana akta element stack nia queue te push korbo ar queue front er element pop kore back push koro

    while(st.size()>0){   // 8 4 7 3 6 2 5 1
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // ai bar reverse korbo 
    reverse(q);
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
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
}