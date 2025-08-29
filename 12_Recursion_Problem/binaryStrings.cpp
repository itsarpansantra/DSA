//generrater all binary string of length n without consequtive 1
// mana 2 to ba 3 ta.. 1 aksatha asba na 
# include<iostream>
# include<string>
using namespace std;
int n=3;// global veriable
  void binary(string s){
    if(s.length()==n){
        cout<<s<<endl;
        return ;
    }
       binary(s+'0');
       if(s=="" || s[s.length()-1] =='0')
       binary(s+'1');
    }
int main(){
    binary("");
}