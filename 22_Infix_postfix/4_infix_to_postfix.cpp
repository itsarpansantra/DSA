# include<iostream>
# include<stack>
# include<string>
using namespace std;
string solve(string val1 , string val2 , char ch){
    // we have to store prefix in the ans
    // prefix-> op val1val2

    string s =" ";
    
    s+=val1;
    s+=val2;
    s.push_back(ch);
    return s;
}
int priority(char ch){
    if(ch =='+'||ch=='-') return 1;
    else return 2;
}
int main(){
    string str = "1+(6+2)*4/8-3";
    stack<string>val;
    stack<char>op;

    for(int i=0;i<str.length();i++){

        // first check str[i] digit or operator

        if(str[i]>=48 && str[i]<=57){ // digit 0 to 9
            val.push(to_string(str[i]-48));
        }
        else{ //str[i] = operator +,-,*,/,(,)
            if(op.size()==0) op.push(str[i]); // stck kichu na thakla push 
            else if(str[i]=='(') op.push(str[i]); // string first jodi bracket hoy tahola push
            else if(op.top()=='(') op.push(str[i]); // aga thaka bracket thakla tarpor oparator ala push
            else if(str[i]==')'){ // string closebracket asa gala
                while(op.top()!='('){ // jatokhan na open bracket asa
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();// opening bracket udi diba
            }
            else if(priority(str[i])>priority(op.top()))op.push(str[i]); // string ele priority basi stack ele thaka tahola push 
            
            else{ // priority(str[i])<=priority(op.top())
                while(op.size()>0 && priority(str[i])<=priority(op.top())){
                    // i have to calculate val1 and val2
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(str[i]);
            }
        }
    }

    // the operator can have values

    // so make is empty
     while(op.size()>0){
        // i have to calculate val1 and val2
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }   
    cout<<val.top()<<" ";
}