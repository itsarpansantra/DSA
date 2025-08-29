//10 20 30 40 50 60 
//60 50 40 30 20 10
// using  recursion
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
void reverse(stack<int>&st){
    if(st.size()==1) return ;
    int x = st.top();
    st.pop();
    reverse(st);
    push_bottom(st,x);
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
    display(st);
    reverse(st);
    cout<<endl;
    display(st);
}