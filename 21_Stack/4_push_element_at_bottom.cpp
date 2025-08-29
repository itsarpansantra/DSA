// # include<iostream>
// # include<stack>
// using namespace std;
// void insertAtBottom(stack<int>&st ,int val){
//     stack<int>temp;
//     while(st.size()>0){
//         temp.push(st.top());
//         st.pop();
//     }
//     st.push(val);
//      while(temp.size()>0){
//         st.push(temp.top());
//         temp.pop();
//     }
// }
// void print(stack<int>&st){
//     stack<int>temp;
//     while(st.size()>0){
//         temp.push(st.top());
//         st.pop();
//     }
//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         st.push(temp.top());
//         temp.pop();
//     }
//     cout<<endl;
// }
// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     //push element at last .like 70 
//     // use another stack
//     print(st);
//     insertAtBottom(st,70);
//     print(st);
// }

// recursively
# include<iostream>
# include<stack>
using namespace std;
void push_bottom(stack<int>&st,int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    push_bottom(st,val);
    st.push(x);
}
void display(stack<int>&st){
    if(st.size()==0) return ;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    push_bottom(st,5);
    cout<<endl;
    display(st);
}