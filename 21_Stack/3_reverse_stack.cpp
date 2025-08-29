# include<iostream>
# include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        st.push(temp.top());
        cout<<st.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}
int main(){
    //basically stack reverseskorta bolacha 
    // tar janno amra 3 ta stack use korbo
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);//usually display function
    stack<int>gt;
    // empty st into gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    // empty gt into rt
    stack<int>rt;
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    // empty rt into st
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    print(st);
}
