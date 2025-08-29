# include<iostream>
# include<stack>
# include<string>
# include<algorithm>
using namespace std;
string valid_string(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
    s = "";
    while(st.size()>0) {
        s+=st.top();
        st.pop();
    }
    return s;
}
int main(){
    string s = "aaabbcddaabffg";
    cout<<s<<endl;
    s=valid_string(s);
    reverse(s.begin(),s.end());
    cout<<s;
}