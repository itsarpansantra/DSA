# include<iostream>
using namespace std;
class Stack{ //user defined datastracture
public:
    int arr[5]; // akhana array size dita hoba
    int idx;
    Stack(){
        idx =-1; // constructor modha na likhla error diba
    }
    void push(int val){
        if(idx==4){
            cout<<"stack is full! "<<endl;
            return ;
        }
        idx++;
        arr[idx]=val; // array te value insert korchi
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty !"<<endl;
            return;
        }
        idx--; // pop korla amni oi value r kono access thaka na
    }
    int size(){
        return idx +1; // karon -1 thaka start to taii
    }
    int top(){
        if(idx==-1){
            cout<<"stack is empty !"<<endl;
            return-1;
        }
        return arr[idx]; // top most element return korba
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    st.display();
}