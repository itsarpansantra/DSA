// wrong code
# include<iostream>
# include<string>
using namespace std;
string cap(int n){
    string str="3322251";
    str = cap(n-1);
    string ans= "";
    if(n==1){
        cout<<ans<<" ";
        return "1";
    } 
    int freq=1;
    char ch = str[0];
    for(int i=1;i<str.size();i++){
        char dh = str[i];
        if(ch==dh){
            freq++;
        }
        else{
            ans+=(to_string(freq)+ch);
            freq=1;
            ch=dh;
        }
    }
    ans+=(to_string(freq)+ch);
    return ans;
}
int main(){
    string str="3322251";
    int n = str.size();
    cap(n);
}