# include<iostream>
# include<stack>
using namespace std;
void insertAtBottom(stack<int>&st ,int val){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
     while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void insertAtIdx(stack<int>&st,int idx , int val){
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
     while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    } 
}
void print(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //push element at last .like 70 
    // use another stack
    print(st);
    insertAtBottom(st,70);
    print(st);
    insertAtIdx(st,2,50);
    print(st);
}