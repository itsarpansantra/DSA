# include<iostream>
# include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    stack<int>temp;// temporary stack copy stack element

    // putting element into stack 

    while(st.size()>0){
        
        cout<<st.top()<<" "; // 40 30 20 10 
        //int x = st.top(); //short cut
        temp.push(st.top());
        st.pop();

       
    }
    while(temp.size()>0){
       cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }

    // stack element print in bottom to top 10 20 30 40 


    while(st.size()>0){
        
        cout<<st.top()<<" ";
        //int x = st.top(); //short cut
        temp.push(st.top());
        st.pop();

       
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
   

}