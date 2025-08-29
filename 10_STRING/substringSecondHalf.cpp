# include<iostream>
# include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len =str.length();
   
     cout<<str.substr(len/2)<<endl;
}