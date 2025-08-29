// find all permutation of an string given all elements of the string are unique
# include<iostream>
# include<string>
using namespace std;
void permutation(string str , string s){
    if(str==""){
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permutation(left+right,s+ch);
    }
}
int main (){
    string str="abc";
    string s="";
    permutation(str,s);
}