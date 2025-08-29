# include<iostream>
# include<stack>
using namespace std;
// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     cout<<st.size()<<endl; // say the stack size

//     cout<<st.top()<<endl; // say stack top most element 

// }

// how to print element . this is a problem because stack is empty
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}