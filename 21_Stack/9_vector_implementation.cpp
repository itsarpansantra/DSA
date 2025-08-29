# include<iostream>
# include<vector>
using namespace std;
class Stack{ //user defined datastracture
public:
   vector<int>v;//no overflow condition
    Stack(){
        
    }
    void push(int val){ // vector all time puch back hoba
       v.push_back(val);
    }
    void pop(){
        if(v.size()==-1){
            cout<<"stack is empty !"<<endl;
            return;
        }
        v.pop_back(); // pop korla amni oi value r kono access thaka na
    }
    int size(){
        if(v.size()==-1){
            cout<<"stack is empty !"<<endl;
            return-1;
        }
        return v.size();
    }
    int top(){
        if(v.size()==0){
            cout<<"stack is empty !"<<endl;
            return-1;
        } 
        return v[v.size()-1]; // give me last element 
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top();
}