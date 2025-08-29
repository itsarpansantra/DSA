// # include<iostream>
// # include<string>
// using namespace std;
// int main(){
//     string s ="arpan santra";
//     string p="";
//     for(int i=0;i<s.size();i++){
//         if(s[i]!='a') p+=s[i];
//     }
//     cout<<p<<endl;
// }

// using recursion
# include<iostream>
# include<string>
using namespace std;
// void removea(string ans , string original){
//     if(original.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch =original[0];
//     if(ch=='a') removea(ans,original.substr(1));
//     else removea(ans+ch,original.substr(1)); //substr(1) means 0 th element skip hoye galo

// }

// another processes
void removea(string ans , string original,int index){
    if(original.length()==index){
        cout<<ans<<endl;
        return;
    }
    char ch =original[index];
    if(ch=='a') removea(ans,original,index+1);
    else removea(ans+ch,original,index+1); 
}
int main(){
    string str = "arpan santra";
    string s ="";
    removea(s,str,0);
}