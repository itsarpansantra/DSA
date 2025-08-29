# include<iostream>
# include<stack>
# include<string>
using namespace std;
string solve(string val1 , string val2 , char ch){
    string s ="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
}
int main(){
    string str = "79+4*8/3-";//postfix exp
    stack<string>val;

    for(int i=0;i<str.length();i++){

        // first check str[i] digit or operator

        if(str[i]>=48 && str[i]<=57){ // digit 0 to 9
            val.push(to_string(str[i]-48));
        }
        else{ //str[i] = operator +,-,*,/
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout<<val.top();
}
