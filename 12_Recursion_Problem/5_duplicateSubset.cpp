# include<iostream>
# include<string>
# include<vector>
using namespace std;
void storeSubeset(string str , string s ,vector<string>&v,bool flag){
    if(str==""){
    v.push_back(s);
    return; 
    } 
    char ch =str[0];
    if(str.length()==1){
         if(flag==true)storeSubeset(str.substr(1),s+ch,v,true);
          storeSubeset(str.substr(1),s,v,true);
         return ; // necher jinis gulo na chala
    }
    char dh =str[1];
    if(ch==dh){ // duplicate
        if(flag==true)storeSubeset(str.substr(1),s+ch,v,true);
         storeSubeset(str.substr(1),s,v,false);
    }
    else{ // no duplicate
     if(flag==true)storeSubeset(str.substr(1),s+ch,v,true);
         storeSubeset(str.substr(1),s,v,true);
    }
}
int main(){
    string str = "aac";
    string s ="";
    vector<string>v;
    storeSubeset(str,s,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}