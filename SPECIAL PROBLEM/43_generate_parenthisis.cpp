// given n pair parentheses ,writw a function generate all combination of well-formed parentheses
// input = 3
// output = ((())) (()()) (())() ()(()) ()()()
# include<iostream>
# include<string>
using namespace std;
void genarate(string s , int open_b ,int close_b,int n){
    if(close_b==n){
        cout<<s<<" ";
        return ;
    }
    if(open_b<n) genarate(s+'(',open_b+1,close_b,n);
    if(close_b<open_b)genarate(s+')',open_b,close_b+1,n);
}
int main(){
    int n=3;
    genarate("",0,0,n);
}