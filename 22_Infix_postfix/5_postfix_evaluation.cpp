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
