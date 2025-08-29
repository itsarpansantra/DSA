# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len =str.length();
    reverse(str.begin(),str.begin()+len/2);
     cout<<str<<endl;
}