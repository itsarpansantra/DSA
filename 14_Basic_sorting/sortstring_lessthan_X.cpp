// question also say that X r saman ba baro element gulo nita . in an assending order 
# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
int main(){
    string str = "AZXYZBDHP";
    string s ="";
    for(int i=0;i<str.size();i++){
        if(str[i]>='X'){
            s.push_back(str[i]);
        }
   }
   sort(s.begin(),s.end());
   cout<<s;
 }