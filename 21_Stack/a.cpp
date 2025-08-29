# include<iostream>
# include<stack>
using namespace std;
bool check(string str){
    stack<char>st;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch=='('|| ch=='{' || ch=='[') st.push(ch);
        else{
           if( st.empty())return false;
           char top = st.top();
           if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[') ) st.pop();
           else return false;
        }
    }
    return st.empty();
}
int main(){
    // stack<int>st;
    // int arr[]={3,1,2,5,4,6,2,3};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int ans[n];
    // st.push(arr[n-1]);
    // ans[n-1] = -1;
    // for(int i=n-2;i>=0;i--){
    //     while(st.size()>0 && st.top()<=arr[i]) st.pop();
    //     if(st.size()==0) ans[i]=-1;
    //     else ans[i]=st.top();
    //     st.push(i);
    // }
    // for(int i=0;i<n;i++){
    //     cout<<ans[i]<<" ";
    // }
    string str = "()[]{}";
    cout<<check(str);
    //cout<<check(str);
}