// evaluation 

# include<iostream>
# include<stack>
# include<string>
using namespace std;
int solve(int val1 , int val2 , char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string str = "79+4*8/3-";//postfix exp
    stack<int>val;

    for(int i=0;i<str.length();i++){

        // first check str[i] digit or operator

        if(str[i]>=48 && str[i]<=57){ // digit 0 to 9
            val.push(str[i]-48);
        }
        else{ //str[i] = operator +,-,*,/
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1,val2,str[i]);
            val.push(ans);
        }
    }
    cout<<val.top();
}


// postfix to infix
# include<iostream>
# include<stack>
# include<string>
using namespace std;
string solve(string val1 , string val2 , char ch){
    string s ="";
    s+=val1;
    s.push_back(ch);
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


//postfixt to  prefix 

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

