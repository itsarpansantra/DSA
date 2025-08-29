// print substring of abc
// output abc ab ac a bc b c ""
# include<iostream>
# include<string>
# include<vector>
using namespace std;
void storeSubeset(string str , string s ,vector<string>&v){
    if(str==""){
    v.push_back(s);
    return; 
    } 
    char ch =str[0];
    storeSubeset(str.substr(1),s,v);
    storeSubeset(str.substr(1),s+ch,v);
}
int main(){
    string str = "abc";
    string s ="";
    vector<string>v;
    storeSubeset(str,s,v);
    // for(string ele : v){
    //     cout<<ele<<endl;
    // }
    // je kono akta likhta pare
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}