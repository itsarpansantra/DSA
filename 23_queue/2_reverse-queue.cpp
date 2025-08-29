# include<iostream>
# include<queue>
# include<stack>
using namespace std;
void display(queue<int>&q){
    int n = q.size(); // queue r size print korlam 
    for(int i=1;i<=n;i++){
        int x = q.front(); // all time front of queue bar korbo
        cout<<x<<" "; // dia print korbo
        q.pop(); // bar kore dabo queue thaka
        q.push(x); // dia oi queue ta push kore dabo 
    }
    cout<<endl;
}
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
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
}